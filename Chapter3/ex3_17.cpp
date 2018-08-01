#include <iostream>
#include <vector>
#include <string>

int main()
{
  using std::vector;
  using std::string;
  using std::cin;
  using std::cout;
  using std::endl;

  vector<string> vec;

  cout<<"Please type a string below, the program will convert each character to uppercase, and print them in 8 per line:\n";
  for(string temp; cin>>temp; vec.push_back(temp)){
    cout<<"type 'ready!' if you are prepared to print your string!:\n";
    if(temp == "ready!"){break;}
  }

  for (auto& str : vec){
    for (auto& c : str) c = toupper(c);
  }
  printf("%lu\n", vec.size());
  cout<<vec[0]<<endl;
  // for (decltype(vec.size()) i = 0; i != vec.size(); ++i) {
  //     if (i != 0 && i % 8 == 0) cout << endl;
  //     cout << vec[i] << " ";
  // }
  // cout << endl;
    return 0;
}
