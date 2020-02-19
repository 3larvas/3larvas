////√‚√≥ : https://www.acmicpc.net/problem/14501
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//pair<int, int> sch[17];
//int dp[17] = { 0, };
//int result = 0;
//
////int max(int a, int b) {
////	return a > b ? a : b;
////}
////
////void DP() {
////	int nxt_idx = 0;
////	for (int i = n; i > 0; i--) {
////		nxt_idx = sch[i].first + i;
////		if (nxt_idx > n + 1) {
////			dp[i] = dp[i + 1];
////		}
////		else {
////			dp[i] = max(dp[i + 1], dp[nxt_idx] + sch[i].second);
////		}
////	}
////}
//
//void dfs(int start_day, int total, int add) {
//	if (start_day == n + 1) {
//		result = max(result, total);
//		return;
//	}
//	else if (start_day > n + 1) {
//		result = max(result, total - add);
//		return;
//	}
//
//	for (int i = start_day; i <= n ; i++) {
//		dfs(i + sch[i].first, total + sch[i].second, sch[i].second);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int a, b = 0;
//		cin >> a >> b;
//		sch[i] = make_pair(a, b);
//	}
//	//DP();
//	dfs(1, 0, 0);
//	//cout << dp[1] ;
//	cout << result;
//	return 0;
//}