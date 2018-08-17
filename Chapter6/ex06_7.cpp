#include <iostream>

using std::cin; using std::cout; using std::endl;

int juri(){
  static int i;
  i++;
  return i;
}

int main(){
  int times;
  cout<<"please say how many times you want to call Juri: \n";
  cin>>times;
  for(int i = 0;i < times;i++){
    cout<<"Juri: you call me for "<<juri()<<" times!"<<endl;
  }
  return 0;
}
