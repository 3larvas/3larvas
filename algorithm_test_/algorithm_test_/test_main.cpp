////#pragma warning (disable : 4996)
////#include <stdio.h>
////using namespace std;
////int arr[10];
////char input[10];
////
////int main() {
////	scanf("%s", input);
////	for (int i = 0; i < 10; i++) {
////		arr[i] = (int)input[i];
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//////////////////////////////////////////////////////////////////////////////////
////#include <iostream>
////using namespace std;
////
////struct Node {
////    int data;
////    Node* next;
////};
////
////Node* top = NULL;
////
////void push(int data) {
////    Node* node = new Node();
////    node->data = data;
////    node->next = top;
////    top = node;
////}
////
////void Top() {
////    if (top != NULL) {
////        cout << "top : " << top->data;
////    }
////    else {
////        cout << "top is NULL";
////    }
////    cout << endl;
////}
////
////void pop() {
////    if (top == NULL) {
////        cout << "stack underflow" << endl;
////    }
////    else {
////        cout << "pop : " << top->data << endl;
////        top = top->next;
////    }
////}
////
////void display() {
////    Node* ptr;
////    if (top == NULL) {
////        cout << "stack is empty";
////    }
////    else {
////        ptr = top;
////        cout << "stack element : ";
////        while (ptr != NULL) {
////            cout << ptr->data << " ";
////            ptr = ptr->next;
////        }
////    }
////    cout << endl;
////}
////
////int main() {
////
////    display();
////    Top();
////
////    push(1);
////    push(2);
////    push(3);
////
////    display();
////    Top();
////
////    pop();
////    pop();
////
////    display();
////    Top();
////
////    push(5);
////
////    display();
////    Top();
////
////    return 0;
////}
////////////////////////////////////////////////////////////////////////
//#pragma warning(disable : 4996)
//#include <stdio.h>
//using namespace std;
//int arr[10] = { 6, 5, 1, 8, 4, 7, 2, 3, 9, 0 };
//
//void quick(int idx_start, int idx_end) {
//	if (idx_start >= idx_end) return;
//	int idx_mid = (idx_start + idx_end) / 2;
//	int idx_pivot = idx_start;
//	int idx_left = idx_start + 1;
//	int idx_right = idx_end;
//	while (idx_left <= idx_right) {
//		while (idx_left <= idx_right && arr[idx_left]  <= arr[idx_pivot]) 
//			idx_left++;
//		while (idx_left <= idx_right && arr[idx_right] >= arr[idx_pivot]) 
//			idx_right--;
//		if (idx_left > idx_right) {
//			int tmp = arr[idx_right];
//			arr[idx_right] = arr[idx_pivot];
//			arr[idx_pivot] = tmp;
//		}
//		else {
//			int tmp = arr[idx_left];
//			arr[idx_left] = arr[idx_right];
//			arr[idx_right] = tmp;
//		}
//	}
//	quick(idx_start, idx_right - 1);
//	quick(idx_right + 1, idx_end);
//}
//
//int main() {
//	quick(0, 9);
//	for(int i = 0; i < 10; i++)
//		printf("%d, ", arr[i]);
//	return 0;
//}