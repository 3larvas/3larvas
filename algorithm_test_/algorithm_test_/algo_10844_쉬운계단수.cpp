//// √‚√≥ : acmicpc.net/problem/10844
//#pragma warning(disable : 4996)
//#include <stdio.h>
//using namespace std;
//int dp[101][10], N, result;
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 1; i < 10; i++) dp[1][i] = 1;
//
//	for (int i = 2; i <= N; i++) {
//		dp[i][0] = dp[i - 1][1];
//		for (int j = 1; j <= 8; j++) dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
//		dp[i][9] = dp[i - 1][8];
//	}
//	for (int i = 0; i <= 9; i++)
//		result += dp[N][i];
//	printf("%d", result % 1000000000);
//	return 0;
//}