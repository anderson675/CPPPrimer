#include <iostream>
#include <string>
#include <cstring>

const char cstr1[]="Hello";
const char cstr2[]="world!";
using std::string; using std::vector; using std::cout; using std::cin; using std::endl;


int main()
{
  constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) +1;
  char cstr3[new_size];

  strcpy(cstr3, cstr1);
  strcat(cstr3, " ");
  strcat(cstr3, cstr2);

  cout << cstr3 << endl;
}
