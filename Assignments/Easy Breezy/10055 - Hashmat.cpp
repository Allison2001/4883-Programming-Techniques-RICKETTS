/**
* Allison Ricketts
* 4883 Prigramming Techniques
* 9/5/22
*/
#include <iostream>
#include <cmath>

#define endl "\n"

using namespace std;

int main() {
    long B = 0, A = 0;
  
    while (cin >> A >> B) {
        cout << max(A,B)-min(A,B) << "\n";
    }
  
    return 0;
}