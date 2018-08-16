#include <iostream>
#include  <string>

int main(){
  using std::cout;
  using std::string;

  int i;
  double d;
  const string *ps;
  char *pc;
  void *pv;

  //(a) pv = (void*)ps;
  pv = const_cast<string*>(ps);

  //(b) i = int(*pc);
  i = static_cast<int>(*pc);

  //(c) pv = &d;
  pv = static_cast<void*>(&d);

  //(d) pc = (char*) pv;
  pc = static_cast<char*>(pv);

  return 0;

}
