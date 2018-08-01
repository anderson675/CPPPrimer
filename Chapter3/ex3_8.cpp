#include <iostream>

int main()
{
    std::string str;
    std::cout<<"Please enter a string here, and the program will convert each letter to 's': \n";
    std::cin>>str;

    decltype(str.size()) i = 0;
    while (i<str.size()) {
      str[i] = 'x';
      i++;
    }
    std::cout<<str<<std::endl;
      for (auto &c:str) {
        c = 'y';
      }
    std::cout<<str<<std::endl;
    return 0;
}
