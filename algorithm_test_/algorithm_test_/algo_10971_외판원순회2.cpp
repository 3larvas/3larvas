////√‚√≥ : https://www.acmicpc.net/problem/10971
//#include <iostream>
//#include <vector>
//using namespace std;
//int cost[10][10] = { 0 };
//int n = 0;
//bool vis[10] = { false };
//vector<int> route;
//unsigned int fin_result = 4294967295;
//
//void DFS() {
//	if (route.size() == n) {
//		
//		int result = 0;
//		/*cout << "===============\n";*/
//		//for (int i = 0; i < n;  i++) {
//		//	cout << route.at(i) << " ";
//		//}
//		//cout << "\n";
//		for (int i = 0; i < route.size()-1; i++) {			
//			//cout << cost[route.at(i)][route.at(i + 1)] << " ";
//			result += cost[route.at(i)][route.at(i + 1)];
//		}
//		//cout << cost[route.back()][route.front()] << " ";
//		result += cost[route.back()][route.front()];
//		if (result < fin_result) fin_result = result;
//		//cout << "\n" << result << "\n";
//	}
//	for (int i = 0; i < n; i++) {
//		if (!vis[i]) {		
//			if (!route.empty() && cost[route.back()][i] == 0) continue;
//			if (route.size() == n-1 && cost[i][route.front()] == 0) continue;
//			vis[i] = true;
//			route.push_back(i);
//			DFS();
//			vis[i] = false;
//			route.pop_back();
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> cost[i][j];
//		}
//	}
//	DFS();
//	cout << fin_result;
//	return 0;
//}