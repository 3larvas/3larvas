//#pragma warning (disable : 4996)
//#include <iostream>
//#include <string.h>
//using namespace std;
//#define MAX 100000
//int n;
//pair<int, pair<int, char[50]>> info[MAX];
////-----------selection sorting-----------//
//// 12141777, Choi Hyung In
////---------------------------------------//
//int main() {
//	//input value
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d %s", &info[i].first, info[i].second.second);
//		info[i].second.first = i;
//	}
//	
//
//	for (int i = 0; i < n; i++){
//		int min_idx = i;
//		for (int j = i + 1; j < n; j++) {
//			// find the smallest value
//			if (info[min_idx].first > info[j].first) {
//				min_idx = j;
//			}
//			else if (info[min_idx].first == info[j].first) {
//				if (info[min_idx].second.first > info[j].second.first) {
//					int tmp_h = info[min_idx].first;
//					int tmp_s = info[min_idx].second.first;
//					char tmp_n[50] = "";
//					strcpy(tmp_n, info[min_idx].second.second);
//
//
//					info[min_idx].first = info[j].first;
//					info[min_idx].second.first = info[j].second.first;
//					strcpy(info[min_idx].second.second, info[j].second.second);
//
//
//					info[j].first = tmp_h;
//					info[j].second.first = tmp_s;
//					strcpy(info[j].second.second, tmp_n);
//				}
//			}
//
//		}
//		// insert the smallest value at 'i' position
//		int tmp = info[i].first;
//		int tmp_seq = info[i].second.first;
//		char tmp_nm[50] = "";
//		strcpy(tmp_nm, info[i].second.second);
//
//		info[i].first = info[min_idx].first;
//		info[i].second.first = info[min_idx].second.first;
//		strcpy(info[i].second.second, info[min_idx].second.second);
//
//		info[min_idx].first = tmp;
//		info[min_idx].second.first = tmp_seq;
//		strcpy(info[min_idx].second.second, tmp_nm);
//	}
//
//	for (int i = 0; i < n; i++)
//		printf("%d %s\n", info[i].first, info[i].second.second);
//	return 0;
//}