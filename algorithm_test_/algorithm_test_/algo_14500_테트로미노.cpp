//√‚√≥ : https://www.acmicpc.net/problem/14500
#include <iostream>
using namespace std;
int map[501][501];

int main() {
	int n, m;
	cin >> n >> m;
	int input;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input;
			map[i][j] = input;
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
					int tmp_result = 0;
					for (int k = i; k < i + 2; k++) {
						for (int l = j; l < j + 3; l++) {
							tmp_result += map[k][l];
						}
					}
					if (tmp_result > result) result = tmp_result;
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
		}
	}
	cout << result;
	return 0;
}