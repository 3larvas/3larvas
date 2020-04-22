
#pragma warning (disable : 4996)
#include <cstdio>

int n;
int arr[101];
int idx;
int result;

//교환함수
void swap_a(int idx, int root) {
    int temp = arr[root];
    arr[root] = arr[idx];
    arr[idx] = temp;
}

int main() {
    int input = 0;
    while (1) {
        scanf("%d", &input);
        //====================== end ======================//
        if (input == 0) break;
        //====================== input ======================//
        else if (input > 20) {
            arr[idx] = input;
            idx++;
            continue;
        }
        //====================== output ======================//
        else if (input <= 20) {

            //Heapifiy 작업
            for (int i = 1; i < idx; i++) {
                int cur_idx = i;
                while (cur_idx != 0) {
                    //0부터 시작했기 때문에 (idx-1) / 2
                    int root = (cur_idx - 1) / 2;
                    //자식노드와 부모노드 비교
                    if (arr[root] < arr[cur_idx]) swap_a(cur_idx, root);
                    //비교가 끝난 뒤 부모가 유효한지 검사
                    cur_idx = root;
                }
            }
            //Sorting 작업
            for (int i = idx - 1; i >= 0; i--) {
                //마지막 노드를 root로 이동
                swap_a(0, i);
                int root = 0;
                int cur_idx = 1;
                while (cur_idx < i) {
                    cur_idx = 2 * root + 1;
                    //두 개의 자식노드 중 큰 값이 변경되도록 cur_idx 설정
                    if (cur_idx < i - 1 && arr[cur_idx] < arr[cur_idx + 1]) cur_idx++;
                    //큰 자식노트가 부모보다 클 때 값 변경   
                    if (cur_idx < i && arr[root] < arr[cur_idx]) swap_a(cur_idx, root);
                    root = cur_idx;
                }
            }
            for (int i = 0; i < input; i++) {
                printf("%d\n", arr[i]);
                arr[i] = 0;
            }
            int tmp = 0;
            for (int i = input; i < idx; i++) {
                arr[tmp] = arr[i];
                tmp++;
                arr[i]=0;
            }
            idx = tmp;
        }
    }
    return 0;
}