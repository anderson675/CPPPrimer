
#include <vector>
#include <iostream>

const int array_size = 10;

using std::vector; using std::cout; using std::cin; using std::endl;

int main()
{

  int myArray[array_size];
  int myArray2[array_size];
  for (int i =0; i < array_size; i++){
    myArray[i] = i + 1;
    myArray2[i] = myArray[i];
  }

  vector<int> v1(10);
  for (int i = 0; i != 10; ++i) v1[i] = myArray2[i];
  vector<int> v2(v1);
  for (auto i : v2) cout << i << " ";
  cout << endl;
    return 0;
}
