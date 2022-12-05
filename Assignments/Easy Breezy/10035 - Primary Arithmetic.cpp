#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long a , b, ans;
  int carry;
  //vector <int> A, B;

  //fstream infile;
  //infile.open("in1");

  while(1){
    cin >> a >> b;
    if(a == 0 and b == 0) break;
    ans = 0;
    carry = 0;
    while(a > 0 || b > 0){
      int A = a%10;
      int B = b%10;
      carry = (A + B + carry)/10;
      a/=10;
      b/=10;

      if(carry){
        ans++;
      }
    
    }
      if(ans == 0){
        cout << "No carry operation." << endl;
      } else if (ans == 1){
        cout << "1 carry operation." << endl;
      } else {
        cout << ans << " carry operations." << endl;
      }
  }
  return 0;
} 