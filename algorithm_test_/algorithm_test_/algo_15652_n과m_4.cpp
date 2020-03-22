//// √‚√≥ : https://www.acmicpc.net/problem/15652
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m;
//char arr[20];
//
//void DFS(int cnt) {
//	if (cnt == m) {
//		printf("%s\n", arr);
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (cnt > 0 && arr[(cnt-1) * 2]-'0' > i) 
//			continue;
//		arr[cnt * 2] = i + '0';
//		arr[cnt * 2 + 1] = ' ';
//		DFS(cnt + 1);
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	DFS(0);
//	return 0;
//}