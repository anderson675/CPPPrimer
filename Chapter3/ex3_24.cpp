#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::cin;

int main()
{
    vector<int> v;
    std::cout<<"The program will allow you to save 10 int number, and print the sum of each two: \n";

    for (int buffer; v.size()<10&&cin >> buffer; v.push_back(buffer)){
      std::cout<<"<"<<v.size()+2<<">. ";
    }

    for (auto it = v.cbegin(); it + 1 != v.cend(); ++it){
      cout << *it + *(it + 1) << " ";
    }
    cout << endl;

    for (auto lft = v.cbegin(), rht = v.cend() - 1; lft <= rht; ++lft, --rht)
        cout << *lft + *rht << " ";
    cout << endl;
    
    return 0;
  }
