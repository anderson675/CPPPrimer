#include <iostream>

using std::cin; using std::cout; using std::endl;

int largerOne(const int num,const int* pNum){
  if(num == *pNum) cout<<"Ther are equal\n";
  return (num > *pNum)?num:*pNum;
}

int main(){
  int i = 6;
  cout<<largerOne(i,&i);

  return 0;
}
