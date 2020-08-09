#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for (int gap = 0; gap < s.length/2; gap++) {
        for (int i = 0; i < s.length()-gap; i++) {
            string cur_str = s.
        }
        

    }
    return answer;
}

int main() {
    solution("ababcdcdababcdcd");
    return 0;
}