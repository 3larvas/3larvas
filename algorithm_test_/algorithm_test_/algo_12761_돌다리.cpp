//#include <iostream>
//#include <queue>
//#define MAX 100001
//using namespace std;
//
//int a, b, n, m;
//int map[MAX] = { 0 };
//int result = 0;
//
//void BFS(queue<int> &q) {
//	while (!q.empty()) {
//		int cur_idx = q.front();
//		q.pop();
//		if (cur_idx == m) {
//			result = map[cur_idx];
//			break;
//		}
//		for (int i = 0; i < 8; i++) {
//			int nxt_idx;
//			switch (i){
//				case 0:
//					nxt_idx = cur_idx + 1;
//					break;
//				case 1:
//					nxt_idx = cur_idx - 1;
//					break;
//				case 2:
//					nxt_idx = cur_idx + a;
//					break;
//				case 3:
//					nxt_idx = cur_idx - a;
//					break;
//				case 4:
//					nxt_idx = cur_idx + b;
//					break;
//				case 5:
//					nxt_idx = cur_idx - b;
//					break;
//				case 6:
//					nxt_idx = cur_idx * a;
//					break;
//				case 7:
//					nxt_idx = cur_idx * b;
//					break;
//				default:
//					break;
//			}
//			if (nxt_idx >= 0 && nxt_idx < MAX) {
//				if (map[nxt_idx] == 0) {
//					map[nxt_idx] = map[cur_idx] + 1;
//					q.push(nxt_idx);
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> a >> b >> n >> m;
//	queue<int> q;
//	q.push(n);
//	BFS(q);
//	cout << result;
//	return 0;
//}