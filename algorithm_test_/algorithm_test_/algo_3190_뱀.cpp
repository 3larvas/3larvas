// 출처 : https://www.acmicpc.net/problem/3190
#include <iostream>
#include <queue>

using namespace std;

struct snk {
	vector<pair<int, int>> snk_pos;
	int cnt = 0;
	int dir = 0;
};
int n;
bool map[101][101];
queue<pair<int, bool>> turn_info;

int main() {
	snk snake;
	bool chk = false;
	cin >> n;
	int cnt = 0;
	cin >> cnt;
	int  a = 0;
	int  b = 0;
	int  c = 0;
	char d = 0;
	for (int i = 0; i < cnt; i++) {
		cin >> a >> b;
		map[a][b] = 1;
	}
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> c >> d;
		if (d == 'D') turn_info.push(make_pair(c, true));
		else turn_info.push(make_pair(c, false));
	}
	snake.snk_pos.push_back(make_pair(1, 1));

	while (true) {
		int nxt_head_col = snake.snk_pos.back().first;
		int nxt_head_row = snake.snk_pos.back().second;
		snake.cnt += 1;
		switch (snake.dir % 4) { // 이부분이 문제...!!! dir이 음수일수도 있었다.
		case 0:
			nxt_head_col += 1;
			break;
		case 1:
			nxt_head_row += 1;
			break;
		case 2:
			nxt_head_col -= 1;
			break;
		case 3:
			nxt_head_row -= 1;
			break;
		}

		for (int i = 0; i < snake.snk_pos.size(); i++) {
			if (nxt_head_col == snake.snk_pos.at(i).first
				&& nxt_head_row == snake.snk_pos.at(i).second) {
				cout << snake.cnt;
				chk = true;
				break;
			}
		}
		if (chk) break;
		snake.snk_pos.push_back(make_pair(nxt_head_col, nxt_head_row));
		if (map[nxt_head_row][nxt_head_col] != 1) snake.snk_pos.erase(snake.snk_pos.begin());
		map[nxt_head_row][nxt_head_col] = 0;
		if (nxt_head_col <= 0 || nxt_head_row <= 0
			|| nxt_head_col > n || nxt_head_row > n) {
			cout << snake.cnt;
			break;
		}
		if (!turn_info.empty()) {
			if (snake.cnt == turn_info.front().first) {
				if (turn_info.front().second == true) snake.dir += 1;
				else { /// 여기서 dir이 음수일때 처리!
					if (snake.dir == 0) snake.dir = 3;
					else  snake.dir -= 1;
				}
				turn_info.pop();
			}
		}
	}
	return 0;
}