#include <iostream>

int main()
{
    std::string str;
    std::cout<<"Please enter a string here, and the program will convert each letter to 's': \n";
    std::cin>>str;
    
      for (auto &c:str) {
        c = 's';
      }
    std::cout<<str<<std::endl;
    return 0;
}
