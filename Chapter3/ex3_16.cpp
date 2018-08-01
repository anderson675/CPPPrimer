#include <iostream>
#include <vector>
#include <string>

int main()
{
  using std::vector;
  using std::string;
  using std::cout;
  using std::endl;


  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  string vName;
  for (int j = 1; j < 6; j++ ){
    vName = 'v'+j;
    cout << " \"v5\":{\"size\":\"" << vName.size() << "\",\"value\":[";
    for (auto i : vName)
      cout << i << ",";
      if (!vName.empty()) cout << "\b";
      cout << "]}" << endl;
      cout << "==========" << endl;
  }

    return 0;
}
