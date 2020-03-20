//// √‚√≥ : https://www.acmicpc.net/problem/1920
//#pragma warning(disable : 4996)
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int n_arr[100000];
//int m;
//int m_arr[100000];
//
//int binary_search(int tar, int l, int r) {
//	if (l <= r) {
//		int m = (l + r) / 2;
//		if (n_arr[m] == tar) {			
//			/*int cnt = 1;
//			int tmp = m;
//			while (n_arr[--tmp] == tar) 
//				cnt++;
//			tmp = m;
//			while (n_arr[++tmp] == tar)
//				cnt++;*/
//			return 1;
//		}
//		else if (n_arr[m] > tar) return binary_search(tar, l, m-1);
//		else if (n_arr[m] < tar) return binary_search(tar, m+1, r);
//	}	
//	else return 0;
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &n_arr[i]);
//	sort(n_arr, n_arr + n);
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++) scanf("%d", &m_arr[i]);
//	for (int i = 0; i < m; i++) {		
//		
//		printf("%d\n", binary_search(m_arr[i], 0, n));
//	}
//	
//	return 0;
//}