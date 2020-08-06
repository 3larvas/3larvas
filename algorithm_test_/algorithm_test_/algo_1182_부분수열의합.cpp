//// √‚√≥ : https://www.acmicpc.net/problem/1182
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <vector>
//using namespace std;
//
//int n, s, result;
//int arr[21];
//int vis[21];
//vector<int> result_v;
//
//void DFS(int sum, int cur_idx) {
//	if (sum == s && !(sum==0&&cur_idx==0)) result++;
//	for (int i = cur_idx; i < n; i++) {
//		if (!vis[i]) {
//			vis[i] = true;
//			sum += arr[i];
//			result_v.push_back(arr[i]);
//			DFS(sum, i+1);
//			sum -= arr[i];
//			result_v.pop_back();
//			vis[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &s);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	DFS(0, 0);
//	printf("%d", result);
//	return 0;
//}