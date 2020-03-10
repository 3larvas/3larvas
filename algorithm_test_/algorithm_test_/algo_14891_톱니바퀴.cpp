////출처 :https://www.acmicpc.net/problem/14891
//#pragma warning (disable:4996)
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int t[4][8];
//int n;
//int spin[100][2];
//int result;
//
//void spin_f(int spin_t, int spin_d) {
//	if (spin_d == 1) {
//		int tmp = t[spin_t][7];
//		for (int i = 6; i >= 0; i--) t[spin_t][i + 1] = t[spin_t][i];
//		t[spin_t][0] = tmp;
//	}
//	else if (spin_d == -1) {
//		int tmp = t[spin_t][0];
//		for (int i = 1; i < 8; i++) t[spin_t][i - 1] = t[spin_t][i];
//		t[spin_t][7] = tmp;
//	}
//}
//
//int main() {
//	for (int i = 0; i < 4 * 8; i++) scanf("%1d", &t[i/8][i%8]);
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d %d", &spin[i][0], &spin[i][1]);
//
//	for (int i = 0; i < n; i++) {
//		queue<pair<int, int>> q;
//		bool vis[4] = { 0, };
//		int spin_t = spin[i][0] - 1;
//		int spin_d = spin[i][1];
//		q.push(make_pair(spin_t, spin_d));
//		while (!q.empty()) {
//			int cur_t = q.front().first;
//			int cur_d = q.front().second;
//			vis[cur_t] = 1;
//			q.pop();
//			if (cur_t + 1 < 4) { // 오른쪽 방향
//				if (t[cur_t][2] != t[cur_t + 1][6] && vis[cur_t + 1] == 0) {
//					q.push(make_pair(cur_t + 1, cur_d * (-1)));
//				}
//			}
//			if (cur_t - 1 >= 0) { // 왼쪽 방향
//				if (t[cur_t][6] != t[cur_t - 1][2] && vis[cur_t - 1] == 0) {
//					q.push(make_pair(cur_t - 1, cur_d * (-1)));
//				}
//			}
//			spin_f(cur_t, cur_d);
//		}
//	}
//	if (t[0][0] == 1) result += 1;
//	if (t[1][0] == 1) result += 2;
//	if (t[2][0] == 1) result += 4;
//	if (t[3][0] == 1) result += 8;
//	printf("%d", result);
//	return 0;
//}