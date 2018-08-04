#include <iostream>
#include <vector>

using std::string; using std::vector; using std::cout; using std::cin; using std::endl;

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,0};

  vector<int> myVector(std::begin(arr), std::end(arr));

  for(auto i:myVector) cout<<i<<" ";

  cout<<endl;

  return 0;
}
