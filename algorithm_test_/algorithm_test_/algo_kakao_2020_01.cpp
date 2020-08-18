//#pragma warning(disable : 4996)
//#include <stdio.h>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//    int len = s.length();
//    int answer = 9999999;
//    for (int gap = 1; gap <= len / 2; gap++) {
//        string tmp_s = s;
//        for (int i = 0; i < tmp_s.length() - gap; i++) {
//            string cur_str = tmp_s.substr(i, gap);
//            int tmp_i = i;
//            int cnt_num = 1;
//            while (true) {
//                string nxt_str = tmp_s.substr(tmp_i + gap, gap);
//                if (cur_str != nxt_str) break;
//                cnt_num++;
//                tmp_i++;
//            }
//            if (cnt_num != 1) {
//                string tmp = to_string(cnt_num) + cur_str;
//                tmp_s.replace(i, (cnt_num * gap), tmp);
//                i += tmp.length() - 1;
//            }
//        }
//        if (tmp_s.length() < answer) 
//            answer = tmp_s.length();
//    }
//    return answer;
//}
//
//int main() {
//    /*printf("%d\n", solution("aabbaccc"));
//    printf("%d\n", solution("ababcdcdababcdcd"));
//    printf("%d\n", solution("abcabcdede"));
//    printf("%d\n", solution("abcabcabcabcdededededede"));*/
//    printf("%d\n", solution("xababcdcdababcdcd"));
//    return 0;
//}