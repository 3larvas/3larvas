//#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1
//#include <iostream>
//#include <string.h>
//#include <cstdio>
//#include <unordered_map> 
//using namespace std;
//
//int n, m;
//string dic[100];
//string sentance[100];
//
//int calHashCode(string input) {
//	int result = 0;
//	int size = input.length();
//	for (int i = 0; i < size; i++) {
//		result += input[i];
//	}
//	return result;
//}
//
//int main() {
//	unordered_map<int, string> hs_map;
//	cin >> n;
//	cin >> m;
//	for (int i = 0; i < n; i++) {
//		string input;
//		int hs_code;
//		cin >> input;
//		hs_code = calHashCode(input);
//		hs_map.insert(unordered_map<int ,string>::value_type(hs_code, input));
//	} 
//	for (int i = 0; i < m; i++) {
//		string input;
//		int hs_code;
//		cin >> input;
//		hs_code = calHashCode(input);
//		unordered_map<int, string>::iterator find = hs_map.find(hs_code);
//		if (hs_map.end() == find) {
//			cout << 0 << "\n";
//			return 0;
//		}
//	}
//	cout << 1 << "\n";
//
//	return 0;
//}
