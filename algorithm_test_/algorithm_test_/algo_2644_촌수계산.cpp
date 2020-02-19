//// √‚√≥ : https://www.acmicpc.net/problem/2644
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int n, start_p, end_p, m;
//vector<pair<int, int>> relshp;
//bool vis[100], chk;
//
//void BFS() {
//	queue<pair<int, int>> q;
//	q.push(make_pair(start_p, 0));
//	while (!q.empty()) {
//		vis[q.front().first] = true;
//		if (q.front().first == end_p) {
//			cout << q.front().second;
//			chk = true;
//			return;
//		}
//		int find_idx = q.front().first;
//		for (int i = 0; i < m; i++) {
//			if (relshp.at(i).first == find_idx && vis[relshp.at(i).second]==false) {
//				q.push(make_pair(relshp.at(i).second, q.front().second + 1));
//			}
//			else if (relshp.at(i).second == find_idx && vis[relshp.at(i).first] == false) {
//				q.push(make_pair(relshp.at(i).first, q.front().second + 1));
//			}
//		}
//		q.pop();
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	cin >> start_p >> end_p;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b = 0;
//		cin >> a >> b;
//		relshp.push_back(make_pair(a, b));
//	}
//	BFS();
//	if (!chk) cout << -1;
//	return 0;
//}