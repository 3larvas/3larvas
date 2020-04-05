// ÃâÃ³ : https://www.acmicpc.net/problem/1106
#pragma warning (disable : 4996)
#include <cstdio>
#include <tuple>
#include <algorithm>
using namespace std;

int c, n;
tuple<int, int, double> list[21];
int result = 999999;
int result_cost;

struct biggerThan
{
	bool operator()(tuple<int, int, double> const& lhs, tuple<int, int, double> const& rhs) const
	{
		return std::get<2>(lhs) > std::get<2>(rhs);
	}
};

void search(int idx, int sum_cost, int sum_num) {
	if (sum_num >= c) {
		if(result> sum_cost)
			result = sum_cost;
		return;
	} 
	for (int i = idx; i < n; i++) {
		search(i, sum_cost + get<0>(list[i]), sum_num + get<1>(list[i]));
	}
}

int main() {
	scanf("%d %d", &c, &n);
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0;
		scanf("%d %d", &a, &b);
		list[i] = make_tuple(a, b, b / a);
	} 
	sort(list, list + n, biggerThan());
	int sum_num  = 0;
	int sum_cost = 0;
	while (sum_num + get<1>(list[0]) < c) {
		sum_cost += get<0>(list[0]);
		sum_num  += get<1>(list[0]);
	}

	//for (int i = 0; i < n; i++) {
	//	if (sum_num + get<1>(list[i]) >= c) {
	//		if (result > sum_cost + get<0>(list[i])){
	//			result = sum_cost + get<0>(list[i]);
	//		}			
	//	}		
	//}
	search(0, sum_cost, sum_num);
	printf("%d", result);
	return 0;
}