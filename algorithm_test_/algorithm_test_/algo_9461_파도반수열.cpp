//// √‚√≥ :https://www.acmicpc.net/problem/9461
//#pragma warning(disable : 4996)
//#include <cstdio>
//long long n_arr[100];
//
//int main() {
//	n_arr[0] = n_arr[1] = n_arr[2] = 1;
//	for (int i = 3; i < 100; i++) {
//		n_arr[i] = n_arr[i - 3] + n_arr[i - 2];
//	}
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++) {
//		int n = 0;
//		scanf("%d", &n);
//		printf("%lld\n", n_arr[n-1]);
//	}
//	return 0;
//}