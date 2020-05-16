//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
//#pragma warning(disable:4996)
//#define MAX 500
//#define txt_num 128 // 아스키 코드 문자 갯수
//
//typedef struct HT_node{
//	char txt;
//	int freq;
//	struct HT_node* left;
//	struct HT_node* right;
//}HT_node;
//
//HT_node node_arr[txt_num] = { NULL };
//int idx = 0;
//
//HT_node* makeNode(char txt, int freq, struct HT_node* left, struct HT_node* right){
//	HT_node* new_node = (HT_node*)malloc(sizeof(HT_node));
//	new_node->txt = txt;
//	new_node->freq = freq;
//	new_node->left = left;
//	new_node->right = right;
//	return new_node;
//}
//
///*--------------------------------------------------
//허프만 코드 트리 생성 함수
//--------------------------------------------------*/
//HT_node* makeHuffmanTree(char arr[]){
//	int i = 0, j = 0;
//	int min1_idx = 0;					 // 제일 빈도수가 작은 index
//	int min2_idx = 0;					 // 두 번째로 빈도수가 작은 index
//	int arr_fre[txt_num] = { 0 };		 // 알파벳 빈도 수
//	int arr_check[txt_num] = { 0 };		 // 합쳐졌는지 확인(합쳐져서 살펴 볼 필요가 없으면 -1)
//	HT_node* tree[txt_num] = { NULL };   // 비교할 노드 배열
//	HT_node* new_node;					 // 새 노드
//	// 해당 아스키코드 값에 빈도수 저장
//	while (arr[i] != NULL)	{
//		arr_fre[arr[i]]++;
//		i++;
//	}
//	// 아스키값에 빈도수가 저장되어있을 경우
//	for (int i = 0; i < txt_num; i++){		
//		if (arr_fre[i] != 0){
//			node_arr[idx] = *makeNode(i, arr_fre[i], NULL, NULL);
//			tree[idx++] = makeNode(i, arr_fre[i], NULL, NULL); //노드 생성
//		}
//	}
//
//	for (i = 0; i < idx - 1; i++){
//		j = 0;
//		while (arr_check[j] == -1)	// arr_check[j] = -1 인값은 이미 합쳐졌다는 의미
//			j++;					
//		min1_idx = j; 
//		for (j = min1_idx; j < idx - 1; j++)
//			if (arr_check[j] != -1)
//				if (tree[min1_idx]->freq > tree[j]->freq)
//					min1_idx = j;
//
//		//두번째로 작은 수 찾기
//		j = 0;
//		while (arr_check[j] == -1 || j == min1_idx)
//			j++;
//		
//		min2_idx = j;  //두번째로 작다고 가정
//		for (j = min2_idx; j < idx; j++)
//			if (arr_check[j] != -1) //이미 합쳐진 노드가 아니면
//				if (tree[min2_idx]->freq > tree[j]->freq)
//					//min2 인덱스 빈도수 보다 빈도수가 작은 경우
//					if (j != min1_idx) //가장 작은 index가 아닌 경우
//						min2_idx = j;
//
//		tree[min1_idx] = makeNode(NULL, tree[min1_idx]->freq + tree[min2_idx]->freq, tree[min1_idx], tree[min2_idx]);
//		arr_check[min2_idx] = -1;
//
//	}
//	return tree[min1_idx];
//}
///*-------------------------------------------
//알파벳 별 가변길이 코드 배열 생성
// : 빈도수가 큰 문자에 짧은 비트가 부여된다.
//--------------------------------------------*/
//void makeTable(HT_node* n, char str[], int len, char* table[]){
//	if (n->left == NULL && n->right == NULL){ //n이 단노드인 경우
//		str[len] = '\0'; 
//		strcpy(table[(n->txt)], str);
//	}
//	else{ //단 노드가 아닌 경우	
//		if (n->left != NULL){ //왼쪽 자식이 있는 경우
//			str[len] = '0';
//			makeTable(n->left, str, len + 1, table);
//		}
//		if (n->right != NULL){ //오른쪽 자식이 있는 경우
//			str[len] = '1';
//			makeTable(n->right, str, len + 1, table);
//		}
//	}
//}
//
////디코드함수(디코딩 하고 싶은 문자열, 트리 루트 노드)
//void decode(char* str, HT_node* root){
//	int i = 0;
//	HT_node* j = root;
//	while (str[i] != '\0'){
//		if (str[i] == '0')		//문자가 0인 경우
//			j = j->left;		//왼쪽 자식으로 이동
//		else if (str[i] == '1') //문자가 1인 경우
//			j = j->right;		//오른쪽 자식으로 이동
//		if (j->left == NULL && j->right == NULL){
//			printf("%c", j->txt);
//			j = root;
//		}
//		i++;
//	}
//	printf("\n");
//}
//
////메인 함수
//int main(){
//	time_t start, end;
//	double result_t=0.0;
//	char arr[MAX]; 
//	char* code[txt_num];	 // 가변길이 코드 배열
//	char str[MAX];			 // 문자열 변수
//	char encoding[MAX] = ""; // 인코딩해서 나온 이진수 배열
//	int i;					 // 입력받은 문자열의 길이
//	HT_node* root;			 // 트리의 루트
//	int result = 0;
//
//	for (i = 0; i < txt_num; i++)
//		code[i] = (char*)malloc(sizeof(char));
//	scanf("%s", arr);
//	start = time(NULL);
//	root = makeHuffmanTree(arr);  
//	makeTable(root, str, 0, code);
//
//	i = 0;
//	while (arr[i] != NULL) { //문자열이 끝날때까지
//		strcat(encoding, code[arr[i]]);
//		strcat(encoding, " ");
//		result += strlen(code[arr[i]]);
//		i++;
//	}
//
//	for (i = 0; i < idx; i++)
//		printf("%c : %s\n", node_arr[i].txt, code[node_arr[i].txt]);
//
//	printf("압축 결과 : %s\n", encoding); //인코딩 한 이진수 배열 출력
//	printf("result : %d \n", result);
//	end = time(NULL); // 시간 측정 끝
//	result = (double)(end - start);
//	printf("%f", result_t); //결과 출력
//	return 0;
//}