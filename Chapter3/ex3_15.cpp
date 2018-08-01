#include <iostream>
#include <vector>

int main()
{
    std::cout<<"Please enter string here, and the program will save them in a vector: \n";

    std::vector<std::string> vec;
    for (std::string i; std::cin >> i; vec.push_back(i))
    printf("========%lu=========\n",vec.size());
    for(int j = 0; j < vec.size();j++){
      std::cout<<vec[j]<<", ";
    }
    std::cout<<std::endl;
    return 0;
}
