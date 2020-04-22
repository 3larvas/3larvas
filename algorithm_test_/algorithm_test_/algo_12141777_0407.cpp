////#pragma warning (disable : 4996)
////#include <cstdio>
////
////int n;
////int arr_a[101];
////int arr_b[101];
////int result;
////
//////교환함수
////void swap_a(int idx, int root) {
////    int temp = arr_a[root];
////    arr_a[root] = arr_a[idx];
//////    arr_a[idx] = temp;
////}
////void swap_b(int idx, int root) {
////    int temp = arr_b[root];
////    arr_b[root] = arr_b[idx];
////    arr_b[idx] = temp;
////}
////int main() {
////    scanf("%d", &n);
////    for (int i = 0; i < n; i++) scanf("%d", &arr_a[i]);
////    for (int i = 0; i < n; i++) scanf("%d", &arr_b[i]);
////    //Heapifiy 작업
////    for (int i = 1; i < n; i++) {
////        int cur_idx = i;
////        while (cur_idx != 0) {
////            //0부터 시작했기 때문에 (idx-1) / 2
////            int root = (cur_idx - 1) / 2;
////            //자식노드와 부모노드 비교
////            if (arr_a[root] < arr_a[cur_idx]) swap_a(cur_idx, root);
////            //비교가 끝난 뒤 부모가 유효한지 검사
////            cur_idx = root;
////        }
////    }
////    //Sorting 작업
////    for (int i = n - 1; i >= 0; i--) {
////        //마지막 노드를 root로 이동
////        swap_a(0, i);
////        int root = 0;
////        int cur_idx = 1;
////        while (cur_idx < i) {
////            cur_idx = 2 * root + 1;
////            //두 개의 자식노드 중 큰 값이 변경되도록 cur_idx 설정
////            if (cur_idx < i - 1 && arr_a[cur_idx] < arr_a[cur_idx + 1]) cur_idx++;
////            //큰 자식노트가 부모보다 클 때 값 변경   
////            if (cur_idx < i && arr_a[root] < arr_a[cur_idx]) swap_a(cur_idx, root);
////            root = cur_idx;
////        }
////    }
////    //Heapifiy 작업
////    for (int i = 1; i < n; i++) {
////        int cur_idx = i;
////        while (cur_idx != 0) {
////            //0부터 시작했기 때문에 (idx-1) / 2
////            int root = (cur_idx - 1) / 2;
////            //자식노드와 부모노드 비교
////            if (arr_b[root] < arr_b[cur_idx]) swap_b(cur_idx, root);
////            //비교가 끝난 뒤 부모가 유효한지 검사
////            cur_idx = root;
////        }
////    }
////    //Sorting 작업
////    for (int i = n - 1; i >= 0; i--) {
////        //마지막 노드를 root로 이동
////        swap_b(0, i);
////        int root = 0;
////        int cur_idx = 1;
////        while (cur_idx < i) {
////            cur_idx = 2 * root + 1;
////            //두 개의 자식노드 중 큰 값이 변경되도록 cur_idx 설정
////            if (cur_idx < i - 1 && arr_b[cur_idx] < arr_b[cur_idx + 1]) cur_idx++;
////            //큰 자식노트가 부모보다 클 때 값 변경   
////            if (cur_idx < i && arr_b[root] < arr_b[cur_idx]) swap_b(cur_idx, root);
////            root = cur_idx;
////        }
////    }
////    for (int i = 0; i < n; i++) {        
////        result += arr_a[i] * arr_b[n - i - 1];
////    }
////    printf("%d", result);
////    return 0;
////}
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int N;
//int heap[100];
//int b[100];
//int result = 0;
//
//
//
//void heapify(int i) {
//    int c = 2 * i + 1; // 왼쪽노드를 가리킨다.
//    if (c < N && heap[c] < heap[c + 1]) { // 오른쪽자식노드가 있고, 왼족자식노드보다 크다면
//        c++;
//    }
//    if (heap[i] < heap[c]) { // 부모보다 자식이 더크다면 위치를 교환한다.
//        int temp = heap[i];
//        heap[i] = heap[c];
//        heap[c] = temp;
//    }
//    if (c <= N / 2) heapify(c);
//}
//
//
//void heapify_b(int i) {
//    int c = 2 * i + 1; // 왼쪽노드를 가리킨다.
//    if (c < N && b[c] < b[c + 1]) { // 오른쪽자식노드가 있고, 왼족자식노드보다 크다면
//        c++;
//    }
//    if (b[i] < b[c]) { // 부모보다 자식이 더크다면 위치를 교환한다.
//        int temp = b[i];
//        b[i] = b[c];
//        b[c] = temp;
//    }
//    if (c <= N / 2) heapify(c);
//}
//
//
//
//int main(void) {
//
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> heap[i];
//    }
//    for (int i = 0; i < N; i++) {
//        cin >> b[i];
//    }
//
//    for (int i = N / 2; i >= 0; i--) { // 힙생성
//        heapify(i);
//        heapify_b(i);
//    }
//
//
//    for (int i = N - 1; i >= 0; i--) {
//
//        int temp = heap[0];
//        heap[0] = heap[i];
//        heap[i] = temp;
//        int root = 0;
//        int c = 1;
//        do {
//            c = 2 * root + 1;
//            if (c < i - 1 && heap[c] < heap[c + 1]) c++;
//            if (c < i && heap[root] < heap[c]) {
//                temp = heap[root];
//                heap[root] = heap[c];
//                heap[c] = temp;
//            }
//            root = c;
//        } while (c < i);
//    }
//
//    for (int i = N - 1; i >= 0; i--) {
//
//        int temp = b[0];
//        b[0] = b[i];
//        b[i] = temp;
//        int root = 0;
//        int c = 1;
//        do {
//            c = 2 * root + 1;
//            if (c < i - 1 && b[c] < b[c + 1]) c++;
//            if (c < i && b[root] < b[c]) {
//                temp = b[root];
//                b[root] = b[c];
//                b[c] = temp;
//            }
//            root = c;
//        } while (c < i);
//    }
//
//    for (int k = 0; k < N; k++) {
//        result += heap[k] * b[N - k - 1];
//    }
//
//    cout << result;
//
//
//
//    return 0;
//}