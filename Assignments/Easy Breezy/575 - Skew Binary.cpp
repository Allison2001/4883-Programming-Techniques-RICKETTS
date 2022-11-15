#include <bits/stdc++.h>
using namespace std;

int main() {
  // fstream infile;
  // infile.open("in1");
  
  long long int value, n, m;
  string input;

  while(cin >> input){
    if(input[0] == '0'){break;}
    
      value = 0;
      n = 2;
    
      for(int i = input.size()-1; i >= 0; i--){
        m = input[i] - '0';
        value += m * n - m;
        n *= 2;
      }
    cout << value << endl;
  }
    return 0;
}