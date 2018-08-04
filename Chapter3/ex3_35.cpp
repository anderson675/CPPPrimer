
#include <vector>
#include <iostream>

const int array_size = 10;

using std::vector; using std::cout; using std::cin; using std::endl;

int main()
{
  int myArray[array_size];

  for(int j = 0; j < array_size; j++){
    myArray[j] = j + 1;
    cout<<myArray[j]<<" ";
  }
  cout<<endl;

  for(int i = 0; i < array_size; i++){
    myArray[i] = 0;
    cout<<myArray[i]<<" ";
  }
  cout<<endl;

    return 0;
}
