////최대공약수, 최소공배수 구하는문제
//#pragma warning(disable:4996)
//#include <cstdio>
//
//int a, b;
//
//int cal_GCD(int a, int b) {
//	int result = 1;
//	int tmp = a < b ? a : b;
//	while (tmp <= a && tmp <= b) {
//		if (a % tmp == 0 && b % tmp == 0) {
//			result = tmp;
//			break;
//		} 
//		tmp--;
//	}
//	return result;
//}
//
//int cal_GCD_1(int a, int b) {
//	if (b == 0) return a;
//	else return cal_GCD_1(b, a % b);
//}
//
//int cal_LCM(int a, int b) {
//	int result = 1;
//	int tmp = a > b ? a : b;
//	while (tmp >= a && tmp >= b) {
//		if (tmp % a == 0 && tmp % b == 0) {
//			result = tmp;
//			break;
//		}	
//		tmp++;
//	}
//	return result;
//}
//
//int main() {
//	scanf("%d %d", &a, &b);
//	//printf("%d\n%d", cal_GCD(a,b), cal_LCM(a,b));
//	int gcd = cal_GCD_1(a, b);
//	printf("%d\n%d", gcd , a*b/gcd);
//	return 0;
//}