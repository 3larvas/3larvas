// √‚√≥ : https://www.acmicpc.net/problem/14502
#include <iostream>	
#include <queue>
using namespace std;
int n, m;
int result; 

void cnt_zero(int arr[8][8], queue<pair<int, int>> q) {
	int tmp_result = 0;
	int d_col[4] = { 0, 0, 1, -1 };
	int d_row[4] = { 1, -1, 0, 0 };

	while (!q.empty()) {
		int cur_col = q.front().first;
		int cur_row = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nxt_col = cur_col + d_col[i];
			int nxt_row = cur_row + d_row[i];
			if (nxt_col >= 0 && nxt_col < m && nxt_row >= 0 && nxt_row < n) {
				if (arr[nxt_row][nxt_col] == 0) {
					arr[nxt_row][nxt_col] = 3;
					q.push(make_pair(nxt_col, nxt_row));
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) tmp_result += 1;;
		}
	}
	if (tmp_result > result) result = tmp_result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	int map[8][8] = { 0, };
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if(map[i][j]==2) q.push(make_pair(j, i));
		}
	}
	
	for (int i = 0; i < n * m; i++) {
		int i_col = i % m; int i_row = i / m;
		if (map[i_row][i_col] == 0) {
			for (int j = i + 1; j < n * m; j++) {
				int j_col = j % m; int j_row = j / m;
				if (map[j_row][j_col] == 0) {
					for (int k = j + 1; k < n * m; k++) {
						int k_col = k % m; int k_row = k / m;
						if (map[k_row][k_col] == 0) {
							int tmp_map[8][8];
							copy(&map[0][0], &map[0][0] + 8 * 8, &tmp_map[0][0]);
							tmp_map[i_row][i_col] = 1;
							tmp_map[j_row][j_col] = 1;
							tmp_map[k_row][k_col] = 1;
							cnt_zero(tmp_map, q);
						}
					}
				}
			}
		}
	}
	cout << result;
	return 0;
}