//// √‚√≥ : https://www.acmicpc.net/problem/1013
//#pragma warning (disable : 4996)
//#include <cstdio>
//#include <string.h>
//using namespace std;
//
//int n;
//bool state_1, state_2, state_3, state_4, state_5, state_6;
//int state_1_cnt;
//bool chk;
//
//int main() {
//	scanf("%d", &n);
//	for (int t = 0; t < n; t++) {
//		state_1 = false;
//		state_2 = false;
//		state_3 = false;
//		state_1_cnt = 0;
//		state_4 = false;
//		chk = false;
//		bool arr[202] = { 0, };
//		char input[202] = { 0, };
//		scanf("%s", input);		
//		int size = strlen(input);
//		int idx = 0;
//		for (int i = 0; i < size; i++) {
//			if (input[i] == '1') arr[i] = true;
//		}
//		while (idx < size) {
//			bool cur_val = arr[idx];
//			idx++;		
//			if (cur_val && !state_1 && !state_2 && !state_3 && !state_4) {
//				state_1 = true;
//				if (arr[idx] == 1 || idx >= size) {
//					printf("NO\n");
//					chk = true;
//					break;
//				}
//				continue;
//			} 
//			if (!cur_val && state_1) {
//				state_1_cnt++;
//				if (state_1_cnt == 2) {
//					state_2 = true;
//				}
//				if (state_1_cnt < 2 && arr[idx] == 1) {
//					printf("NO\n");
//					chk = true;
//					break;
//				}
//				if (idx >= size) {
//					printf("NO\n");
//					chk = true;
//					break;
//				}
//				continue;
//			} 
//			if (cur_val && state_1 && state_2) {
//				state_3 = true;
//				if(arr[idx]==1)
//				if (idx < size && arr[idx] == 0) {
//					if (arr[idx + 1] == 0) {
//						printf("NO\n");
//						chk = true;
//						break;
//					}
//					else {
//						state_1 = false;
//						state_2 = false;
//						state_3 = false;
//						state_1_cnt = 0;
//						state_4 = true;
//					}
//				}
//				else {
//					state_1 = false;
//					state_2 = false;
//					state_3 = false;
//					state_1_cnt = 0;
//					state_4 = false;
//				}
//				continue;
//			}
//			if (!cur_val && !state_1 && !state_2 && !state_3 && !state_4) {
//				if (idx < size) {
//					if (arr[idx] == 0) {
//						printf("NO\n");
//						chk = true;
//						break;
//					}
//					else{
//						state_4 = true;
//					}					
//				}					
//				else {
//					printf("NO\n");
//					chk = true;
//					break;
//				}
//				continue;
//			}
//			if (cur_val && state_4) {
//				state_1 = false;
//				state_2 = false;
//				state_3 = false;
//				state_1_cnt = 0;
//				state_4 = false;
//				continue;
//			}
//		}
//		if(!chk) printf("YES\n");
//	}	
//	return 0;
//}