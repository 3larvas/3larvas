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
//
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n;
//int arr_a[101];
//int arr_b[101];
//int result;
//
////��ȯ�Լ�
//void swap_a(int idx, int root) {
//    int temp = arr_a[root];
//    arr_a[root] = arr_a[idx];
//    arr_a[idx] = temp;
//}
//void swap_b(int idx, int root) {
//    int temp = arr_b[root];
//    arr_b[root] = arr_b[idx];
//    arr_b[idx] = temp;
//}
//int main() {
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) scanf("%d", &arr_a[i]);
//    for (int i = 0; i < n; i++) scanf("%d", &arr_b[i]);
//    //Heapifiy �۾�
//    for (int i = 1; i < n; i++) {
//        int cur_idx = i;
//        while (cur_idx != 0) {
//            //0���� �����߱� ������ (idx-1) / 2
//            int root = (cur_idx - 1) / 2;
//            //�ڽĳ��� �θ��� ��
//            if (arr_a[root] < arr_a[cur_idx]) swap_a(cur_idx, root);
//            //�񱳰� ���� �� �θ� ��ȿ���� �˻�
//            cur_idx = root;
//        }
//    }
//    //Sorting �۾�
//    for (int i = n - 1; i >= 0; i--) {
//        //������ ��带 root�� �̵�
//        swap_a(0, i);
//        int root = 0;
//        int cur_idx = 1;
//        while (cur_idx < i) {
//            cur_idx = 2 * root + 1;
//            //�� ���� �ڽĳ�� �� ū ���� ����ǵ��� cur_idx ����
//            if (cur_idx < i - 1 && arr_a[cur_idx] < arr_a[cur_idx + 1]) cur_idx++;
//            //ū �ڽĳ�Ʈ�� �θ𺸴� Ŭ �� �� ����   
//            if (cur_idx < i && arr_a[root] < arr_a[cur_idx]) swap_a(cur_idx, root);
//            root = cur_idx;
//        }
//    }
//    //Heapifiy �۾�
//    for (int i = 1; i < n; i++) {
//        int cur_idx = i;
//        while (cur_idx != 0) {
//            //0���� �����߱� ������ (idx-1) / 2
//            int root = (cur_idx - 1) / 2;
//            //�ڽĳ��� �θ��� ��
//            if (arr_b[root] < arr_b[cur_idx]) swap_b(cur_idx, root);
//            //�񱳰� ���� �� �θ� ��ȿ���� �˻�
//            cur_idx = root;
//        }
//    }
//    //Sorting �۾�
//    for (int i = n - 1; i >= 0; i--) {
//        //������ ��带 root�� �̵�
//        swap_b(0, i);
//        int root = 0;
//        int cur_idx = 1;
//        while (cur_idx < i) {
//            cur_idx = 2 * root + 1;
//            //�� ���� �ڽĳ�� �� ū ���� ����ǵ��� cur_idx ����
//            if (cur_idx < i - 1 && arr_b[cur_idx] < arr_b[cur_idx + 1]) cur_idx++;
//            //ū �ڽĳ�Ʈ�� �θ𺸴� Ŭ �� �� ����   
//            if (cur_idx < i && arr_b[root] < arr_b[cur_idx]) swap_b(cur_idx, root);
//            root = cur_idx;
//        }
//    }
//    for (int i = 0; i < n; i++) {        
//        result += arr_a[i] * arr_b[n - i - 1];
//    }
//    printf("%d", result);
//    return 0;
//}
