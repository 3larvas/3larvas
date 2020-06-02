//// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5VwAr6APYDFAWu&categoryId=AV5VwAr6APYDFAWu&categoryType=CODE
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <queue>
//using namespace std;
//
//int T, N;
//int map[21][21];
//int dir_r[4] = { 1, 1, -1, -1  };
//int dir_c[4] = { 1, -1, -1, 1  };
//int result = -1;
//
//void check_route(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3, pair<int, int> p4) {
//	int arr[50] = { 0, };
//	int idx = 0;
//	int dir = 0;
//	pair<int, int> cur_point = p1;
//	while (!(dir==3 && cur_point.first == p1.first && cur_point.second == p1.second)) {
//		if (dir == 0 && cur_point.first == p2.first && cur_point.second == p2.second) dir++;
//		else if (dir == 1 && cur_point.first == p3.first && cur_point.second == p3.second) dir++;
//		else if (dir == 2 && cur_point.first == p4.first && cur_point.second == p4.second) dir++;
//		cur_point.first += dir_r[dir];
//		cur_point.second += dir_c[dir];
//		for (int i = 0; i < idx; i++)
//			if (arr[i] == map[cur_point.first][cur_point.second])
//				return;
//		arr[idx] = map[cur_point.first][cur_point.second];
//		idx++;
//	}
//	if (result < idx) result = idx;
//}
//
//void make_route(int r, int c, int dis_l, int dis_r, int dis_d) {
//	pair<int, int> point_1 = make_pair(r-1, c), point_2 = make_pair(r , c + 1), point_3 = make_pair(r + 1, c), point_4 = make_pair(r, c -1);
//	for (int dis_1 = 0; (dis_1 <= dis_l) && (dis_1 <= dis_d); dis_1++) {
//		for (int dis_2 = 0; (dis_2 <= dis_r) && (dis_2 <= dis_d); dis_2++) {
//			int tmp[21][21] = { 0, };
//			pair<int, int> p1 = point_1, p2 = point_2, p3 = point_3, p4 = point_4;
//			
//			p2.first  += dis_2;
//			p2.second += dis_2;
//
//			p3.first  += dis_2;
//			p3.second += dis_2;
//			p3.first  += dis_1;
//			p3.second -= dis_1;
//			if (p3.first >= N) continue;
//			p4.first  += dis_1;
//			p4.second -= dis_1;
//			tmp[point_1.first][point_1.second] = 1;
//			tmp[p2.first][p2.second] = 1;
//			tmp[p3.first][p3.second] = 1;
//			tmp[p4.first][p4.second] = 1;
//			/*for (int i = 0; i < N; i++) {
//				for (int j = 0; j < N; j++)
//					printf("%d", tmp[i][j]);
//				printf("\n");
//			}*/
//			check_route(p1, p2, p3, p4);
//			//printf("*******************************\n");
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++) {
//		scanf("%d", &N);
//		for (int i = 0; i < N; i++)
//			for (int j = 0; j < N; j++)
//				scanf("%d", &map[i][j]);
//		for (int r = 1; r < N - 1; r++) {
//			for (int c = 1; c < N - 1; c++) {
//				int dis_l = c-1;
//				int dis_r = N - c - 2;
//				int dis_d = N - r - 2;
//				make_route(r, c, dis_l, dis_r, dis_d);
//			}
//		}
//		printf("#%d %d\n",t+1, result);
//		result = -1;
//	}
//	return 0;
//}