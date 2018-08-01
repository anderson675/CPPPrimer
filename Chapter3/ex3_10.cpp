#include <iostream>

int main()
{
    std::string str;
    std::cout<<"Please enter a string here, and the program will remove punctuation: \n";
    std::cin>>str;

      for (auto &c:str) {
        if (!isalpha(c)&&!isdigit(c)) {
          c = '\0';
        }
      }
    std::cout<<str<<std::endl;
    return 0;
}
