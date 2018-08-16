#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
  vector<char> vowel = {'a','i','e','o','u'};

  cout<<"Please enter a word here, the program will calculate the amount of vowel: \n";
  for(string myInput; cin>>myInput;){
    int vowelNum = 0;

    if(!myInput.compare(",")){ return 0;}
    for(auto& a:myInput ){
      for(auto& i:vowel){

        if(a == i){
          printf("%c and %c",a,i);
          vowelNum++;}
      }

    } 
    cout<<"The word "<<myInput<<"has "<<vowelNum<<" vowels"<<endl;
    cout<<"Please enter a word here, the program will calculate the amount of vowel(',' to quit): \n";
  }
  return 0;
}
