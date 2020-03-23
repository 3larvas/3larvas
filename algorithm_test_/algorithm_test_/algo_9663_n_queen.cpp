//// √‚√≥ : https://www.acmicpc.net/problem/9663
//#pragma warning (disable : 4996)
//#include <cstdio>
//#include <cstdlib>
//
//int n;
//int col[15];
//int result;
//
//bool check(int row) {
//	for (int i = 0; i < row; i++) {
//		if (col[row] == col[i] || abs(col[row] - col[i]) == row - i)
//			return false;
//	}
//	return true;
//}
//
//void DFS(int row) {
//	if (row == n) {
//		result++;
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		col[row] = i;
//		if (check(row)) DFS(row + 1);
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	DFS(0);
//	printf("%d", result);
//	return 0;
//}