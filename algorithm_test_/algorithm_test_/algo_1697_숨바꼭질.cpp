//// √‚√≥ : https://www.acmicpc.net/problem/1697
//#include <iostream>
//#include <queue>
//#include <vector>
//#define MAX 100001
//using namespace std;
//
//int n, k;
//bool vis[MAX];
//
//void BFS() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(n, 0));
//	while (!q.empty()) {
//		if (q.front().first == k) {
//			cout << q.front().second;
//			return;
//		}
//		int nxt_idx = 0;
//		vis[q.front().first]=true;
//		for (int i = 0; i < 3; i++) {
//			switch (i) {
//			case 0:
//				nxt_idx = q.front().first - 1;
//				break;
//			case 1:
//				nxt_idx = q.front().first + 1;
//				break;
//			case 2:
//				nxt_idx = 2 * q.front().first;
//				break;
//			}
//			if (nxt_idx >= 0 && nxt_idx < MAX) {
//				if (vis[nxt_idx] == false) {
//					q.push(make_pair(nxt_idx, q.front().second + 1));
//				}
//			}
//		}
//		q.pop();
//	}
//}
//
//int main() {
//	cin >> n >> k;
//	BFS();
//	return 0;
//}