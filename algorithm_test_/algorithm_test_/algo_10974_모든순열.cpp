//// 출처 : https://www.acmicpc.net/problem/10974
//// 참고 : https://fieldanimal.tistory.com/26
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//
//using namespace std;
//int n = 0;
//bool vis[10] = { false };
//vector<int> v;
//
//void dfs() {
//	if (v.size() == n) {
//		for (int i = 0; i < v.size(); i++) {
//			printf("%d ", v.at(i));
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < n; i++) {
//		if (!vis[i]) {
//			vis[i] = true;
//			v.push_back(i+1);
//			dfs();
//			vis[i] = false;
//			v.pop_back();
//		}
//	}
//}
//
//int main() {
//	scanf("%d",&n);
//	dfs();
//}