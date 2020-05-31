//#pragma warning (disable : 4996)
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int arr[20];
////for merge sort
//int sorted[20];
//
//void merge(int tmp_arr[], int start, int mid, int end);
//void mergeSorting(int tmp_arr[], int start, int end);
//void quickSorting(int* tmp, int start, int end);
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//
//	//buble sorting
//	int tmp_arr_1[20] = { 0, };
//	copy(&arr[0], &arr[0] + 20, &tmp_arr_1[0]);
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (tmp_arr_1[i] > tmp_arr_1[j]) {
//				int tmp = tmp_arr_1[i];
//				tmp_arr_1[i] = tmp_arr_1[j];
//				tmp_arr_1[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) printf("%d ", tmp_arr_1[i]);
//	printf("\n");
//
//	//insert sorting
//	int tmp_arr_2[20] = { 0, };
//	copy(&arr[0], &arr[0] + 20, &tmp_arr_2[0]);
//	for (int i = 1; i < n; i++) {		
//		int j = i - 1;
//		while (j >= 0 && tmp_arr_2[j] > tmp_arr_2[j+1]) {
//			int tmp = tmp_arr_2[j];
//			tmp_arr_2[j] = tmp_arr_2[j+1];
//			tmp_arr_2[j+1] = tmp;
//			j--;
//		}
//	}
//	for (int i = 0; i < n; i++) printf("%d ", tmp_arr_2[i]);
//	printf("\n");
//
//	//selection sorting
//	int tmp_arr_3[20] = { 0, };
//	copy(&arr[0], &arr[0] + 20, &tmp_arr_3[0]);
//	int min_idx = 0;
//	for (int i = 0; i < n - 1; i++) {
//		min_idx = i;
//		for (int j = i + 1; j < n; j++) {
//			if (tmp_arr_3[j] < tmp_arr_3[min_idx]) {
//				min_idx = j;
//			}
//		}
//		int tmp = tmp_arr_3[i];
//		tmp_arr_3[i] = tmp_arr_3[min_idx];
//		tmp_arr_3[min_idx] = tmp;
//	}
//	for (int i = 0; i < n; i++) printf("%d ", tmp_arr_3[i]);
//	printf("\n");
//
//	//merge sorting
//	int tmp_arr_4[20] = { 0, };
//	copy(&arr[0], &arr[0] + 20, &tmp_arr_4[0]);
//	mergeSorting(tmp_arr_4, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", tmp_arr_4[i]);
//	printf("\n");
//
//	//quick sorting
//	int tmp_arr_5[20] = { 0, };
//	copy(&arr[0], &arr[0] + 20, &tmp_arr_5[0]);
//	quickSorting(tmp_arr_5, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", tmp_arr_5[i]);
//	printf("\n");
//	return 0;
//}
//
//void mergeSorting(int tmp_arr[], int start, int end) {
//	if (start < end) {
//		int mid = (start + end) / 2;
//		mergeSorting(tmp_arr, start, mid);
//		mergeSorting(tmp_arr, mid + 1, end);
//		merge(tmp_arr, start, mid, end);
//	}
//}
//
//void merge(int tmp_arr[], int start, int mid, int end) {
//	int i = start;
//	int j = mid + 1;
//	int k = start;
//
//	while (i <= mid && j <= end) {
//		if (tmp_arr[i] <= tmp_arr[j]) {
//			sorted[k] = tmp_arr[i];
//			i++;
//		}
//		else {
//			sorted[k] = tmp_arr[j];
//			j++;
//		}
//		k++;
//	}
//	if (i <= mid) {
//		for (int t = i; t <= mid; t++) {
//			sorted[k] = tmp_arr[t];
//			k++;
//		}
//	}
//	else {
//		for (int t = j; t <= end; t++) {
//			sorted[k] = tmp_arr[t];
//			k++;
//		}
//	}
//
//	for (int t = start; t <= end; t++) {
//		tmp_arr[t] = sorted[t];
//	}
//}
//
//void quickSorting(int* tmp_arr, int start, int end) {
//	if (start >= end) return;
//	int pivot_idx = start; // 첫번째 원소로 피봇으로 함.
//	int left = start + 1;
//	int right = end;
//	while (left <= right) {
//		while (left <= right && tmp_arr[left] <= tmp_arr[pivot_idx]) left++;
//		while (left <= right && tmp_arr[right] >= tmp_arr[pivot_idx]) right--;
//		if (left > right) {
//			int tmp = tmp_arr[right];
//			tmp_arr[right] = tmp_arr[pivot_idx];
//			tmp_arr[pivot_idx] = tmp;
//		}
//		else {
//			int tmp = tmp_arr[left];
//			tmp_arr[left] = tmp_arr[right];
//			tmp_arr[right] = tmp;
//		}
//	}
//	quickSorting(tmp_arr, start, right - 1);
//	quickSorting(tmp_arr, right + 1, end);
//}