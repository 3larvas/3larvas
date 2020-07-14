// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXRDL1aeugDFAUo&categoryId=AWXRDL1aeugDFAUo&categoryType=CODE&&&
#pragma warning(disable : 4996)
#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;

struct MapInfo {
	int arr_list[11];
	int cnt;
};
int area_val[11];
int T;
int dir_r[5] = { 0, -1, 0, 1, 0 };
int dir_c[5] = { 0, 0, 1, 0, -1 };
queue<pair<int, int>> q1, q2;
MapInfo map[11][11];
MapInfo empty_map[11][11];
bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first + a.second > b.first + b.second;
}

int main() {
	scanf("%d", &T);
	for(int k = 1 ; k <= T ; k++){
		copy(&empty_map[0][0], &empty_map[0][0] + 11 * 11, &map[0][0]);
		int M = 0, A = 0, input = 0, result_1 = 0, result_2 = 0;
		scanf("%d %d", &M, &A);
		int cur_1_r = 1, cur_1_c = 1, cur_2_r = 10, cur_2_c = 10;
		q1.push(make_pair(cur_1_r, cur_1_c));
		q2.push(make_pair(cur_2_r, cur_2_c));
		for (int i = 0; i < M; i++) {
			scanf("%d", &input);
			int nxt_r = cur_1_r + dir_r[input];
			int nxt_c = cur_1_c + dir_c[input];
			q1.push(make_pair(nxt_r, nxt_c));
			cur_1_r = nxt_r;
			cur_1_c = nxt_c;
		}
		for (int i = 0; i < M; i++) {
			scanf("%d", &input);
			int nxt_r = cur_2_r + dir_r[input];
			int nxt_c = cur_2_c + dir_c[input];
			q2.push(make_pair(nxt_r, nxt_c));
			cur_2_r = nxt_r;
			cur_2_c = nxt_c;
		}
		for (int i = 1; i <= A; i++) {
			//printf("*******11111111111111111111111*****\n");
			int r = 0, c = 0, dis = 0, pwr = 0;
			scanf("%d %d %d %d", &c, &r, &dis, &pwr);
			area_val[i] = pwr;
			queue<pair<int, int>> q_tmp;
			q_tmp.push(make_pair(r, c));
			while (!q_tmp.empty()) {
				/*for (int a = 1; a <= 10; a++) {
					for (int b = 1; b <= 10; b++) {
						printf("%d", map[a][b].cnt);
					}
					printf("\n");
				}
				printf("************\n");*/
				int cur_r = q_tmp.front().first;
				int cur_c = q_tmp.front().second;
				q_tmp.pop();
				for (int j = 1; j <= 4; j++) {
					int nxt_r = cur_r + dir_r[j];
					int nxt_c = cur_c + dir_c[j];
					if (0 < nxt_r && nxt_r <= 10 && 0 < nxt_c && nxt_c <= 10 
						&& map[nxt_r][nxt_c].arr_list[map[nxt_r][nxt_c].cnt] != i) {
						if (abs(nxt_r - r)+ abs(nxt_c - c) <= dis) {
							q_tmp.push(make_pair(nxt_r, nxt_c));
							map[nxt_r][nxt_c].cnt += 1;
							map[nxt_r][nxt_c].arr_list[map[nxt_r][nxt_c].cnt] = i;
						}
					}
				}
			}
		}
		while (M-- >= 0) {
			//printf("==== %d ====\n", M);
			int result_1_tmp = 0, result_2_tmp = 0;
			int p_1_r = q1.front().first;
			int p_1_c = q1.front().second;
			int p_2_r = q2.front().first;
			int p_2_c = q2.front().second;
			//printf("p_1_r : %d, p_1_c : %d\n", p_1_r, p_1_c);
			//printf("p_2_r : %d, p_2_c : %d\n", p_2_r, p_2_c);
			q1.pop();
			q2.pop();
			if (map[p_1_r][p_1_c].cnt == 0) {
				if (map[p_2_r][p_2_c].cnt == 0) {
					//printf("zero\n", M);
					continue; 
				}
				for (int i = 1; i <= map[p_2_r][p_2_c].cnt; i++) {
					result_2_tmp = max(result_2_tmp, area_val[map[p_2_r][p_2_c].arr_list[i]]);
				}
				result_2 += result_2_tmp;
			}
			else if (map[p_2_r][p_2_c].cnt == 0) {
				for (int i = 1; i <= map[p_1_r][p_1_c].cnt; i++) {
					result_1_tmp = max(result_1_tmp, area_val[map[p_1_r][p_1_c].arr_list[i]]);
				}
				result_1 += result_1_tmp;
			}
			else {
				//printf("####\n");
				vector<pair<int, int>> v;
				for (int i = 1; i <= map[p_1_r][p_1_c].cnt; i++) {
					for (int j = 1; j <= map[p_2_r][p_2_c].cnt; j++) {
						if (map[p_1_r][p_1_c].arr_list[i] == map[p_2_r][p_2_c].arr_list[j]) {
							v.push_back(make_pair(area_val[map[p_1_r][p_1_c].arr_list[i]] / 2,
								area_val[map[p_2_r][p_2_c].arr_list[j]] / 2));
							//printf("@@@@@@@@@@@@@@@@@@@@@@\n");
							/*result_1_tmp = max(result_1_tmp, area_val[map[p_1_r][p_1_c].arr_list[i]] / 2);
							result_2_tmp = max(result_2_tmp, area_val[map[p_2_r][p_2_c].arr_list[j]] / 2);*/
						}
						else {
							v.push_back(make_pair(area_val[map[p_1_r][p_1_c].arr_list[i]],
								area_val[map[p_2_r][p_2_c].arr_list[j]]));
							/*result_1_tmp = max(result_1_tmp, area_val[map[p_1_r][p_1_c].arr_list[i]]);
							result_2_tmp = max(result_2_tmp, area_val[map[p_2_r][p_2_c].arr_list[j]]);*/
						}
					}
				}
				sort(v.begin(), v.end(), cmp);
				result_1 += v.front().first;
				result_2 += v.front().second;
			}
			
			//printf("result_1 : %d\n", result_1_tmp);
			//printf("result_2 : %d\n", result_2_tmp);
			//printf("************************\n");

		}
		
		printf("#%d %d\n", k, result_1 + result_2);
		
		
	}


	return 0;
}
