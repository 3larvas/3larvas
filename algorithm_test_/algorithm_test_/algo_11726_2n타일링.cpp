//√‚√≥ : https://www.acmicpc.net/problem/11726
#pragma warning(disable : 4996)
#include <stdio.h>
#include <algorithm>
using namespace std;
int N, dp[1001];
int main() {
	scanf("%d", &N);
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= N; i++) 
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	printf("%d", dp[N]);
	return 0;
}