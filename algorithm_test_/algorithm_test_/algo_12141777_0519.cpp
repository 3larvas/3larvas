//#include<iostream>
//#define EMPTY	0
//#define CHEEZE	1
//#define TRAP	2
//using namespace std;
//int N, M;
//int map[101][101];
//int chz[101][101];
//
//int main() {
//	int i, j;
//	cin >> N >> M;
//	int input;
//	for (i = 0; i < N; i++) {
//		for (j = 0; j < M; j++) {
//			cin >> input;
//			map[i][j] = input;
//			chz[i][j] = 0;
//		}
//	}
//	for (i = N - 2; i >= 0; i--) {
//		if (map[i][0] == 1) {
//			chz[i][0] = chz[i + 1][0] + 1;
//		}
//		else if (map[i][0] == EMPTY) {
//			chz[i][0] = chz[i + 1][0];
//		}
//		else if (map[i][0] == TRAP) {
//			break;
//		}
//	}
//	for (j = 1; j < M; j++) {
//		if (map[N - 1][j] == CHEEZE) {
//			chz[N - 1][j] = chz[N - 1][j - 1] + 1;
//		}
//		else if (map[N - 1][j] == EMPTY) {
//			chz[N - 1][j] = chz[N - 1][j - 1];
//		}
//		else if (map[N - 1][j] == TRAP) {
//			break;
//		}
//	}
//	for (i = N - 2; i >= 0; i--) {
//		for (j = 1; j < M; j++) {
//			if (map[i][j] == CHEEZE) {
//				if (chz[i + 1][j] >= chz[i][j - 1]) {
//					chz[i][j] = chz[i + 1][j] + 1;
//				}
//				else {
//					chz[i][j] = chz[i][j - 1] + 1;
//				}
//			}
//			else if (map[i][j] == EMPTY) {
//				if (chz[i + 1][j] >= chz[i][j - 1]) {
//					chz[i][j] = chz[i + 1][j];
//				}
//				else {
//					chz[i][j] = chz[i][j - 1];
//				}
//			}
//			else if (map[i][j] == TRAP) {
//				chz[i][j] = -1;
//			}
//		}
//	}
//	cout << chz[0][M - 1];
//	return 0;
//}
//
