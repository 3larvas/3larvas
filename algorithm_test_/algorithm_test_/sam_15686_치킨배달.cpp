// https://www.acmicpc.net/problem/15686
#pragma warning (disable : 4996)
#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
queue<pair<int, int>> home_q, chkn_q;
//vector<pair<int, int>> chkn_all_v, chkn_v;
pair<int, int> chkn_all_v[15], chkn_v[15];
int N, M, map[51][51], chkn_all_size = 0, chkn_size = 0, home_size, result = 987654321;
int dir_r[4] = { 0, 0, 1, -1 };
int dir_c[4] = { 1, -1, 0, 0 };

void BFS() {
	//printf("BFS===============\n");
	int bfs_result = 0;
	int bfs_map[51][51] = { 0, };
	for (int r = 0; r < N; r++) {
		for (int c = 0; c < N; c++) {
			bfs_map[r][c] = map[r][c];
		}
	}
	//for (int i = 0; i < M; i++) bfs_map[chkn_v.at(i).first][chkn_v.at(i).second] = 2;
	for (int i = 0; i < M; i++) bfs_map[chkn_v[i].first][chkn_v[i].second] = 2;


	queue<pair<int, int>> tmp_q = home_q;
	int idx = 3;
	while(!tmp_q.empty()){
		idx += 3;
		queue<pair<int, int>> q;
		q.push(make_pair(tmp_q.front().first , tmp_q.front().second));
		q.push(make_pair(-1, -1));
		tmp_q.pop();
		
		int cnt = 0;

		while (!q.empty()) {
			int cur_r = q.front().first;
			int cur_c = q.front().second;
			q.pop();
			if (cur_r == -1) {
				cnt++;
				q.push(make_pair(-1, -1));
				continue;
			}
			if (bfs_map[cur_r][cur_c] == 2) {
				/*for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						printf("%2d ", bfs_map[i][j]);
					}
					printf("\n");
				}
				printf("cnt : %d \n", cnt);
				printf("*********\n");*/
				bfs_result += cnt;
				break;
			}
			bfs_map[cur_r][cur_c] =idx;
			
			for (int i = 0; i < 4; i++) {
				int nxt_r = cur_r + dir_r[i];
				int nxt_c = cur_c + dir_c[i];
				if (nxt_r >= 0 && nxt_r < N && nxt_c >= 0 && nxt_c < N && bfs_map[nxt_r][nxt_c]!=idx) {
					q.push(make_pair(nxt_r, nxt_c));					
				}
			}
		}
	}
	//printf("result : %d \n", bfs_result);
	if (result > bfs_result) result = bfs_result;

}

void DFS(int idx, int cnt) {
	if (cnt == M) {
		printf("");
		//for (int i = 0; i < M; i++)printf("(%d, %d) ", chkn_v.at(i).first, chkn_v.at(i).second);
		//for (int i = 0; i < M; i++)printf("(%d, %d) ", chkn_v[i].first, chkn_v[i].second);
		//printf("\n");
		BFS();
		return;
	}
	//for (int i = idx; i < chkn_size; i++) {
	for (int i = idx; i < chkn_all_size; i++) {
		//chkn_v.push_back(chkn_all_v.at(i));
		chkn_v[chkn_size] = chkn_all_v[i];
		chkn_size++;
		DFS(i + 1, cnt + 1);
		chkn_v[chkn_size] = make_pair(0,0);
		chkn_size--;
		//chkn_v.pop_back();
	}
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int input = 0;
			scanf("%d", &input);
			map[i][j] = input;
			if (input == 1) {
				home_q.push(make_pair(i, j));
			}
			else if (input == 2){
				map[i][j] = 0;
				chkn_q.push(make_pair(i, j));
				chkn_all_v[chkn_all_size] = make_pair(i, j);
				chkn_all_size++;
				//chkn_all_v.push_back(make_pair(i, j));
			}
		}
	}
	//chkn_size = chkn_all_v.size();
	home_size = home_q.size();
	DFS(0, 0);
	printf("%d", result);
	return 0;
}