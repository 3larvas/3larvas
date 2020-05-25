//// https://www.acmicpc.net/problem/17779
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <utility>
//using namespace std;
//int map_cnt[21][21];
//int N;
//
//void count_num(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3, pair<int, int> p4){
//	int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, cnt_4 = 0, cnt_5 = 0;
//	int gap_1 = p2.first - p1.first;
//	int gap_2 = p3.first - p2.first;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (i < p1.second && j <= p2.first) {
//				if (j >= p1.first && i >= p2.second) {
//					if (!(i + gap_1 <= p1.second && j + gap_1 <= p2.first)) {
//						//continue;
//					}
//					else {
//						cnt_1 += map_cnt[i][j];
//						continue;
//					}
//				}
//				else {
//					cnt_1 += map_cnt[i][j];
//					continue;
//				}
//				
//				
//			}
//			else if (i <= p3.second && j > p2.first) {
//				if (j <= p3.first && i >= p2.second) {
//					if (!(i + gap_2 <= p3.second && j - gap_2 >= p2.first)) {
//						//continue;
//					}
//					else {
//						cnt_2 += map_cnt[i][j];
//						continue;
//					}
//				}
//				else {
//					cnt_2 += map_cnt[i][j];
//					continue;
//				}
//			}
//			else if (i >= p1.second && j < p4.first) {
//				if ((i - gap_1 >= p1.second && j + gap_1 < p4.first)) {
//					cnt_3 += map_cnt[i][j];
//					continue;
//				}
//			}
//			else if (i > p3.second && j <= p4.first) {
//				if ((i - gap_2 > p3.second && j - gap_2 >= p4.first)) {
//					cnt_4 += map_cnt[i][j];
//					continue;
//				}
//			}
//			cnt_5 += map_cnt[i][j];
//			
//		}
//	}
//	printf("");
//}
//
//void div_area(int x, int y) {
//	pair<int, int> point_1, point_2, point_3, point_4;
//	point_1.first = x, point_1.second = y;
//	for(int d1 = 1 ; d1 < N ; d1++)
//		for (int d2 = 1; d2 < N; d2++) {
//			if (y - d1 >= 0 && x + d1 + d2 <= N && y + d2 <= N) {
//				point_2.first = x + d1;			point_2.second = y - d1;
//				point_3.first = x + d1 + d2;	point_3.second = y - d1 + d2;
//				point_4.first = x + d2;			point_4.second = y + d2;
//				count_num(point_1, point_2, point_3, point_4 );
//			}
//		}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)
//			scanf("%d", &map_cnt[i][j]);
//	
//	for (int i = 2; i < N; i++)
//		for (int j = 1; j < N-1; j++)
//			div_area(j,i);
//
//	return 0;
//}
