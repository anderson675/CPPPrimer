#include <iostream>

int main(){

  std::string buffer;

  for(std::string temp; std::cin>>temp; buffer+=temp){
    std::cout<<"Current string buffer is: "<<buffer<<std::endl;
  }
  return 0;

}
