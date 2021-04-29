#include <vector>


int isPalindrom(std::vector<int> arr, int next) {
  if(arr.size() < 2*next) {
    return 1;
  } 
  
  if(arr[next] == arr[arr.size()-next-1]) {
     return isPalindrom(arr, next+1);    
  } else {
     return 0;
  }

}
