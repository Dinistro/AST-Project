#include <iostream>
#include <vector>
#include <algorithm>

void testcase() {
  int n; std::cin >> n;
  std::vector<int> arr;
  arr.reserve(n);
  for (int i = 0; i < n; i++) {
    int a; std::cin >> a;
    arr.push_back(a);
  }
  int x; std::cin >> x;
  
  std::sort(arr.begin(), arr.end());
  if (x == 1) {
    std::reverse(arr.begin(), arr.end());
  } else {
    std::cout << 15 << std::endl;    	
  }
  
}

