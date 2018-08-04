
#include <vector>
#include <iostream>

const int array_size = 10;

using std::vector; using std::cout; using std::cin; using std::endl;

int main()
{

  int myArray[array_size];
  for (int i =0; i < array_size; i++){
    myArray[i] = i + 1;
    cout<<myArray[i]<<" ";
  }
  cout<<endl;

    return 0;
}
