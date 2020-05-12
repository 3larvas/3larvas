//// √‚√≥ :  https://www.acmicpc.net/problem/1786
//#pragma warning (disable : 4996)
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//char text[1000001], pattern[1000001];
//int arr_next[1000001];
//int arr_list[1000001];
//
//void makeNext(char* p) {
//	int i, j = 0, M = strlen(p);
//	arr_next[0] = -1;
//	for (i = 0, j = -1; i < M; i++, j++) {
//		arr_next[i] = j;
//		//arr_next[i] = (p[i] == p[j]) ? arr_next[j] : j;
//		while ((j >= 0) && (p[i] != p[j]))
//			j = arr_next[j];
//	}
//}
//
//int KMP(char* p, char* t) {
//	int i, j, M = strlen(p), N = strlen(t);
//	makeNext(p);
//	for (i = 0, j = 0; j < M && i < N; i++, j++) {
//		while ((j >= 0) && (t[i] != p[j]))
//			j = arr_next[j];		
//	}
//	if (j == M) return i - M;
//	else return i;
//}
//
//int main() {
//	scanf("%[^\n]", text);
//	scanf("%s", pattern);
//	int M, N, pos, previous = 0, i = 0, cnt = 0;;
//	
//	M = strlen(pattern);
//	N = strlen(text);
//	while (true) {
//		pos = KMP(pattern, text + i);
//		pos += previous;
//		i = pos + M;
//		if (i <= N) {
//			arr_list[cnt] = pos+1;
//			cnt++;
//		} 
//		else break;
//		previous = i;
//	}
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++)
//		printf("%d\n", arr_list[i]);
//
//	return 0;
//}