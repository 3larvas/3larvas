//// √‚√≥ : https://www.acmicpc.net/problem/15651
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m;
//char arr[15];
//
//void dfs(int cnt) {
//	if (cnt == m) {
//		for (int i = 0; i < m; i++) printf("%d", arr[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		arr[cnt] = i;
//		dfs(cnt + 1);
//	}
//}
//int main() {
//	scanf("%d %d", &n, &m);
//	dfs(0);
//	return 0;
//}