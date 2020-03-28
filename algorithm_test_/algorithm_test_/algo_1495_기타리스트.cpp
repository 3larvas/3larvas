//// √‚√≥ : https://	www.acmicpc.net/problem/1495
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n, m, s;
//bool dp[101][1100];
//int v[101];
//int max;
//bool chk;
//
//int main() {
//	scanf("%d %d %d", &n, &s, &m);
//	for (int i = 0; i < n; i++) scanf("%d", &v[i]);
//	dp[0][s] = true;
//	for (int i = 0; i < n; i < i++) {
//		for (int j = 0; j <= m; j++) {
//			if (dp[i][j]) {
//				if (j - v[i] >= 0) dp[i + 1][j - v[i]] = true;
//				if (j + v[i] <= m) dp[i + 1][j + v[i]] = true;
//			}
//		}
//	}
//	for (int i = 0; i <= 1000; i++) {
//		if (dp[n][i]) {
//			if (max < i) max = i;
//			chk = true;
//		}
//	}
//	if (chk) printf("%d", max);
//	else printf("-1");
//	return 0;
//}