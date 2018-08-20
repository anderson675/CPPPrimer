#include<iostream>

using std::cin; using std::cout; using std::endl;

void swap_pointer(int* &p1, int* &p2){
  auto temp = p1;
  p1 = p2;
  p2 = temp;
}

int main()
{
  int i = 42, j = 99;
  auto lft = &i;
  auto rht = &j;
  swap_pointer(lft, rht);
  std::cout << *lft << " " << *rht << std::endl;

  return 0;
}
