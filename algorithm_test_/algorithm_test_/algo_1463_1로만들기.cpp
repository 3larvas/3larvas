////√‚√≥ : https://www.acmicpc.net/problem/1463
//#include <iostream>
//using namespace std;
//int n = 0;
//int d[1000001] = { 0, };
//
//int min(int a, int b) {
//	return a < b ? a : b;
//}
//
//void dp() {
//	d[1] = 0;
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
//		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
//	}
//}
//
//int main() {
//	cin >> n;
//	dp();
//	cout << d[n];
//	return 0;
//}