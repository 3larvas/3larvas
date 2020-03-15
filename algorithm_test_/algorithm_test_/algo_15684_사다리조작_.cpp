// √‚√≥ : https://www.acmicpc.net/problem/15684
#pragma warning(disable:4996)
#include <cstdio>

int n, m, h;
int map[30][10];
int main() {
	scanf("%d %d %d", &n, &m, &h);
	for (int i = 0; i < m; i++) {
		int a=0, b = 0;
		scanf("%d %d", &a, &b);
		map[a][b] = 1;
		map[a][b+1] = 2;
	}
	printf("");
	return 0;
}

