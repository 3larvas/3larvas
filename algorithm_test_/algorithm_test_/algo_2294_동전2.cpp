//// √‚√≥ : https://www.acmicpc.net/problem/2294
//#include <iostream>
//using namespace std;
//
//int n, k = 0;
//int coin[102] = { 0, };
//int d[10002];
//
//int min(int a, int b) {
//	return a < b ? a : b;
//}
//
//int main() {
//	fill_n(d, 10002, 10001);
//	d[0] = 0;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		int input = 0;
//		cin >> input;
//		coin[i] = input;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = coin[i]; j <= k; j++) {
//			d[j] = min(d[j], d[j-coin[i]]+1);
//		}
//	}
//	d[k] == 10001 ? cout << -1 : cout << d[k];
//	return 0;
//}