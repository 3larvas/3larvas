////출처 : https://www.acmicpc.net/problem/9095
////풀이 : https://fieldanimal.tistory.com/30
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int t = 0;
//int n = 0;
//int num[3] = { 1, 2, 3 };
//int result = 0;
//vector<int> result_v;
//int d[11] = { 0, };
//
//void DFS(int input) {
//	for (int i = 0; i < 3; i++) {
//		input -= num[i];
//		if (input > 0) {
//			DFS(input);
//			input += num[i];
//		}
//		else if (input < 0) {
//			break;
//		}
//		else if (input == 0) {
//			result += 1;
//			break;
//		}
//	}
//}
//
//void dp() {
//	d[0] = 1;
//	for (int i = 1; i < n; i++) {
//
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		cin >> n;
//		DFS(n);
//		result_v.push_back(result);
//		result = 0;
//	}
//	for (int i = 0; i < t; i++) cout << result_v.at(i) << "\n";
//
//	return 0;
//}