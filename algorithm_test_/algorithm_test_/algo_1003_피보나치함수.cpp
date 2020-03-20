//// √‚√≥ : https://www.acmicpc.net/problem/1003
//#pragma warning(disable : 4996)
//#include <cstdio>
//
//int t;
////int t_arr[41];
//int n_arr[41][2];
//
//int main() {
//    scanf("%d", &t);
//    n_arr[0][0] = 1;
//    n_arr[0][1] = 0;
//    n_arr[1][0] = 0;
//    n_arr[1][1] = 1;
//    for (int i = 0; i < t; i++) {
//        int tar = 0;
//        scanf("%d", &tar);
//        if (n_arr[tar][0] == 0 && n_arr[tar][1] == 0) {
//            for (int j = 2; j <= tar; j++) {
//                n_arr[j][0] = n_arr[j - 2][0] + n_arr[j - 1][0];
//                n_arr[j][1] = n_arr[j - 2][1] + n_arr[j - 1][1];
//            }
//        }
//        printf("%d %d\n", n_arr[tar][0], n_arr[tar][1]);
//    }
//	return 0;
//}
