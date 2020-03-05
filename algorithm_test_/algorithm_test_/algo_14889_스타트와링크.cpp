// √‚√≥ : https://www.acmicpc.net/problem/14889
#include <iostream>
using namespace std;
int n;
int m[20][20];
int m_sub[10];
int result_a, result_b;
void DFS(int cnt, int val) {
	m_sub[cnt] = val;
	if (cnt < n / 2 - 1) {
		for (int i = val + 1; i < n; i++) {
			DFS(cnt + 1, i);
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				if (j != i) {
					cout << m[m_sub[i]][m_sub[j]]<< ", ";
					result_a += m[m_sub[i]][m_sub[j]];
				}
			}
		}
		cout << "###\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n*n; i++) cin >> m[i / n][i % n];
	DFS(0, 0);
	return 0;
}