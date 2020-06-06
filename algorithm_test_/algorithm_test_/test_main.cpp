//#pragma warning (disable : 4996)
//#include <stdio.h>
//using namespace std;
//int arr[10];
//char input[10];
//
//int main() {
//	scanf("%s", input);
//	for (int i = 0; i < 10; i++) {
//		arr[i] = (int)input[i];
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//Node* top = NULL;
//
//void push(int data) {
//    Node* node = new Node();
//    node->data = data;
//    node->next = top;
//    top = node;
//}
//
//void Top() {
//    if (top != NULL) {
//        cout << "top : " << top->data;
//    }
//    else {
//        cout << "top is NULL";
//    }
//    cout << endl;
//}
//
//void pop() {
//    if (top == NULL) {
//        cout << "stack underflow" << endl;
//    }
//    else {
//        cout << "pop : " << top->data << endl;
//        top = top->next;
//    }
//}
//
//void display() {
//    Node* ptr;
//    if (top == NULL) {
//        cout << "stack is empty";
//    }
//    else {
//        ptr = top;
//        cout << "stack element : ";
//        while (ptr != NULL) {
//            cout << ptr->data << " ";
//            ptr = ptr->next;
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//
//    display();
//    Top();
//
//    push(1);
//    push(2);
//    push(3);
//
//    display();
//    Top();
//
//    pop();
//    pop();
//
//    display();
//    Top();
//
//    push(5);
//
//    display();
//    Top();
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////
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
//
//////////////////////////
//#pragma warning (disable : 4996)
//#include <stdio.h>
//using namespace std;
//int arr[10] = {6, 4, 5, 3, 2, 8, 9, 7, 1, 10};
//
//int main() {
//	for (int i = 1; i < 10; i++) {
//		int idx = i - 1;
//		while (idx >= 0 && arr[idx] > arr[idx + 1]) {
//			int tmp = arr[idx];
//			arr[idx] = arr[idx+1];
//			arr[idx+1] = tmp;
//			idx--;
//		}
//	}
//	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
//	return 0;
//
//
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <string>
//#include <stack>
//#include <iostream>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	stack<char> stk;
//	for (int i = 0; i < str.size(); i++) stk.push(str.at(i));
//	int size = str.size();
//	for (int i = 0; i < size; i++) {
//		printf("%c", stk.top());
//		stk.pop();
//	}
//	return 0;
//}
//
////////////////////////////////////////////////
//
//#pragma warning (disable : 4996)
//#include <stdio.h>
//#include <string>
//#include <stack>
//#include <iostream>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	int size = str.size();
//	for (int i = 0; i < size; i++) {
//		cout << (int)str.at(i) << " ";
//	}
//	return 0;
//}
//
//#pragma warning (disable : 4996)
//#include <stdio.h>
//using namespace std;
//struct Node {
//	Node* next;
//	int data;
//};
//Node* front = NULL;
//
//void push(int input) {
//	Node* node = new Node();
//	node->data = input;
//	node->next = front;
//	front = node;
//}
//
//void pop() {
//	front = front->next;
//}
//
//int main() {
//	
//	return 0;
//}

//
//
//#include <iostream>
//#define INF 987654321
//using namespace std;
//struct Node {
//    int data;
//    Node* next;
//};
//
//struct LinkedQueue {
//    Node* front, * rear;
//    int len = 0;
//    LinkedQueue() {
//        front = rear = NULL;
//    }
//    int size() {
//        return len;
//    }
//
//    bool isEmpty() {
//        return len == 0;
//    }
//
//    void enqueue(int data) {
//        Node* node = (Node*)malloc(sizeof(Node));
//        node->data = data;
//        node->next = NULL;
//        if (isEmpty()) {
//            front = rear = node;
//        }
//        else {
//            rear->next = node;
//            rear = rear->next;
//        }
//        len++;
//    }
//
//    int dequeue() {
//
//        if (isEmpty()) {
//            cout << "Q is empty" << endl;
//            return INF;
//        }
//
//        Node* delNode = front;
//        int ret = delNode->data;
//        front = delNode->next;
//        free(delNode);
//        len--;
//        return ret;
//    }
//};
//
//int main() {
//
//    LinkedQueue q;
//    for (int i = 1; i <= 5; i++)
//        q.enqueue(i);
//
//    q.enqueue(10);
//
//    while (!q.isEmpty())
//        cout << q.dequeue() << endl;
//
//}