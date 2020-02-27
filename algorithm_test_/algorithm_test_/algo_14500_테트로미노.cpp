//√‚√≥ : https://www.acmicpc.net/problem/14500
#include <iostream>
using namespace std;
int map[501][501];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}
	int result = 0;
	for (int mode = 0; mode < 5; mode++) {
		switch (mode) {
		case 0:
			for (int i = 0; i < n; i++) {
				for (int j = 0; j + 3 < m; j++) {
					int tmp_result = 0;
					for (int k = j; k < j + 4; k++) tmp_result += map[i][k];
					if (tmp_result > result) result = tmp_result;
				}
			}
			break;
		case 1:
			for (int i = 0; i + 3 < n; i++) {
				for (int j = 0; j < m; j++) {
					int tmp_result = 0;
					for (int k = i; k < i + 4; k++) tmp_result += map[k][j];
					if (tmp_result > result) result = tmp_result;
				}
			}
			break;
		case 2:
			for (int i = 0; i + 1 < n; i++) {
				for (int j = 0; j + 1 < m; j++) {
					int tmp_result = 0;
					for (int k = i; k < i + 2; k++) {
						for (int l = j; l < j + 2; l++) {
							tmp_result += map[k][l];
						}
					}
					if (tmp_result > result) result = tmp_result;
				}
			}
			break;
		case 3:
			for (int i = 0; i + 1 < n; i++) {
				for (int j = 0; j + 1 < m; j++) {
					int tmp_arry[6] = { 0, };
					int cnt = 0;
					for (int k = i; k < i + 2; k++) {
						for (int l = j; l < j + 3; l++) {
							tmp_arry[cnt] = map[k][l];
							cnt++;
						}
					}
					for (int i = 0; i < 8; i++) {
						int tmp_result = 0;
						switch (i) {
						case 0:
							tmp_result = tmp_arry[2] + tmp_arry[3] + tmp_arry[4] + tmp_arry[5];
							break;
						case 1:
							tmp_result = tmp_arry[0] + tmp_arry[3] + tmp_arry[4] + tmp_arry[5];
							break;
						case 2:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[2] + tmp_arry[5];
							break;
						case 3:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[2] + tmp_arry[3];
							break;
						case 4:
							tmp_result = tmp_arry[1] + tmp_arry[2] + tmp_arry[3] + tmp_arry[4];
							break;
						case 5:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[4] + tmp_arry[5];
							break;
						case 6:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[2] + tmp_arry[4];
							break;
						case 7:
							tmp_result = tmp_arry[1] + tmp_arry[3] + tmp_arry[4] + tmp_arry[5];
							break;
						}
						if (tmp_result > result) result = tmp_result;
					}				
				}
			}
			break;
		case 4:
			for (int i = 0; i + 1 < n; i++) {
				for (int j = 0; j + 1 < m; j++) {
					int tmp_arry[6] = { 0, };
					int cnt = 0;
					for (int k = i; k < i + 3; k++) {
						for (int l = j; l < j + 2; l++) {
							tmp_arry[cnt] = map[k][l];
							cnt++;
						}
					}
					for (int i = 0; i < 8; i++) {
						int tmp_result = 0;
						switch (i) {
						case 0:
							tmp_result = tmp_arry[1] + tmp_arry[3] + tmp_arry[4] + tmp_arry[5];
							break;
						case 1:
							tmp_result = tmp_arry[0] + tmp_arry[2] + tmp_arry[4] + tmp_arry[5];
							break;
						case 2:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[2] + tmp_arry[4];
							break;
						case 3:
							tmp_result = tmp_arry[0] + tmp_arry[1] + tmp_arry[3] + tmp_arry[5];
							break;
						case 4:
							tmp_result = tmp_arry[0] + tmp_arry[2] + tmp_arry[3] + tmp_arry[5];
							break;
						case 5:
							tmp_result = tmp_arry[1] + tmp_arry[2] + tmp_arry[3] + tmp_arry[4];
							break;
						case 6:
							tmp_result = tmp_arry[0] + tmp_arry[2] + tmp_arry[3] + tmp_arry[4];
							break;
						case 7:
							tmp_result = tmp_arry[1] + tmp_arry[2] + tmp_arry[3] + tmp_arry[5];
							break;
						}
						if (tmp_result > result) result = tmp_result;
					}
				}
			}
			break;
		}
	}
	cout << result;
	return 0;
}