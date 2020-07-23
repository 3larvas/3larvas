//// √‚√≥ : https://www.acmicpc.net/problem/15655
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//int arr[10];
//int vis[10];
//int result[10];
//
//void DFS(int cnt, int cur_idx) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++) printf("%d ", result[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = cur_idx; i < n; i++) {
//		if (!vis[i]) {
//			result[cnt] = arr[i];
//			vis[i] = true;
//			DFS(cnt+1, i+1);
//			vis[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) 
//		scanf("%d", &arr[i]);
//	sort(&arr[0], &arr[0] + n);
//	DFS(0, 0);
//	return 0;
//}
