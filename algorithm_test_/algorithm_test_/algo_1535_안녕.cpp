//////출처 : https://www.acmicpc.net/problem/1535
////#pragma warning (disable : 4996)
////#include <cstdio>
////
////int n;
////int bad[20]; 
////int good[20];
////bool vis[20];
////int love;
////
////void hello(int idx, int love_sum, int body_sum){
////	if (love < love_sum) love = love_sum;
////	for (int i = idx; i < n; i++) {
////		if (!vis[i]) {
////			vis[i] = true;
////			if(body_sum - bad[i]>0)
////				hello(i, love_sum + good[i], body_sum - bad[i]);
////			vis[i] = false;
////		}
////	}
////}
////
////int main() {
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++) scanf("%d", &bad[i]);
////	for (int i = 0; i < n; i++) scanf("%d", &good[i]);
////	vis[0] = false;
////	hello(0, 0, 100);
////	printf("%d", love);
////	return 0;
////}
////출처 : https://www.acmicpc.net/problem/1535
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n;
//int bad[21];
//int good[21];
//int dp[21][101];
//int result;
//
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &bad[i]);
//	for (int i = 0; i < n; i++) scanf("%d", &good[i]);
//	
//	dp[0][100 - bad[0]] = good[0];
//
//	for (int i = 1; i < n; i++) {
//		dp[i][100 - bad[i]] = good[i];
//		for (int j = 100; j > 0 ; j--) {
//			if (dp[i-1][j] != 0) {
//				if (j - bad[i] >= 0)
//					dp[i + 1][j - bad[i]] = dp[i][j] + good[i];
//			}
//		}
//	}
//	result = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (dp[n][i] != 0) {
//			if (result < dp[n][i]) result = dp[n][i];
//		}
//	}
//	printf("%d", result);
//	return 0;
//}