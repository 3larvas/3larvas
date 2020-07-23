//// you can use includes, for example:
//#include <stdio.h>
//#include <algorithm>
//#include <string>
//using namespace std;
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//
//int solution(int A, int B) {
//    long long int val = (long long int)A * (long long int)B;
//    long long int tmp = val;
//    int cnt = 0, size = 0;;
//    for (long long int i = 1; tmp > 0; i *= 10) {
//        tmp /= 2;
//        size++;
//    }
//    for (int i = 0; i < size; i++) {
//        long long int tmp_a = val >> i;
//        if (tmp_a % 2 == 1) cnt++;
//    }
//    return cnt;
//}
//
//int main() {    
//    
//    printf("%d", solution(100000000, 100000000));
//    return 0;
//}