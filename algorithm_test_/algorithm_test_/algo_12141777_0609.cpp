//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct Star {
//    int i;
//    int j;
//    int k;
//};
//
//int map[101][101][101];
//int map_vis[101][101][101];
//int N, R;
//
//void BFS(queue<Star>& q, int r) {
//    while (!q.empty()) {
//        int z = q.front().i;
//        int y = q.front().j;
//        int x = q.front().k;
//        map_vis[z][y][x] = 1;
//        q.pop();
//        for (int dz = -r; dz <= r; dz++) 
//            for (int dy = -r; dy <= r; dy++) 
//                for (int dx = -r; dx <= r; dx++) {
//                    if (((z + dz) > 0 && (z + dz) <= N) && ((y + dy) > 0 && (y + dy) <= N) && ((x + dx) > 0 && (x + dx) <= N))
//						if (map_vis[z + dz][y + dy][x + dx] == 0 && map[z + dz][y + dy][x + dx] == 1) {
//                            map_vis[z + dz][y + dy][x + dx] = 1;
//                            Star a;
//                            a.i = z + dz;
//                            a.j = y + dy;
//                            a.k = x + dx;
//                            q.push(a);
//                        }
//                }
//    }
//}
//
//
//int main(void) {
//    queue<Star> q;
//    cin >> R >> N;
//    for (int i = 1; i <= N; i++) 
//        for (int j = 1; j <= N; j++) 
//            for (int k = 1; k <= N; k++) {
//                map_vis[i][j][k] = 0;
//                cin >> map[i][j][k];
//            }
//    int cnt = 0;
//    for (int i = 1; i <= N; i++) 
//        for (int j = 1; j <= N; j++) 
//            for (int k = 1; k <= N; k++) {
//                if (map[i][j][k] == 1 && map_vis[i][j][k] == 0) {
//                    cnt++;
//                    Star t;
//                    t.i = i; t.j = j; t.k = k;
//                    q.push(t);
//                    BFS(q, R);
//                }
//            }
//    cout << cnt << "\n";
//    return 0;
//}
