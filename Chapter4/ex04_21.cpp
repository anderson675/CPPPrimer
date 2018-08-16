#include <iostream>
#include <vector>

int main(){
  std::vector<int> myVec{1,2,3,4,5,6,7,8,9,10};

  for(auto& i:myVec){
    i = (i%2)?(i*2):i;
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;

  return 0;
} 
