#include <iostream>
#include <vector>
#include <stack>

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
  
  std::stack<std::pair<int, bool>> s;
  s.push(std::make_pair(v, false));
  std::vector<bool> visited(n, false);
  int time = 0;
  std::vector<int> discovery(n, -1);
  std::vector<int> finish(n, -1);
  
  while(!s.empty()) {
    std::pair<int, bool> curr_pair = s.top();
    s.pop();
    
    int curr = curr_pair.first;
    bool isReverse = curr_pair.second;
  
    
    if(!isReverse) {
      
      if(visited[curr]) {
        continue;
      }
      visited[curr] = true;
      discovery[curr] = time;
      time++;
    
      s.push(std::make_pair(curr, true));
      for(int i = n-1; i >= 0; i--) {
        if (curr == i) {
          continue;
        }
        if (matrix[curr][i] == 1 && !visited[i]) {
          s.push(std::make_pair(i, false));
        }
      }
    } else {
      finish[curr] = time;
      time++;
    }
    
    
  }
  
  dumpVector(discovery);
  dumpVector(finish);
  
}


int main() {
  int t; std::cin >> t;
  for (int i = 0; i < t; i++) {
    testcase();
  }
}
