////√‚√≥ : https://www.acmicpc.net/problem/2606
//#include <iostream>
//#include <queue>
//using namespace std;
//
//bool matrix[101][101] = { false, };
//int matrix_vis[101] = { 0, };
//int num_com = 0;
//int num_net = 0;
//
//void BFS() {
//	queue<int> q;
//	q.push(1);
//	matrix_vis[1] = 1;
//	while (!q.empty()) {
//		for (int i = 0; i <= num_com; i++) {
//			if (matrix[q.front()][i] && matrix_vis[i] == 0) {
//				matrix_vis[i] = matrix_vis[q.front()] + 1;
//				q.push(i);
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
//	int result = 0;
//	cin >> num_com;
//	cin >> num_net;
//	for (int i = 0; i < num_net ; i++) {
//		int a, b = 0;
//		cin >> a >> b;
//		matrix[a][b] = matrix[b][a] = true;
//	}
//	BFS();
//	for (int i = 0; i < 101; i++) {
//		if (matrix_vis[i] != 0) result++;
//	}
//	cout << result - 1;
//	return 0;
//}