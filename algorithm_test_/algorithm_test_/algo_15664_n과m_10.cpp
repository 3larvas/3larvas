//// √‚√≥ : https://www.acmicpc.net/problem/15663
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
//		for (int i = 0; i < m; i++)
//			printf("%d ", result[i]);
//		printf("\n");
//		return;
//	}
//	int used[10001] = { false, };
//	for (int i = cur_idx; i < n; i++) {
//		if (!vis[i] && !used[arr[i]]) {
//			result[cnt] = arr[i];
//			used[arr[i]] = true;
//			vis[i] = true;
//			DFS(cnt + 1, i);
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