//// 출처 : https://www.acmicpc.net/problem/1106
#pragma warning (disable : 4996)
#include <cstdio>
using namespace std;

int c, n;
int list[21][2];
int d[1001];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
	scanf("%d %d", &c, &n);
	for (int i = 0; i < n; i++) 
		scanf("%d %d", &list[i][0], &list[i][1]);
    for (int i = 1; i < 1001; i++) d[i] = 1000000;
	int sum_num  = 0;
	int sum_cost = 1000000;
	while (sum_num <= c) {
        for (int i = 0; i < n; i++) {
            if (sum_num + list[i][1] >= c)
                sum_cost = min(sum_cost, d[sum_num] + list[i][0]);
            else // 다음칸에는 min(다음칸 원래값, 새로운값)
                d[sum_num + list[i][1]] = min(d[sum_num + list[i][1]], d[sum_num] + list[i][0]);
        }
		sum_num++;
	}
	printf("%d", sum_cost);
	return 0;
}
