//// √‚√≥ : https://www.acmicpc.net/problem/15650
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m;
//int arr[10];
//bool vis[10];
//
//void DFS(int cnt) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++) printf("%d ", arr[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (!vis[i]) {
//			if (cnt > 0 && arr[cnt - 1] > i) continue;
//			arr[cnt] = i;
//			vis[i] = true;
//			DFS(cnt + 1);
//			vis[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	DFS(0);
//	return 0;
//}