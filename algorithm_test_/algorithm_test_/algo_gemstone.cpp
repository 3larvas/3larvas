//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n;
//char arr[100][100];
//bool vis[30];
//int memo[30];
//int result;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%s", arr[i]);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (arr[i][j] == 0) break;
//			if (!vis[(int)arr[i][j] - 97]) {
//				vis[(int)arr[i][j] - 97] = true;
//				memo[(int)arr[i][j] - 97] += 1;
//			}
//		}
//		for (int j = 0; j < 30; j++) vis[j] = false;
//	}
//	for (int j = 0; j < 30; j++)
//		if (memo[j] == n) result++;
//	printf("%d", result);
//	return 0;
//}