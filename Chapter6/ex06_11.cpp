#include <iostream>

using std::cin; using std::cout; using std::endl;

void reset(int &i){
  i = 0;
}

int main(){
  cout<<"Please input a num for reseting to 0: \n";
  for(int inputNum;cin>>inputNum;){
    reset(inputNum);
    cout<<inputNum<<endl;
    cout<<"please input a num for reseting to 0.(a char can terminate the program): \n";
  }

  return 0;
}
