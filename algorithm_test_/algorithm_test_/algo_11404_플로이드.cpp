//// https://www.acmicpc.net/problem/11404
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include<algorithm>
//
//#define INF 100000003
//using namespace std;
//int N, M;
//struct bus {
//	int start, end, cost;
//};
//bus bus_list[100003];
//int D[101][101];
//
//
//int main() {
//	scanf("%d", &N);
//	scanf("%d", &M);
//	fill_n(&D[0][0], 101*101, INF);
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
//					D[i][j] = D[i][k] + D[k][j];
//				}
//			}
//		}	
//	}
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if(D[i][j]==INF)  D[i][j] = 0;
//			printf("%d ", D[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}