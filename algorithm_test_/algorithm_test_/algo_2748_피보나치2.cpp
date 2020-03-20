//// √‚√ƒ : https://www.acmicpc.net/problem/2748
//#pragma warning(disable : 4996)
//#include <cstdio>
//int n;
//long long n_arr[90];
////long long cal(int num) {
////	if (num == 0) return 0;
////	else if (num == 1) return 1;
////	else {
////		if(n_arr[num]==0) n_arr[num] = cal(num - 1) + cal(num - 2);
////		return n_arr[num];
////	}
////}
//
//int main() {
//	scanf("%d", &n);
//	if (n == 0) printf("0");
//	else if (n == 1) printf("1");
//	else {
//		n_arr[0] = 0;
//		n_arr[1] = 1;
//		for (int i = 2; i <= n; i++) {
//			n_arr[i] = n_arr[i - 1] + n_arr[i - 2];
//		}
//		printf("%lld", n_arr[n]);
//	}
//	
//	return 0;
//}