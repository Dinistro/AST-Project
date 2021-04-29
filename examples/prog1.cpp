#include <vector>


int binarySearch(std::vector<int> arr, int e, int low, int high) {
  int middle = (high + low)/2;
  if(arr[middle] == e) {
    return middle;
  }

  if(arr[middle] < e) {
    return binarySearch(arr, e, low, middle-1);
  } else {
    return binarySearch(arr, e, middle+1, high);
  }
}
