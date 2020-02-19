// √‚√≥ : https://www.acmicpc.net/problem/3190
#include <iostream>
#include <queue>
using namespace std;

int n;
int map[101][101];
queue<pair<int, int>> turn_info;
queue<pair<int, int>> snk_info;
bool dir;


int main() {
	cin >> n;
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		int a = 0;
		int b = 0;
		cin >> a >> b;
		map[a][b] = 1;
	}
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		int a = 0;
		char b = 0;
		cin >> a >> b;
		if (b == 'D') turn_info.push(make_pair(a, 1));
		else turn_info.push(make_pair(a, 0));		
	}
	snk_info.push(make_pair(1, 1));

	return 0;
}