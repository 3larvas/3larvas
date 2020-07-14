//#pragma warning(disable : 4996)
//#include <stdio.h>
//using namespace std;
//int N, result;
//int arr[1001];
//
//int main() {
//	scanf("%d", &N);
//	int cur_val = 0, pre_val = -1;
//	for (int i = 0; i < N; i++) {
//		bool chk = false;
//		scanf("%d", &cur_val);
//		if (pre_val == -1) {
//			if (cur_val == 0) {
//				result++;
//				pre_val = cur_val;
//			}
//			continue;
//		}
//		switch (pre_val) {
//		case 0:
//			if (cur_val == 1) {
//				result++;
//				chk = true;
//			}
//			break;
//		case 1:
//			if (cur_val == 2) {
//				result++;
//				chk = true;
//			}
//			break;
//		case 2:
//			if (cur_val == 0) {
//				result++;
//				chk = true;
//			}
//			break;
//		}
//		if(chk) pre_val = cur_val;
//	}
//	printf("%d", result);
//	return 0;
//}