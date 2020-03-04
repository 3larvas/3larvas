//√‚√≥ : https://www.acmicpc.net/problem/14888
#include <iostream>
using namespace std;
int n;
int num[12];
int oper_num[4];
int num_max = -1000000001;
int num_min = 1000000001;

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b) {
	return a < b ? a : b;
}

void dfs(int a, int b, int c, int d, int cnt, int sum) {
	if (cnt == n) {
		num_max = max(sum, num_max);
		num_min = min(sum, num_min);		
		return;
	}
	if (a > 0) dfs(a - 1, b, c, d, cnt + 1, sum + num[cnt]);
	if (b > 0) dfs(a, b - 1, c, d, cnt + 1, sum - num[cnt]); 
	if (c > 0) dfs(a, b, c - 1, d, cnt + 1, sum * num[cnt]);
	if (d > 0) dfs(a, b, c, d - 1, cnt + 1, sum / num[cnt]);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	cin >> oper_num[0] >> oper_num[1] >> oper_num[2] >> oper_num[3];
	dfs(oper_num[0], oper_num[1], oper_num[2], oper_num[3], 1, num[0]);
	cout << num_max << "\n" << num_min;
	return 0;
}