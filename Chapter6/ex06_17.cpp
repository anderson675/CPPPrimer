#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

bool CapCheck(string const& s){
  for(auto ch:s){
    if(isupper(ch)){
      return true;}
    return false;
    }
}

void UtoL (string& str){
  for(auto& ch:str){
    ch = tolower(ch);
  }
}

int main(){
  cout<<"Please type in a string and the program will detect the Cap letter then converting them to lower: \n";
  for(string userInput; cin>>userInput;){
    cout << CapCheck(userInput) << endl;

    UtoL(userInput);
    cout << userInput << endl;

  }
  return 0;
}
   
