//// https://www.acmicpc.net/problem/12865
//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int N, K;
//int list[101][2];
//int dp[101][100001];
//
//int main() {
//	scanf("%d %d", &N, &K);
//	for (int i = 1; i <= N; i++)
//		scanf("%d %d", &list[i][0], &list[i][1]);
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= K; j++) {
//			if (j >= list[i][0])
//				dp[i][j] = max(dp[i - 1][j], list[i][1] + dp[i - 1][j - list[i][0]]);
//			else 
//				dp[i][j] = dp[i - 1][j];
//		}
//	}
//	printf("%d", dp[N][K]);
//	return 0;
//}