#include <vector>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

const int array_size = 10;

using std::vector; using std::cout; using std::cin; using std::endl;

int main()
{
  int myArray1[array_size];
  int myArray2[array_size];
  vector<int> v1(10);
  vector<int> v2(10);

  /* initialize random seed: */
  srand (time(NULL));

  for(int j = 0; j < array_size; j++){
    myArray1[j] = rand() % 100;
    v1[j] = rand() % 100;
    myArray2[j] = rand() % 100;
    v2[j] = rand() % 100;
  }

  for(int i = 0; i < array_size; i++){
    cout<<"Round."<<i+1<<": \n\t";
    if (myArray1[i]>myArray2[i]) {
      cout<<"Array 1 wins! ("<<myArray1[i]<<":"<<myArray2[i]<<")\n";
    }else if(myArray1[i]<myArray2[i]){
      cout<<"Array 2 wins! ("<<myArray1[i]<<":"<<myArray2[i]<<")\n";
    }else{
      cout<<"Ther are equal! ("<<myArray1[i]<<":"<<myArray2[i]<<")\n";
    }
  }

    for(int i = 0; i < array_size; i++){
      v1[i]>v2[i]? cout<<"v1 wins!":cout<<"v2 wins!";
      cout<<"("<<v1[i]<<":"<<v2[i]<<")\n";
    }
  cout<<endl;

    return 0;
}
