//// √‚√≥ : https://www.acmicpc.net/problem/14889
//#pragma warning (disable:4996)
//#include <cstdio>
//int n;
//int m[20][20];
//int result = 100000;
//int result_a, result_b;
//int start[10], link[10];
//int s_size, l_size;
//
//void DFS(int i) {
//	if (!result) return;
//	if (s_size == n / 2 && l_size == n / 2) {
//		for (int i = 0; i < s_size; i++) printf("%d", start[i]);
//		printf(", ");
//		for (int i = 0; i < l_size; i++) printf("%d", link[i]);
//		for (int i = 0; i < n/2; i++) {
//			for (int j = i+1; j < n/2; j++) {
//				result_a += m[start[i]][start[j]] + m[start[j]][start[i]];
//				result_b += m[link[i]][link[j]] + m[link[j]][link[i]];
//			}
//		}
//		result_a = result_a - result_b;
//		if (result_a < 0) result_a *= (-1);
//		printf(" : %d \n", result_a);
//		result = result < result_a ? result : result_a;
//		result_a = 0;
//		result_b = 0;
//	}
//	if (s_size < n / 2) {
//		start[s_size++] = i;
//		DFS(i + 1);
//		s_size--;
//	}
//	if (i == 0)return;
//	if (l_size < n / 2) {
//		link[l_size++] = i;
//		DFS(i + 1);
//		l_size--;
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n*n; i++) scanf("%d", &m[i / n][i % n]);
//	DFS(0);
//	printf("%d", result);
//	return 0;
//}