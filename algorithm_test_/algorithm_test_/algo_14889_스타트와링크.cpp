// √‚√≥ : https://www.acmicpc.net/problem/14889
#include <iostream>
#include <vector>
using namespace std;
int n;
int m[20][20];
int result = 100000;
int result_a, result_b;
vector<int> start, link;

int min(int a, int b) {
	return a < b ? a : b;
}
void DFS(int i) {
	if (start.size() == n / 2 && link.size() == n / 2) {
		for (int i = 0; i < start.size(); i++) cout << start.at(i);
		cout << ", ";
		for (int i = 0; i < link.size(); i++) cout << link.at(i);
		cout << "\n";
		for (int i = 0; i < start.size(); i++) {
			for (int j = 0; j < start.size(); j++) {
				if (j != i) {
					result_a += m[start.at(i)][start.at(j)];
				}
			}
		}
		for (int i = 0; i < link.size(); i++) {
			for (int j = 0; j < link.size(); j++) {
				if (j != i) {
					result_b += m[link.at(i)][link.at(j)];
				}
			}
		}
		result = min(result, abs(result_a - result_b));
	}
	if (start.size() < n / 2) {
		start.push_back(i);
		DFS(i + 1);
		start.pop_back();
	}
	if (link.size() < n / 2) {
		link.push_back(i);
		DFS(i + 1);
		link.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n*n; i++) cin >> m[i / n][i % n];
	DFS(0);
	cout << "####" << result;
	return 0;
}