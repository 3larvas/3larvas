//// √‚√≥ : https://www.acmicpc.net/problem/14499
//#include <iostream>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n, m, x, y, k;
//	int map[21][21] = { 0, };
//	int cmd[1001] = { 0, };
//	int dic[4][3] = { 0, };
//	cin >> n >> m >> x >> y >> k;
//	int input = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> input;
//			map[i][j] = input;
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		cin >> input;
//		cmd[i] = input;
//	}
//
//	for (int i = 0; i < k; i++) {
//		bool chk = false;
//		switch (cmd[i]) {
//		case 1:
//			if (y + 1 < m) {
//				chk = true;
//				y += 1;
//				int tmp = dic[1][0];
//				dic[1][0] = dic[1][1];
//				dic[1][1] = dic[1][2];
//				dic[1][2] = dic[3][1];
//				dic[3][1] = tmp;
//			}
//			break;
//		case 2:
//			if (0 <= y - 1) {
//				chk = true;
//				y -= 1;
//				int tmp = dic[1][2];
//				dic[1][2] = dic[1][1];
//				dic[1][1] = dic[1][0];
//				dic[1][0] = dic[3][1];
//				dic[3][1] = tmp;
//			}
//			break;
//		case 3:
//			if (0 <= x - 1) {
//				chk = true;
//				x -= 1;
//				int tmp = dic[3][1];
//				dic[3][1] = dic[2][1];
//				dic[2][1] = dic[1][1];
//				dic[1][1] = dic[0][1];
//				dic[0][1] = tmp;
//			}
//			break;
//		case 4:
//			if (x + 1 < n) {
//				chk = true;
//				x += 1;
//				int tmp = dic[0][1];
//				dic[0][1] = dic[1][1];
//				dic[1][1] = dic[2][1];
//				dic[2][1] = dic[3][1];
//				dic[3][1] = tmp;
//			}
//			break;
//		}
//		if (chk) {
//			if (map[x][y] == 0) map[x][y] = dic[1][1];
//			else {
//				dic[1][1] = map[x][y];
//				map[x][y] = 0;
//			}
//			cout << dic[3][1] << "\n";
//		}
//	}
//	return 0;
//}