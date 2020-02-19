////√‚√≥ : https://www.acmicpc.net/problem/9465
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int t = 0;
//int n = 0;
//int tmp = 0;
//int result = 0;
//int arr[2][100003] = { 0, };
//int d[2][100003] = { 0, };	
//vector<int> v_result;
//
//int max(int a, int b) {
//	return a > b ? a : b;
//}
////void dfs(int start_idx, bool row) {
////	tmp += arr[row][start_idx];
////	if (start_idx < n-1) {		
////		dp(start_idx + 1, !row);
////		dp(start_idx + 2, !row);	
////	}
////	else {
////		result = max(result, tmp);
////	}
////	tmp -= arr[row][start_idx];
////}
//void dp() {
//	d[0][0] = 0;
//	d[0][1] = 0;
//	d[1][0] = 0;
//	d[1][1] = 0;
//	for (int i = 2; i < n+2 ; i++) {
//		d[0][i] = max(d[1][i - 1], d[1][i - 2]) + arr[0][i - 2];
//		d[1][i] = max(d[0][i - 1], d[0][i - 2]) + arr[1][i - 2];
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int input = 0;
//		cin >> n;
//		for (int j = 0; j < n; j++) {
//			cin >> input;
//			arr[0][j] = input;
//		}
//		for (int j = 0; j < n; j++) {
//			cin >> input;
//			arr[1][j] = input;
//		}
//		dp();
//		v_result.push_back(max(d[0][n + 1], d[1][n + 1]));
//	}
//	for (int i = 0; i < v_result.size(); i++) cout << v_result.at(i) <<"\n";
//	return 0;
//}