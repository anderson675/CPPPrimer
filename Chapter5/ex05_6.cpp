#include <iostream>
#include <vector>
#include <string>
using std::vector; using std::string; using std::cout; using std::endl; using std::cin;

int main()
{
  cout<<"Please type your grade here('-1' to quit): \n";
  for (int g; cin >> g;)
    {
      if (g == -1){break;}
      string letter;

      (g < 60)?cout<<"F"
        :(60<=g<70)?cout<<"D":
                           (70<=g<80)?cout<<"C":
                                           (80<=g<90)?cout<<"B":
                                                            (90<=g<95)?cout<<"A":
                                                                             (g > 95)?cout<<"A++":cout<<"Invalid grade";
                                                                                                        cout<<endl;
     cout<<"Please type your grade here('-1' to quit): \n";
    }

  return 0;
}
