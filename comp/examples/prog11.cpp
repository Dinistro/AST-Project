#include <iostream>
#include <vector>
#include <queue>

void dumpVector(std::vector<int> v) {
  for (auto it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}


void testcase() {
  int n; std::cin >> n;
  int m; std::cin >> m;
  int v; std::cin >> v;
  
  std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
  matrix.reserve(n*n);
  for(int i = 0; i < m; i++) {
    int a; std::cin >> a;
    int b; std::cin >> b;
    matrix[a][b] = 1;
    matrix[b][a] = 1;
  }
  
  std::queue<std::pair<int, int>> q;
  q.push(std::make_pair(-1, v));
  std::vector<int> distances(n, -1);
  std::vector<bool> visited(n, false);
  
  while(!q.empty()) {
    int curr = q.front().second;
    int distance = q.front().first+1;
    q.pop();
    
    if(visited[curr]) {
      continue;
    }
    visited[curr] = true;
    distances[curr] = distance;
    
    for(int i = 0; i < n; i++) {
      if(matrix[curr][i] == 1) {
        q.push(std::make_pair(distance, i));
      }
    }
    
  }  
  
  dumpVector(distances);

}

int main() {
  int t; std::cin >> t;
  for (int i = 0; i < t; i++) {
    testcase();
  }
}
