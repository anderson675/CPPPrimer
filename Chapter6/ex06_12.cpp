#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;

void swap(int &lhs,int &rhs){
  int temp = lhs;
  lhs = rhs;
  rhs = temp;
}

int main(){
  cout<<"please input two num in sequence and the program will swap them: \n";
  for(int r,l;cin>>l>>r;){
    swap(l,r);
    cout<<"#1 is "<<l<<endl;
    cout<<"#2 is "<<r<<endl;
    cout<<"please input two num in sequence and the program will swap them: \n";
  }
  return 0;
}
