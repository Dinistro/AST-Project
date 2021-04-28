#include <vector>

int findMatch(int val, std::vector<int> &w) {
  int l = 0; int r = w.size()-1;
  int oldL = -1; int oldR = -1;
  
  while(l <= r && r < (int) w.size()) {
    oldL = l;
    oldR = r;
    int middle = (l+r) /2;
    
    if(w[middle] == val) return middle;
    
    if(w[middle] < val) {
      l = middle;
      if(oldL == l) {
        l++;
      }
    } else {
      r = middle;
      if(oldR == r) {
         r--;
      }
    }
  }
  return -1;
 
}
