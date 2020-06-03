//// https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AWXRJ8EKe48DFAUo&categoryId=AWXRJ8EKe48DFAUo&categoryType=CODE&&&
//
//#include <stdio.h>
//#include <queue>
//#define ARR_SIZE 400
//using namespace std;
//
//struct Cell {
//	int r, c, pwr, state=0, before_act, left_pwr;
//};
//struct Map_info {
//	int pwr, state=0, left_pwr;
//};
//struct cmp {
//	bool operator()(Cell a, Cell b) {
//		return a.pwr < b.pwr;
//	}
//};
//
//
//int T;
//int dir_r[4] = { 0, 0, 1, -1 };
//int dir_c[4] = { 1, -1, 0, 0 };
//Map_info map[ARR_SIZE * 2][ARR_SIZE * 2];
//priority_queue<Cell, vector<Cell>, cmp> pq;
//priority_queue<Cell, vector<Cell>, cmp> nxt_pq;
//
//int main() {
//	Map_info empty_map;
//	empty_map.pwr = 0;
//	empty_map.state = 0;
//	empty_map.left_pwr = 0;
//
//	scanf("%d", &T);
//	for (int t = 0; t < T; t++) {
//		
//		for (int i = 0; i < ARR_SIZE * 2 ; i++)
//			for (int j = 0; j < ARR_SIZE * 2 ; j++)
//				map[i][j] = empty_map;
//
//		int r = 0, c = 0, k = 0;
//		scanf("%d %d %d", &r, &c, &k);
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				int pwr = 0;
//				scanf("%d", &pwr);
//				if (pwr != 0) {
//					Cell cell;
//					cell.r = ARR_SIZE + i;
//					cell.c = ARR_SIZE + j;
//					cell.pwr = pwr;
//					cell.left_pwr = pwr;
//					cell.before_act = pwr;
//					cell.state = 0;
//					pq.push(cell);
//					map[cell.r][cell.c].pwr = cell.pwr;
//					map[cell.r][cell.c].state = cell.state;
//				}
//			}
//		}
//		Cell step_cell;
//		step_cell.pwr = -1;
//		pq.push(step_cell);
//		int cnt = 0;
//		while (!pq.empty()) {
//			Cell cur_cell = pq.top();
//			pq.pop();
//			if (cur_cell.pwr == -1) {
//				cnt++;
//				if (k == cnt) {
//					printf("#%d %d\n",t+1, nxt_pq.size());	
//					while (!nxt_pq.empty()) nxt_pq.pop();
//					while (!pq.empty()) pq.pop();
//					
//					break;
//				}
//				/*for (int i = ARR_SIZE - 10; i < ARR_SIZE + 10; i++) {
//					for (int j = ARR_SIZE - 10; j < ARR_SIZE + 10; j++) {
//						printf("(%d %d)", map[i][j].pwr, map[i][j].state);
//					}
//					printf("\n");
//				}
//				printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");*/
//				while (!nxt_pq.empty()) {
//					pq.push(nxt_pq.top());
//					nxt_pq.pop();
//				}
//				pq.push(step_cell);
//				continue;
//			}
//			if (cur_cell.state == 0) {
//				cur_cell.before_act -= 1;
//				if (cur_cell.before_act == 0) {
//					cur_cell.state = 1;
//					map[cur_cell.r][cur_cell.c].state = 1;
//				}
//				nxt_pq.push(cur_cell);
//			}
//			else if (cur_cell.state == 1) {
//				if (cur_cell.pwr == cur_cell.left_pwr) {
//					for (int i = 0; i < 4; i++) {
//						int nxt_r = cur_cell.r + dir_r[i];
//						int nxt_c = cur_cell.c + dir_c[i];
//						if (map[nxt_r][nxt_c].pwr == 0) {
//							map[nxt_r][nxt_c].pwr = cur_cell.pwr;
//							map[nxt_r][nxt_c].left_pwr = cur_cell.left_pwr;
//							map[nxt_r][nxt_c].state = 0;
//							Cell new_cell;
//							new_cell.r = nxt_r;
//							new_cell.c = nxt_c;
//							new_cell.pwr = cur_cell.pwr;
//							new_cell.left_pwr = cur_cell.pwr;
//							new_cell.before_act = cur_cell.pwr;
//							nxt_pq.push(new_cell);
//						}
//					}
//				}
//				cur_cell.left_pwr -= 1;
//				if (cur_cell.left_pwr == 0) {
//					map[cur_cell.r][cur_cell.c].state = 2;
//					continue;
//				}
//				nxt_pq.push(cur_cell);	
//			}
//		}
//		
//	}
//	
//	return 0;
//}