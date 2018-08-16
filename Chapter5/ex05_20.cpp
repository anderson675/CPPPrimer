#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  string readInput, tmp;

  while(cin>>readInput){
    if(readInput == tmp) break; else tmp = readInput;
  }

  if (cin.eof())  cout << "no word was repeated." << endl;
  else            cout << readInput << " occurs twice in succession." << endl;

  return 0;
}
