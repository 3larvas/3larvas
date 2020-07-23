//// you can use includes, for example:
//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//
////vector<int> solution(vector<int>& A, int F, int M) {
//vector<int> result_v;
//vector<int> tmp_v;
//int vis[100001], x;
//
//bool DFS(int idx, int F, int cnt) {
//    if (cnt == F) {
//        int sum = 0;
//        for (int i = 0; i < F; i++) {
//            sum += vis[i];
//            printf("%d", vis[i]);
//        }
//        printf("\n");
//        if (sum == x) {
//            for (int i = 0; i < F; i++) {
//                result_v.push_back(vis[i]);
//            }
//            return true;
//        }
//        return false;
//    }
//    
//    for (int i = idx; i <= 6; i++) {
//        vis[cnt] = i;
//        if (DFS(i, F, cnt + 1) == true){
//            return true;
//        }  
//    }
//}
//
//vector<int> solution(vector<int>& A, int F, int M) {
//    int size = A.size(), sum = 0;;
//    for (int i = 0; i < size ;  i++) sum += A.at(i);
//    x = M * (size + F) - sum;
//    DFS(1, F, 0);
//    if (result_v.size() == 0)result_v.push_back(0);
//    return result_v;
//}
//
//int main() {    
//    vector<int> v;
//    v.push_back(2);
//    v.push_back(2);
//    v.push_back(2);
//    v.push_back(2);
//    
//    solution(v, 100000, 2);
//    return 0;
//}