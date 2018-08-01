#include <iostream>

int main(){

  std::string str1;
  std::string str2;

  std::cout<<"Please enter your first string: \n";
  getline(std::cin,str1);
  std::cout<<"Please enter your second string: \n";
  getline(std::cin,str2);

  if(str1.size()==str2.size()){
    printf("The two strings are equal!\n");
  }else{
    std::cout<<"The longer string is "<< ((str1.size()>str2.size())?str1:str2)<<std::endl;
  }
  return 0;
}
