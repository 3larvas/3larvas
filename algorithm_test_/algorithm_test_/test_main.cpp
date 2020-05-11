//#include <stdio.h>
//#include <string.h>
//
//int next[50];
////
//
//void InitNext(char* p){
//	int i, j = 0, M = strlen(p);
//	next[0] = -1;
//	for (i = 0, j = -1; i < M; i++, j++) {
//		next[i] = j; //원래버전
//		//next[i] = (p[i] == p[j]) ? next[j] : j; //개선된버전
//		while ((j >= 0) && (p[i] != p[j]))
//			j = next[j];
//	}
//
//}
//
////
////int main()
////{
////	//char p[50] = "10100111";
////	char p[50] = "abababca";  //abababca
////
////	//char p[50] = "AABAA";
////	//char p[50] = "ABAABAB";
////	//char p[50] = "AAAAA";
////	//char p[50] = "abababca";
////	int i, M = strlen(p);
////	InitNext(p);
////	for (i = 0; i < M; i++)
////		printf("%d ", next[i]);
////	printf("\n");
////	return 0;
////}
//
//
//
//int KMP(char *p, char *t)
//{
//	int i, j, M = strlen(p), N = strlen(t);
//	InitNext(p);
//	for (i = 0, j = 0; j < M && i < N; i++, j++)
//		while ((j >= 0) && (t[i] != p[j])) j = next[j];
//	if (j == M) return i - M;
//	else return i;
//}
//
//int main()
//{
//	//char text[100] = "1001110100101000101001110";
//	//char pattern[50] = "10100111";
//
//
//	//char text[100] = "ababababcababababcaabbabababcaab";
//	//char pattern[50] = "abababca";
//
//	char text[100] = "AABAAbabcababAABAAaabbabAABAAaab";
//	char pattern[50] = 	"AABAA";
//	int M, N, pos, previous = 0, i = 0;
//
//	M = strlen(pattern); N = strlen(text);
//	while (1) {
//		pos = KMP(pattern, text + i);
//		pos += previous;
//		i = pos + M;
//		if (i <= N) printf("패턴이 발생한 위치 : %d\n", pos);
//		else break;
//		previous = i;
//	}
//	printf("스트링 탐색 종료.\n");
//	return 0;
//}
//
///*
//next[0] = -1;
//for (int i = 1; i<=M; i++)
//{
////if (p[i] == p[j]) next[i] = next[j];
//while (j > 0 && p[i] != p[j]) j = next[j];
//if (p[i] == p[j])
//{
//next[i + 1] = ++j;
////printf("%c, %c\n", p[i + 1], p[j]);
//if (p[i] == p[j]) next[i+1] = next[j-1];
//}
//}
//*/