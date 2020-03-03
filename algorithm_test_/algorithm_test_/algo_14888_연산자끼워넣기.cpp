//√‚√≥ : https://www.acmicpc.net/problem/14888
#include <iostream>
#include <vector>
using namespace std;
int  n;
int  num[11];
int  oper_swq[10];
int  oper_num[4];
bool oper_vis[10];
vector<int> oper_v;
vector<int> oper_seq_tmp;

int cal(int a, int b, int mode) {
	switch (mode) {
	case 0:
		return a + b;	
	case 1:
		return a - b;
	case 2:
		return a * b;
	case 3:
		return a / b;
	}
}

void dfs_() {
	for (int i = 0; i < n - 1; i++) {
		if (oper_v.size() == n - 1) {
			for(int j=0 ;  j< n-1 ; j++) cout << oper_v.at(j);
			cout << "\n";
			break;
		}
		if (!oper_vis[i]) {
			oper_vis[i] = true;
			oper_v.push_back(oper_seq_tmp.at(i));
			dfs_();
			oper_vis[i] = false;
			oper_v.pop_back();
		}
	}
}

void dfs(int a, int b, int c, int d, int cnt, int sum) {
	if (cnt == n-1) {
		//cout <<  sum << "\n";
		for (int j = 0; j < n - 1; j++) cout << oper_v.at(j);
		cout << "\n";
	}
	if (a > 0){
		oper_v.push_back(0);
		dfs(a - 1, b, c, d, cnt + 1, sum + num[cnt]);
		oper_v.pop_back();
	}
	if (b > 0) {
		oper_v.push_back(1);
		dfs(a, b - 1, c, d, cnt + 1, sum - num[cnt]);
		oper_v.pop_back();
	} 
	if (c > 0) {
		oper_v.push_back(2);
		dfs(a, b, c - 1, d, cnt + 1, sum * num[cnt]);
		oper_v.pop_back();
	} 
	if (d > 0) {
		oper_v.push_back(3);
		dfs(a, b, c, d - 1, cnt + 1, sum / num[cnt]);
		oper_v.pop_back();
	} 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> num[i];
	cin >> oper_num[0] >> oper_num[1] >> oper_num[2] >> oper_num[3];
	/*for (int i = 0; i < 4; i++) {
		while (oper_num[i] != 0) {
			oper_seq_tmp.push_back(i);
			oper_num[i] -= 1;
		}
	}*/
	//dfs();
	dfs(oper_num[0], oper_num[1], oper_num[2], oper_num[3], 0, 0);
	return 0;
}