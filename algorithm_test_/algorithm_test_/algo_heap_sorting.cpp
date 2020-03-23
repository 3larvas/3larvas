//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n;
//int heap_arr[10];
//
//int main() {
//	scanf("%d", &n);
//	for(int i = 0 ; i < n ; i++) scanf("%d", &heap_arr[i]);
//
//	for (int i = 1; i < n; i++) {
//		int cur_idx = i;
//		do {
//			int root = (cur_idx - 1) / 2;
//			if (heap_arr[root] < heap_arr[cur_idx]) {
//				int temp = heap_arr[root];
//				heap_arr[root] = heap_arr[cur_idx];
//				heap_arr[cur_idx] = temp;
//			}
//			cur_idx = root;
//		} while (cur_idx != 0);
//	}
//
//	for (int i = n - 1; i >= 0; i--) {
//		int temp = heap_arr[0];
//		heap_arr[0] = heap_arr[i];
//		heap_arr[i] = temp;
//		int root = 0; 
//		int cur_idx = 1;
//		do {
//			cur_idx = 2 * root + 1;
//			if (cur_idx < i - 1 && heap_arr[cur_idx] < heap_arr[cur_idx + 1]) cur_idx++;
//			if (cur_idx < i && heap_arr[root] < heap_arr[cur_idx]) {
//				temp = heap_arr[root];
//				heap_arr[root] = heap_arr[cur_idx];
//				heap_arr[cur_idx] = temp;
//			}
//			root = cur_idx;
//		} while (cur_idx < i);
//	}
//	for (int i = 0; i < n; i++) printf("%d ", heap_arr[i]);
//	return 0;
//}
