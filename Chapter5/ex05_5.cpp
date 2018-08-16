#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string; using std::cout; using std::endl; using std::cin;

int main()
{
  vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
  cout<<"Please type your grade here('-1' to quit): \n";
  for (int g; cin >> g;)
    {
      if (g == -1){break;}
      string letter;
      if (g < 60)
        {
          letter = scores[0];
        }
      else
        {
          letter = scores[(g - 50) / 10];
          if (g != 100)
            letter += g % 10 > 7 ? "+" : g % 10 < 3 ? "-" : "";
        }
      cout << letter << endl;
      cout<<"Please type your grade here('-1' to quit): \n";
    }

  return 0;
}
