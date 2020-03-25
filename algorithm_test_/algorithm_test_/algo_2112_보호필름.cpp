//// √‚√≥ : https://swexpertacademy.com/main/code/problem/problemdetail.do?contestprobid=av5v1sykaaudfawu&
//#pragma warning(disable : 4996)
//#include <cstdio>
//
//int test_case;
//int map[13][20];
//int layer_arr[13];
//int layer_vis[13];
//int layer_idx;
//int d, w, k;
//bool chk;
//
//bool check() {
//	for (int i = 0; i < w; i++) {
//		int cnt = 0;
//		for (int j = 0; j < d - 1; j++) {
//			if (map[j][i] == map[j + 1][i]) cnt++;
//			else cnt = 0;
//			if (cnt == k - 1) break;
//		}
//		if (cnt != k - 1) return false;
//	}
//	return true;
//}
//
//void change(int idx) {
//	for (int i = idx; i < layer_idx; i++) {
//		bool layer_tmp[20] = { 0, };
//		for (int j = 0; j < w; j++) layer_tmp[j] = map[layer_arr[i]][j];
//		for (int j = 0; j < w; j++) map[layer_arr[i]][j] = 1;
//		change(i + 1);
//		if (chk) return;
//		if (check()) {
//			printf("%d\n", layer_idx);
//			chk = true;
//			return;
//		}
//		for (int j = 0; j < w; j++) map[layer_arr[i]][j] = 0;
//		change(i + 1);
//		if (chk) return;
//		if (check()) {
//			printf("%d\n", layer_idx);
//			chk = true;
//			return;
//		}
//		for (int j = 0; j < w; j++) map[layer_arr[i]][j] = layer_tmp[j];
//	}
//}
//
//void dfs(int idx, int cnt) {
//	if (layer_idx == cnt) {
//		change(0);
//		return;
//	}
//	for (int i = idx; i < d; i++) {
//		layer_arr[layer_idx] = i;
//		layer_idx++;
//		dfs(i + 1, cnt);
//		layer_idx--;
//		layer_arr[layer_idx] = i;
//		if (chk) return;
//	}
//}
//
//int main() {
//	scanf("%d", &test_case);
//	for (int t = 0; t < test_case; t++) {
//		chk = false;
//		scanf("%d %d %d", &d, &w, &k);
//		for (int i = 0; i < d; i++) {
//			for (int j = 0; j < w; j++)
//				scanf("%d", &map[i][j]);
//		}
//		printf("#%d ", t + 1);
//		if (k == 1 || check()) {
//			printf("0\n");
//			continue;
//		}
//		for (int i = 1; i < k; i++) {
//			dfs(0, i);
//			if (chk) break;
//		}
//		if (chk) continue;
//		printf("%d\n", k);
//	}
//	return 0;
//}
