////√‚√≥ : https://www.acmicpc.net/problem/2309
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <algorithm>
//using namespace std;
//int arr[10];
//int result[8];
//
//bool DFS(int cnt, int sum, int cur_idx) {
//	if (cnt == 7) {
//		if (sum == 100) return true;
//		else return false;
//	}
//	for (int i = cur_idx; i < 9; i++) {
//		sum += arr[i];
//		if (sum > 100) {
//			sum -= arr[i];
//			continue;
//		}
//		result[cnt] = arr[i];
//		if (DFS(cnt + 1, sum, i + 1)) {
//			return true;
//		}
//		sum -= arr[i];
//	}
//	return false;
//}
//
//int main() {
//	for(int i = 0 ; i < 9 ; i++)
//		scanf("%d", &arr[i]);
//
//	DFS(0, 0, 0);
//	sort(&result[0], &result[0] + 7);
//	for (int i = 0; i < 7; i++)
//		printf("%d\n", result[i]);
//	return 0;
//}