//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int N, result;
//int arr[1001];
//int dp[1001][3];
//
//int max_(int a, int b, int c) {
//	int tmp_1 = max(a, b);
//	int tmp_2 = max(b, c);
//	return max(tmp_1, tmp_2);
//}
//
//int main() {
//	scanf("%d", &N);
//	int start_idx = -1;
//	for (int i = 0; i < N; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0 && start_idx == -1) start_idx = i;
//	}
//	if (start_idx != -1) {
//		//dp[start_idx][1] = 1;
//		for (int i = start_idx + 1; i < N; i++) {
//			int milk = arr[i];
//			dp[i][0] = (milk == 0 ? dp[i - 1][2] + 1 : dp[i - 1][0]);
//			dp[i][1] = (milk == 1 ? dp[i - 1][0] + 1 : dp[i - 1][1]);
//			dp[i][2] = (milk == 2 ? dp[i - 1][1] + 1 : dp[i - 1][2]);
//		}
//		printf("%d", max_(dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]));
//	}
//	else
//		printf("%d", 0);
//	
//	return 0;
//}