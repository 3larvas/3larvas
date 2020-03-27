////√‚√≥ : https://www.acmicpc.net/problem/1535
//#pragma warning (disable : 4996)
//#include <cstdio>
//
//int n;
//int bad[20]; 
//int good[20];
//bool vis[20];
//int love;
//
//void hello(int idx, int love_sum, int body_sum){
//	if (love < love_sum) love = love_sum;
//	for (int i = idx; i < n; i++) {
//		if (!vis[i]) {
//			vis[i] = true;
//			if(body_sum - bad[i]>0)
//				hello(i, love_sum + good[i], body_sum - bad[i]);
//			vis[i] = false;
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &bad[i]);
//	for (int i = 0; i < n; i++) scanf("%d", &good[i]);
//	vis[0] = false;
//	hello(0, 0, 100);
//	printf("%d", love);
//	return 0;
//}