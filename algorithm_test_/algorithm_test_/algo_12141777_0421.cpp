//#include <iostream>
//using namespace std;
//
//class BST {
//private:
//    int tree[513];
//public:
//    BST() {
//        for (int i = 0; i < 513; i++) {
//            tree[i] = 0;
//        }
//    }
//    void BST_insert(int N, int index) {
//        if (tree[index] == 0) tree[index] = N;
//        else {
//            if (tree[index] < N) BST_insert(N, index * 2 + 1);
//            else if (tree[index] > N) BST_insert(N, index * 2);
//        }
//    }
//    void BST_delete(int index) {
//        int i = index;
//        int temp;
//        if (tree[2 * i] == 0 && tree[2 * i + 1] == 0) { //제일 아래 노드일 때
//            tree[i] = 0;
//        }
//        else {
//            if (tree[2 * i + 1] == 0) { // 왼쪽 하위 노드 중 가장 큰 값
//                int j = 2 * i;
//                while (tree[2 * j + 1] != 0) {// 제일 아래 노드까지 
//                    j = 2 * j + 1;
//                }
//                temp = tree[j];
//                BST_delete(j);  
//                tree[index] = temp;
//            }
//            else {                      // 오른쪽 하위 노드 중 제이 작은 값
//                int j = 2 * i + 1;
//                while (tree[2 * j] != 0) {// 제일 아래 노드까지 
//                    j = j * 2;
//                }
//                temp = tree[j];
//                BST_delete(j);
//                tree[index] = temp;
//            }
//        }
//    }
//    int BST_search(int N, int index) {
//        if (tree[index] == N) {
//            int temp = tree[index];
//            BST_delete(index);
//            return temp;
//        }
//        else if (tree[index] == 0) {
//            return 0;
//        }
//        else {
//            if (tree[index] < N)return BST_search(N, index * 2 + 1);
//            else if (tree[index] > N)return BST_search(N, index * 2);
//        }
//    }
//    void BST_print() {
//        for (int i = 1; i < 512; i++) {
//            if (tree[i] != 0) cout << tree[i] << " ";
//        }
//    }
//};
//
//int main() {
//    BST bst;
//    int num;
//    for (;;) {
//        cin >> num;
//        if (num < 0) {
//            int temp = num * (-1);
//            cout << bst.BST_search(temp, 1) << endl;
//        }
//        else if (num > 0) {
//            bst.BST_insert(num, 1);
//        }
//        else {
//            bst.BST_print();
//            break;
//        }
//    }
//    return 0;
//}