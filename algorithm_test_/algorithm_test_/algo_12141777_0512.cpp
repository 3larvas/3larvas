#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#pragma warning(disable:4996)
#define MAX 500
#define txt_num 128 // �ƽ�Ű �ڵ� ���� ����

typedef struct HT_node {
	char txt;
	int freq;
	struct HT_node* left;
	struct HT_node* right;
}HT_node;

HT_node node_arr[txt_num] = { NULL };
int idx = 0;

HT_node* makeNode(char txt, int freq, struct HT_node* left, struct HT_node* right) {
	HT_node* new_node = (HT_node*)malloc(sizeof(HT_node));
	new_node->txt = txt;
	new_node->freq = freq;
	new_node->left = left;
	new_node->right = right;
	return new_node;
}

/*--------------------------------------------------
������ �ڵ� Ʈ�� ����
--------------------------------------------------*/
HT_node* makeHuffmanTree(char arr[]) {
	int i = 0, j = 0;
	int min1_idx = 0;					 
	int min2_idx = 0;					 
	int arr_fre[txt_num] = { 0 };		 // ���ĺ� �� �迭, �ƽ�Ű�ڵ� ���� index�� �迭�� ����ȴ�.
	int arr_check[txt_num] = { 0 };		 // ���������� Ȯ��
	HT_node* tree[txt_num] = { NULL };   // ���� ��� �迭
	HT_node* new_node;					 // �� ���
	// �ش� �ƽ�Ű�ڵ� ���� �󵵼� ����
	while (arr[i] != NULL) {
		arr_fre[arr[i]]++;
		i++;
	}
	// �ƽ�Ű���� �󵵼��� ����Ǿ����� ���
	for (int i = 0; i < txt_num; i++) {
		if (arr_fre[i] != 0) {
			node_arr[idx] = *makeNode(i, arr_fre[i], NULL, NULL);
			tree[idx++] = makeNode(i, arr_fre[i], NULL, NULL); //��� ����
		}
	}

	for (i = 0; i < idx - 1; i++) {
		j = 0;
		while (arr_check[j] == -1)	// arr_check[j] = -1 �ΰ��� �̹� �������ٴ� �ǹ�
			j++;
		min1_idx = j;
		for (j = min1_idx; j < idx - 1; j++)
			if (arr_check[j] != -1)
				if (tree[min1_idx]->freq > tree[j]->freq)
					min1_idx = j;

		//�ι�°�� ���� �� ã��
		j = 0;
		while (arr_check[j] == -1 || j == min1_idx)
			j++;

		min2_idx = j;  //�ι�°�� �۴ٰ� ����
		for (j = min2_idx; j < idx; j++)
			if (arr_check[j] != -1) //�̹� ������ ��尡 �ƴϸ�
				if (tree[min2_idx]->freq > tree[j]->freq)
					//min2 �ε��� �󵵼� ���� �󵵼��� ���� ���
					if (j != min1_idx) //���� ���� index�� �ƴ� ���
						min2_idx = j;

		tree[min1_idx] = makeNode(NULL, tree[min1_idx]->freq + tree[min2_idx]->freq, tree[min1_idx], tree[min2_idx]);
		arr_check[min2_idx] = -1;
	}
	return tree[min1_idx];
}
/*-------------------------------------------
�������� �ڵ� �迭 ����
 : �󵵼��� ū ���ڿ� ª�� ��Ʈ�� �ο��ȴ�.
--------------------------------------------*/
void makeTable(HT_node* n, char str[], int len, char* table[]) {
	if (n->left == NULL && n->right == NULL) { //n�� �ܳ���� ���
		str[len] = '\0';
		strcpy(table[(n->txt)], str);
	}
	else {
		if (n->left != NULL) {
			str[len] = '0';
			makeTable(n->left, str, len + 1, table);
		}
		if (n->right != NULL) { //������ �ڽ��� �ִ� ���
			str[len] = '1';
			makeTable(n->right, str, len + 1, table);
		}
	}
}

int main() {
	time_t start, end;
	double result_t = 0.0;
	char arr[MAX];
	char* code[txt_num];	 // �������� �ڵ� �迭
	char str[MAX];			 // ���ڿ� ����
	int i;					 // �Է¹��� ���ڿ��� ����
	HT_node* root;			 // Ʈ���� ��Ʈ
	int result = 0;

	for (i = 0; i < txt_num; i++)
		code[i] = (char*)malloc(sizeof(char));
	scanf("%s", arr);
	start = time(NULL);
	root = makeHuffmanTree(arr);
	makeTable(root, str, 0, code);

	i = 0;
	while (arr[i] != NULL) {
		// ��Ʈ ���̸�ŭ ������� ���ϱ�
		result += strlen(code[arr[i]]);
		i++;
	}

	printf("%d", result);
	return 0;
}