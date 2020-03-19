////√‚√≥ : https://www.acmicpc.net/problem/2798
//#pragma warning(disable : 4996)
//#include <cstdio>
//
//int n;
//
//int main() {
//	scanf("%d", &n);
//	int cnt = 1;
//	int tmp = 1;
//	while (cnt != n) {
//		tmp = cnt;
//		int sum = 0;
//		while (tmp) {
//			sum += tmp % 10;
//			tmp /= 10;
//		}
//		if (cnt + sum == n) break;
//		cnt++;
//	}
//	if (cnt != n) printf("%d", cnt);
//	else printf("0");
//	return 0;
//}