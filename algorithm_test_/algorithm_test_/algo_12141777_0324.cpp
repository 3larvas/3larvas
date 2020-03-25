//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int a, b;
//int arr[500][500];
//int result;
//int team_cnt;
//int cnt;
//
//int main() {
//	scanf("%d", &a);
//	scanf("%d", &b);
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < b; j++) 
//			scanf("%1d", &arr[i][j]);
//	}
//
//	for (int i = 0; i < a; i++) {
//		for (int j = i+1; j < a; j++) {
//			cnt = 0;
//			for (int k = 0; k < b; k++) 
//				if (arr[i][k] || arr[j][k]) cnt++;
//			if (cnt > result) {
//				result = cnt;
//				team_cnt = 1;
//			} 
//			else if (cnt == result) team_cnt++;
//		}
//	}
//	printf("%d\n", result);
//	printf("%d", team_cnt);
//	return 0;
//}
//
