#include <iostream>

using std::cin; using std::cout; using std::endl;

int fact(unsigned int x){
  return (x>1)?x*fact(x-1):1;
}

int main(){
  cout<<"type a number you want to do the factorial calculating: \n";
  for(unsigned int userInput;cin>>userInput;){
    cout<<fact(userInput)<<endl;
    cout<<"type a number you want to do the factorial calculating: \n";
  }
  return 0;
}


