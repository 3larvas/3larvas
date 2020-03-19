//////√‚√≥ : https://www.acmicpc.net/problem/2798
////#pragma warning(disable : 4996)
////#include <cstdio>
////
////int n, m;
////int arr_n[101];
////int result;
////
////void cal(int sum, int cnt, int idx) {
////	sum += arr_n[idx];
////	if (cnt == 2) {
////		if (m >= sum) {
////			if (m - result > m - sum) result = sum;
////		}
////	} 
////	else for (int i = idx+1; i < n; i++)  cal(sum, cnt + 1, i);
////}
////
////int main() {
////	scanf("%d %d", &n, &m);
////	for (int i = 0; i < n; i++) scanf("%d", &arr_n[i]);
////	for (int i = 0; i < n; i++) cal(0, 0, i);
////	printf("%d", result);
////	return 0;
////}
//#pragma warning(disable : 4996)
//#include <cstdio>
//
//int main() {
//
//    int x = 0;
//    int a[9999];
//    int b[9999];
//    int c[9999];
//
//    scanf("%d", &x);
//
//    for (int i = 0; i < x; i++) {
//        scanf("%d %d", &a[i], &b[i]);
//        c[i] = a[i] + b[i];
//    }
//
//    for (int i = 0; i < x; i++) {
//        printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], c[i]);
//    }
//
//}