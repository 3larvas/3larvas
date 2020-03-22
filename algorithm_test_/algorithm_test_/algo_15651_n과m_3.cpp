//// √‚√≥ : https://www.acmicpc.net/problem/15651
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m;
//char arr[15];
//
//void DFS(int cnt) {
//	if (cnt == m) {
//		//for (int i = 0; i < m; i++) printf("%d ", arr[i]);
//		printf("%s\n", arr);
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		arr[cnt * 2] = i + '0';
//		arr[cnt * 2 + 1 ] = ' ';
//		DFS(cnt + 1);
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	DFS(0);
//	return 0;
//}