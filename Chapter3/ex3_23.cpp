#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;



int main()
{

    vector<int> myVec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(auto it = myVec.begin(); it != myVec.end();++it){
      *it *= 2;
    }
    for (auto i : myVec) cout << i << " ";
    cout<<endl;

    return 0;
}
