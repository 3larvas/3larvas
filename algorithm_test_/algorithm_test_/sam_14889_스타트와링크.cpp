//// https://www.acmicpc.net/problem/14889
//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <vector>
//#include<math.h>
//using namespace std;
//int N, result= 987654321;
//bool vis[21];
//int score[21][21];
//vector<int> v;
//
//int cal_sum() {
//	int score_a = 0, score_b = 0;
//	vector<int> team_b;
//	int idx = 0;
//	bool chk = false;
//	for (int i = 0; i < N; i++) {
//		chk = false;
//		for (int j = idx; j < v.size(); j++) {
//			if (v.at(j) == i) {
//				idx = j+1;
//				chk = true;
//				break;
//			}
//		}
//		if (!chk) team_b.push_back(i);
//	}
//
//	for (int i = 0; i < v.size(); i++) {
//		for(int j = 0 ; j < v.size() ; j++)
//			if (v.at(i) != v.at(j)) {
//				score_a += score[v.at(i)][v.at(j)];
//				score_b += score[team_b.at(i)][team_b.at(j)];
//			}
//	}
//	if (result > abs(score_a - score_b)) result = abs(score_a - score_b);
//	return 0;
//}
//
//void DFS(int idx) {
//	if (v.size() == (N / 2)) {
//		cal_sum();
//		return;
//	}
//	for (int i = idx; i < N; i++) {
//		v.push_back(i);
//		DFS(i + 1);
//		v.pop_back();
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++){
//			scanf("%d", &score[i][j]);
//		}
//	}
//	DFS(0);
//	printf("%d", result);
//	return 0;
//}