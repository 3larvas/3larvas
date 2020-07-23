//// √‚√≥ : https://www.acmicpc.net/problem/15650
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m;
//int arr[10];
//int vis[10];
//
//void DFS(int cnt, int pre_val) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++)printf("%d ", arr[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = pre_val+1; i <= n; i++) {
//		if (!vis[i]) {
//			arr[cnt] = i;
//			vis[i] = true;
//			DFS(cnt + 1, i);
//			vis[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	DFS(0, 0);
//	return 0;
//}