#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
  int i1 = 0, i2 = 0;

  while(cin>>i1>>i2){
    if (i2 == 0)
      throw std::runtime_error("divisor is 0");
    cout << i1 / i2 << endl;
  }

  return 0;

}
