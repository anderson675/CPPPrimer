#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){

  cout<<"please type a number in for its absolute value: \n";
  for(int userInput;cin>>userInput;){
    printf("The answer is %d \n",(userInput < 0)?(-1)*userInput:userInput);
    cout<<"please type a number in for its absolute value: \n";
  }
  return 0;
}
