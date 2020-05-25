////https://www.acmicpc.net/problem/17140
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <utility>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int r, c, k;
//int map[101][101];
//int R, C, cnt;
//bool chk;
//bool compare(pair<int, int> a, pair<int, int> b ) {
//	if (a.second == b.second) {
//		return a.first < b.first;
//	}
//	else
//		return a.second < b.second;
//}
//
//int main() {
//	R = 3, C = 3;
//	scanf("%d %d %d", &r, &c, &k);
//	for (int i = 1; i <= 3; i++) {
//		for (int j = 1; j <= 3; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//	while (cnt<=100) {	
//		if (map[r][c] == k) {
//			chk = true;
//			break;
//		}
//		cnt++;
//		if (R >= C) {
//			int tmp_c = 1;
//			for (int i = 1; i <= R; i++) {
//				int tmp_arr[101] = { 0, };
//				vector<pair<int, int>> tmp_vec;
//				int max = 0;
//				int min = 101;				
//				for (int j = 1; j <= C; j++) {
//					if (map[i][j] != 0) {
//						tmp_arr[map[i][j]] += 1;
//						if (max < map[i][j])
//							max = map[i][j];
//						if (min > map[i][j])
//							min = map[i][j];
//					}
//					map[i][j] = 0;
//				}
//				for (int j = min; j <= max; j++) {
//					if (tmp_arr[j] != 0) {
//						tmp_vec.push_back(make_pair(j, tmp_arr[j]));						
//					}
//				}
//				
//				sort(tmp_vec.begin(), tmp_vec.end(), compare);
//				for (int j = 1; j < tmp_vec.size()*2 && j <= 100; j += 2) {
//					map[i][j] = tmp_vec.at(j / 2).first;
//					map[i][j+1] = tmp_vec.at(j / 2).second;
//					if(tmp_c < j+1) tmp_c = j + 1;
//				}
//			}
//			C = tmp_c;
//		}
//		else {
//			int tmp_r = 1;
//			for (int i = 1; i <= C; i++) {
//				int tmp_arr[101] = { 0, };
//				vector<pair<int, int>> tmp_vec;
//				int max = 0;
//				int min = 101;
//				for (int j = 1; j <= R; j++) {
//					if (map[j][i] != 0) {
//						tmp_arr[map[j][i]] += 1;
//						if (max < map[j][i])
//							max = map[j][i];
//						if (min > map[j][i])
//							min = map[j][i];
//					}
//					map[j][i] = 0;
//				}
//				for (int j = min; j <= max; j++) {
//					if (tmp_arr[j] != 0) {
//						tmp_vec.push_back(make_pair(j, tmp_arr[j]));						
//					}
//				}
//				sort(tmp_vec.begin(), tmp_vec.end(), compare);
//				for (int j = 1; j < tmp_vec.size() * 2 && j <= 100; j += 2) {
//					map[j][i] = tmp_vec.at(j / 2).first;
//					map[j + 1][i] = tmp_vec.at(j / 2).second;
//					if (tmp_r < j + 1) tmp_r = j + 1;
//				}
//			}
//			R = tmp_r;
//		}
//	}
//	if (!chk) printf("-1");
//	else printf("%d", cnt);
//	return 0;
//}