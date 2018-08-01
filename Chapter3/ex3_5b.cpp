#include <iostream>

int main()
{
    std::string largeStr;
    std::string str;
    while (std::cin >> str) {
        if (largeStr.empty())
            largeStr += str;
        else
            largeStr += " " + str;
    }

    std::cout << "The concatenated string is " << largeStr << std::endl;

    return 0;
}
