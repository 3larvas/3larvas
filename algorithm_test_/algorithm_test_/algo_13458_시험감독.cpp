// √‚√≥ : https://www.acmicpc.net/problem/13458
#include <iostream>
using namespace std;
int n, b, c;
long long result = 0;
int room[1000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input = 0;
		cin >> input;
		room[i] = input;
	}
	cin >> b >> c;
	for (int i = 0; i < n; i++) {
		room[i] -= b;
		result += 1;
		if (room[i] > 0) {
			result += room[i] / c;
			room[i] = room[i] % c;
			if (room[i] != 0) result += 1;
		}
	}	
	cout << result;
	return 0;
}