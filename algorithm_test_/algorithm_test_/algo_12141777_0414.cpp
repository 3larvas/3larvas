
#pragma warning (disable : 4996)
#include <cstdio>

int n;
int arr[101];
int idx;
int result;

//��ȯ�Լ�
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

            //Heapifiy �۾�
            for (int i = 1; i < idx; i++) {
                int cur_idx = i;
                while (cur_idx != 0) {
                    //0���� �����߱� ������ (idx-1) / 2
                    int root = (cur_idx - 1) / 2;
                    //�ڽĳ��� �θ��� ��
                    if (arr[root] < arr[cur_idx]) swap_a(cur_idx, root);
                    //�񱳰� ���� �� �θ� ��ȿ���� �˻�
                    cur_idx = root;
                }
            }
            //Sorting �۾�
            for (int i = idx - 1; i >= 0; i--) {
                //������ ��带 root�� �̵�
                swap_a(0, i);
                int root = 0;
                int cur_idx = 1;
                while (cur_idx < i) {
                    cur_idx = 2 * root + 1;
                    //�� ���� �ڽĳ�� �� ū ���� ����ǵ��� cur_idx ����
                    if (cur_idx < i - 1 && arr[cur_idx] < arr[cur_idx + 1]) cur_idx++;
                    //ū �ڽĳ�Ʈ�� �θ𺸴� Ŭ �� �� ����   
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