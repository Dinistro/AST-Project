#include <vector>

int search(std::vector<int> arr, int e, int curr) {
 
  if(curr >= arr.size()) {
    return -1;
  }

  if(arr[curr] == e) {
    return curr;
  } else {
    return search(arr, e, curr+1);
  }
}
