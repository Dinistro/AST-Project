#include <vector>

int isSorted(std::vector<int> arr) {

  if(arr.size() == 0) {
    return 1;
  } else {
    int last = arr[0];
    for(int i = 0; i < arr.size(); i++) {
      if(arr[i] < last) {
         return 0;
      }
      last = arr[i];     
    }
    return 1;
  }
}
