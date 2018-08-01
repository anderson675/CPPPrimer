#include <iostream>
#include <vector>

int main()
{
    std::cout<<"Please enter int here, and the program will save them in a vector: \n";
    std::cout<<"Press non-digitl key quit the program\n";

    std::vector<int> vec;
    for (int i; std::cin >> i; vec.push_back(i))
    printf("========%lu=========\n",vec.size());
    for(int j = 0; j < vec.size();j++){
      std::cout<<vec[j]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}
