////√‚√≥ ; https://www.acmicpc.net/problem/1759
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int l, c = 0;
//vector<char> v;
//vector<char> result;
//
//void DFS(int start_idx) {
//	for (int i = start_idx; i < c; ) {
//		result.push_back(v.at(i));		
//		if (result.size() == l) {
//			int cnt_mo = 0;
//			int cnt_ja = 0;
//			cnt_mo += count(result.begin(), result.end(), 'a');
//			cnt_mo += count(result.begin(), result.end(), 'e');
//			cnt_mo += count(result.begin(), result.end(), 'i');
//			cnt_mo += count(result.begin(), result.end(), 'o');
//			cnt_mo += count(result.begin(), result.end(), 'u');
//			cnt_ja = result.size() - cnt_mo;
//			if (!(cnt_mo < 1 || cnt_ja < 2)) {
//				for (int j = 0; j < result.size(); j++) {
//					cout << result.at(j);
//				}
//				cout << "\n";
//			}
//			result.pop_back();
//			i++;
//			continue;
//		}
//		i++;
//		DFS(i);
//		result.pop_back();
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> l >> c;
//	for (int i = 0; i < c; i++) {
//		char input = ' ';
//		cin >> input;
//		v.push_back(input);
//	}
//	sort(v.begin(), v.end());
//	DFS(0);
//	return 0;
//}