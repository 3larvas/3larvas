//#pragma warning(disable : 4996)
//#include <cstdio>
//int n;
//int arr[20];
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//	for (int i = 0; i < n; i++) {
//		if (i % 2 == 0) {
//			for (int j = 0; j < n ; j=j+2) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//		else {
//			for (int j = 1; j < n-1; j = j + 2) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//	return 0;
//}
//
///*
//10
//5 1 4 8 6 6 7 2 5 9
//*/