//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int next_arr[50];
//
//struct text_info {
//	char txt[10];
//	int	 pos;
//	int  seq;
//};
//vector<text_info> text_vec;
//// next �迭 ����
//void Initnext_arr(char* p){
//	int i, j = 0, M = strlen(p);
//	next_arr[0] = -1;
//	for (i = 0, j = -1; i < M; i++, j++) {
//		// ������ ������� next �迭 ����
//		next_arr[i] = (p[i] == p[j]) ? next_arr[j] : j;
//		while ((j >= 0) && (p[i] != p[j]))
//			j = next_arr[j];
//	}
//}
////next �迭�� ����Ͽ� text�� pattern ��
//int KMP(char *p, char *t){
//	int i, j, M = strlen(p), N = strlen(t);
//	Initnext_arr(p);
//	for (i = 0, j = 0; j < M && i < N; i++, j++)
//		while ((j >= 0) && (t[i] != p[j])) j = next_arr[j];
//	if (j == M) return i - M;
//	else return i;
//}
//// sort�Լ� ���ı���
//bool compare(text_info a, text_info b) {
//	// stable�ϰ� ����� ���� seq ��
//	if (a.pos == b.pos) {
//		if (a.seq < b.seq) 
//			return a.pos < b.pos;
//		else
//			return a.pos > b.pos;
//	}
//	else
//		return a.pos < b.pos;
//}
//
//int main(){
//	char pattern[10] = "";
//	cin >> pattern;
//	int cnt = 0;
//	while (true) {
//		int M, N, pos, previous = 0, i = 0;
//		char text[10] = "";
//		cin >> text;
//		if (!strcmp(text, "0"))
//			break;
//		M = strlen(pattern); 
//		N = strlen(text);
//		//text�� ���ϰ� ��ġ�ϴ� ���� ã�������� �ݺ�
//		while (true) {
//			// pos : ������ ���� ������ ��ġ
//			pos = KMP(pattern, text + i);
//			pos += previous;
//			i = pos + M;
//			// text���� ������ �߰ߵ� ��ġ
//			if (i <= N) {
//				text_info tmp;
//				strcpy(tmp.txt, text);
//				tmp.pos = pos;
//				tmp.seq = cnt;
//				text_vec.push_back(tmp);
//			}
//			// text���� ������ ã�� ���Ѱ��
//			if (i > N) {
//				text_info tmp;
//				strcpy(tmp.txt, text);
//				tmp.pos = 10+cnt;
//				tmp.seq = cnt;
//				text_vec.push_back(tmp);
//				break;
//			}
//			else break;
//			previous = i;
//		}
//		cnt++;
//	}
//	// text_vec ���� ����
//	sort(text_vec.begin(), text_vec.end(), compare);
//	for (int i = 0; i < text_vec.size(); i++)
//		cout << text_vec.at(i).txt << endl;
//	return 0;
//}
