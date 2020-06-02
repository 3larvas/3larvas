//// https://www.acmicpc.net/problem/11404
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <algorithm>
//#define INF 100000003
//using namespace std;
//int N, M;
//struct bus {
//	int start, end, cost;
//};
//bus bus_list[100003];
//int D[1001][1001];
//int P[1001][1001];
//
//void path(int q, int r) {
//	if (P[q][r] != 0) {
//		path(q, P[q][r]);
//		printf("%d ", P[q][r]);
//		path(P[q][r], r);
//	}
//}
//
//int main() {
//	scanf("%d %d", &N, &M);
//	fill_n(&D[0][0], 1001*1001, INF);
//	for (int i = 1; i <= N; i++)
//		D[i][i] = 0;
//
//
//	for (int i = 0; i < M; i++) {
//		int start = 0, end = 0, cost = 0;
//		scanf("%d %d %d", &start, &end, &cost);
//		if(D[start][end] > cost)
//			D[start][end] = cost;
//	}
//	
//	for (int k = 1; k <= N; k++) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (i == j)continue;
//				if (D[i][j] > D[i][k] + D[k][j]) {
//					P[i][j] = k;
//					D[i][j] = D[i][k] + D[k][j];
//				}
//			}
//		}	
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if(D[i][j]==INF)  D[i][j] = 0;
//			//printf("%d ", D[i][j]);
//		}
//		//printf("\n");
//	}
//	//printf("****************\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (P[i][j] == INF)  P[i][j] = 0;
//			//printf("%d ", P[i][j]);
//		}
//		//printf("\n");
//	}
//	while (true) {
//		int r = 0, c = 0;
//		scanf("%d", &r);
//		if (r == 0) break;
//		scanf("%d", &c);
//		if (D[r][c] == 0) {
//			printf("0\n");
//			continue;
//		}
//		printf("%d %d ", D[r][c], r);
//
//		path(r, c);
//		printf("%d \n",c);
//	}
//	return 0;
//}
