////#pragma warning (disable : 4996)
////#include<iostream>
////#include<vector>
////using namespace std;
////vector<int> v_num;
////
////
////class BST{
////public:
////    int array[10000] = { 0, };
////    void numInsert(int x);
////    int  numSearch(int x);
////    void numDelete(int input);
////    void print();
////    void editIdx(int idx, int key);
////    void makeBST();
//// };
////
////void BST::numInsert(int x) {
////    int cur_idx = 0;    
////    while (true) {
////        if (array[cur_idx] == NULL) {
////            array[cur_idx] = x;
////            break;
////        }
////        else if (array[cur_idx] <= x) cur_idx = (2 * cur_idx + 2);
////        else if (array[cur_idx] >= x) cur_idx = (2 * cur_idx + 1);
////    }
////}
////
////int BST::numSearch(int x) {
////    int cur_idx = 0;
////    while (true) {
////        if (array[cur_idx] == 0) return 0;
////        if (array[cur_idx] == x) return cur_idx;
////        else if (array[cur_idx] < x) cur_idx = (2 * cur_idx + 2);
////        else if (array[cur_idx] > x) cur_idx = (2 * cur_idx + 1);
////    }
////}
////void BST::numDelete(int idx) {
////    if (array[2 * idx + 1] == 0 && array[2 * idx + 2] == 0) {
////        array[idx] = 0;
////    }
////    else if (array[2 * idx + 1] != 0 && array[2 * idx + 2] != 0) {
////        int tmp_idx = 2 * idx + 2;
////        while (array[tmp_idx] != 0) {
////            tmp_idx = 2 * tmp_idx + 1;
////        }
////        tmp_idx = (tmp_idx - 1) / 2;
////        array[idx] = array[tmp_idx];
////        array[tmp_idx] = 0;
////    }
////    else {
////        int tmp_idx = 2 * idx + 1;
////        if (array[tmp_idx] != 0) {
////            array[idx] = array[tmp_idx];
////            array[tmp_idx] = 0;
////            editIdx(tmp_idx, 0);
////        }
////        else {
////            array[idx] = array[tmp_idx+1];
////            array[tmp_idx + 1] = 0;
////            editIdx(tmp_idx, 1);
////        }
////    }
////}
////
////void BST::editIdx(int idx, int key) {
////    if (key == 0) {
////        if (array[2 * idx + 1] != 0) {
////            int tmp_idx_1 = 2 * idx + 1;
////            array[idx] = array[tmp_idx_1];
////            editIdx(tmp_idx_1, 0);
////        }
////        if (array[2 * idx + 2] != 0) {
////            int tmp_idx_2 = 2 * idx + 2;
////            array[idx + 1] = array[tmp_idx_2];
////            array[tmp_idx_2] = 0;
////            editIdx(tmp_idx_2, 1);
////        }
////    }
////    else {
////        if (array[2 * idx + 1] != 0) {
////            int tmp_idx_1 = 2 * idx + 1;
////            array[idx+1] = array[tmp_idx_1];
////            array[tmp_idx_1] = 0;
////            editIdx(tmp_idx_1, 0);
////        }
////        if (array[2 * idx + 2] != 0) {
////            int tmp_idx_2 = 2 * idx + 2;
////            array[idx] = array[tmp_idx_2];
////            array[tmp_idx_2] = 0;
////            editIdx(tmp_idx_2, 1);
////        }
////    }
////
////}
////void BST::makeBST() {
////    for (int i = 0; i < 10000; i++) array[i] = 0;
////    for (int i = 0; i < v_num.size(); i++) numInsert(v_num.at(i));
////}
////
////void BST::print() {
////    for (int i = 0; i < 10000; i++) {
////        if(array[i]!=0) printf("%d ",array[i]);
////    }      
////    printf("\n");
////}
////
////BST bst;
////
////int main() {
////    
////    while (1) {
////        int n = 0;
////        scanf("%d", &n);
////        if (n > 0) v_num.push_back(n);
////        else if (n < 0) {
////            n = abs(n);
////            bool chk = false;
////            int del_idx = 0;
////            for (int i = 0; i < v_num.size(); i++) {
////                if (v_num.at(i) == n) {
////                    chk = true;
////                    del_idx = i;
////                    break;
////                }
////            }
////            if (chk) {
////                printf("%d\n", n);
////                v_num.erase(v_num.begin()+del_idx);
////            }
////            else {
////                printf("0\n");
////            }
////        }
////        else if (n == 0) {
////            bst.makeBST();
////        	bst.print();
////            return 0;
////        }
////    }
////};
//
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