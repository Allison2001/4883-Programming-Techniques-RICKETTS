#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // ifstream infile;
  // infile.open("in1");
  int Case, A, B;
  cin >> Case;

  while(Case--){
    cin >> A >> B;
    if(A > B){
      cout << ">" << endl;
    } else if(A < B){
      cout << "<" << endl;
    } else{
      cout << "=" << endl;
    }
  }
  return 0;
}