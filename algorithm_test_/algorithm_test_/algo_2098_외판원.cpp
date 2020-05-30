//// https://www.acmicpc.net/problem/2098
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int N;
//int map[17][17];
//int dp[17][65536];
//
//int TSP(int cur, int visited) {
//	if (visited == (1 << N) - 1) return map[cur][0];
//	int &ret = dp[cur][visited];
//	if (ret != -1)return ret;
//	ret = 1000000000;;
//	for (int nxt = 0; nxt < N; nxt++) {
//		if (visited & (1 << nxt))continue;
//		if (map[cur][nxt] == 0) continue;
//		ret = min(ret, TSP(nxt, visited | (1 << nxt)) + map[cur][nxt]);
//	}
//	return ret;
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < N; j++)
//			scanf("%d", &map[i][j]);
//	memset(dp, -1, sizeof(dp));
//	printf("%d", TSP(0, 1));
//	return 0;
//}