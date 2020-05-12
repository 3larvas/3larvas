#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)
#define MAX 500
#define txt_num 128 // �ƽ�Ű �ڵ� ���� ����

//Ʈ�� ���
typedef struct HT_node{
	char txt;
	int freq;
	struct HT_node* left;
	struct HT_node* right;
}HT_node;

HT_node node_arr[txt_num] = { NULL };
int idx = 0;

HT_node* makeNode(char txt, int freq, struct HT_node* left, struct HT_node* right){
	HT_node* new_node = (HT_node*)malloc(sizeof(HT_node));
	new_node->txt = txt;
	new_node->freq = freq;
	new_node->left = left;
	new_node->right = right;
	return new_node;
}

/*--------------------------------------------------
������ �ڵ� Ʈ�� ���� �Լ�
--------------------------------------------------*/
HT_node* makeHuffmanTree(char arr[]){
	int i = 0, j = 0;
	int min1_idx = 0;					 //���� �󵵼��� ���� index
	int min2_idx = 0;					 //�� ��°�� �󵵼��� ���� index
	int arr_fre[txt_num] = { 0 };		 //���ĺ�(A~Z) �� ��
	int arr_check[txt_num] = { 0 };		 //���������� Ȯ��(�������� ���� �� �ʿ䰡 ������ -1)
	HT_node* tree[txt_num] = { NULL };   //���� ��� �迭
	HT_node* new_node;					 //�� ���
	// �ش� �ƽ�Ű�ڵ� ���� �󵵼� ����
	while (arr[i] != NULL)	{
		arr_fre[arr[i]]++;
		i++;
	}
	// �ƽ�Ű���� �󵵼��� ����Ǿ����� ���
	for (int i = 0; i < txt_num; i++){		
		if (arr_fre[i] != 0){
			node_arr[idx] = *makeNode(i, arr_fre[i], NULL, NULL);
			tree[idx++] = makeNode(i, arr_fre[i], NULL, NULL); //��� ����
		}
	}

	for (i = 0; i < idx - 1; i++){
		j = 0;
		// arr_check[j] = -1 �ΰ��� �̹� �������ٴ� �ǹ�
		while (arr_check[j] == -1)	
			j++; //������ ��带 ������ �迭 �� ���� �� index
		min1_idx = j; // ���� �۴ٰ� ����

		for (j = min1_idx; j < idx - 1; j++) //��� �迭�� �˻�
			if (arr_check[j] != -1) //�̹� ������ ��尡 �ƴϸ�(�˻��غ� �ʿ䰡 ������)
				if (tree[min1_idx]->freq > tree[j]->freq)
					//min�ε��� �󵵼� ���� �󵵼��� ���� ���
					min1_idx = j;

		//�ι�°�� ���� �� ã��
		j = 0;
		while (arr_check[j] == -1 || j == min1_idx)
			//������ ���� �ּ� ��� ������ �迭 �� ���� �� index
			j++;
		
		min2_idx = j;  //�ι�°�� �۴ٰ� ����

		for (j = min2_idx; j < idx; j++)
			if (arr_check[j] != -1) //�̹� ������ ��尡 �ƴϸ�
				if (tree[min2_idx]->freq > tree[j]->freq)
					//min2�ε��� �󵵼� ���� �󵵼��� ���� ���
					if (j != min1_idx) //���� ���� index�� �ƴ� ���
						min2_idx = j;

		tree[min1_idx] = makeNode(NULL, tree[min1_idx]->freq + tree[min2_idx]->freq, tree[min1_idx], tree[min2_idx]);
		//min�� min2�ε����� �󵵼��� ��ģ �󵵼��� �� ��� ����
		//���� ���� ��带 min�ε��� �ڸ��� �ִ´�.

		arr_check[min2_idx] = -1;
		//min2�ε����� min�ε��� �ڸ��� ��忡 ���������Ƿ� check[min2]<-=1
	}
	return tree[min1_idx]; //������� Ʈ���� ��Ʈ ��� ��ȯ
}
/*-------------------------------------------
���ĺ� �� �������� �ڵ� �迭 ����
 : �󵵼��� ū ���ڿ� ª�� ��Ʈ�� �ο��ȴ�.
--------------------------------------------*/
void makeTable(HT_node* n, char str[], int len, char* table[]){
	if (n->left == NULL && n->right == NULL){ //n�� �ܳ���� ���
		str[len] = '\0'; //������ ���� str���� �־��ְ�
						 //�� ����� ���ĺ��� Ȯ���Ͽ� table�� ������ ��ġ�� str���ڿ��� �ִ´�.
		strcpy(table[(n->txt)], str);
	}
	else{ //�� ��尡 �ƴ� ���	
		if (n->left != NULL){ //���� �ڽ��� �ִ� ���
			str[len] = '0'; //���ڿ��� 0 ����
			makeTable(n->left, str, len + 1, table);
			//���ȣ��(���ڿ��� �� ��ġ�� +1)
		}
		if (n->right != NULL){ //������ �ڽ��� �ִ� ���
			str[len] = '1'; //���ڿ��� 1 ����
			makeTable(n->right, str, len + 1, table);
			//���ȣ��(���ڿ��� �� ��ġ�� +1)
		}
	}
}

//���� �Լ�
int main(){
	char arr[MAX]; //�����ϰ��� �ϴ� ���ڿ�
	char* code[txt_num]; //�� ���ĺ��� ���� �������� �ڵ� �迭
	char str[MAX]; //���ڿ� ����
	char encoding[MAX] = ""; //���ڵ��ؼ� ���� ������ �迭
	int i; //�ݺ��� ����
	char answer; //���ڵ� ���ϴ°��� ���� ��� ����
	HT_node* root;//Ʈ���� ��Ʈ
	int result = 0;

	for (i = 0; i < txt_num; i++)
		code[i] = (char*)malloc(sizeof(char));
	printf("�����ϰ��� �ϴ� ���ڿ�(�빮��) : ");
	scanf("%s", arr); //�����ϰ��� �ϴ� ���ڿ� �Է�

	root = makeHuffmanTree(arr); //�������ڵ带 �̿��� Ʈ�� ����
	makeTable(root, str, 0, code); //Ʈ���� ����� ���ĺ� �� �������� �ڵ� ����

	i = 0;
	while (arr[i] != NULL) { //�Է¹��� ���ڿ��� ����������
		strcat(encoding, code[arr[i]]); //���ں� �ڵ� ���ڵ� ���ڿ� �ڿ� �ֱ�
		strcat(encoding, " ");
		result += strlen(code[arr[i]]);
		i++;
	}

	for (i = 0; i < idx; i++)
		printf("%c : %s\n", node_arr[i].txt, code[node_arr[i].txt]);

	printf("���� ��� : %s\n", encoding); //���ڵ� �� ������ �迭 ���
	printf("result : %d", result);
	return 0;
}