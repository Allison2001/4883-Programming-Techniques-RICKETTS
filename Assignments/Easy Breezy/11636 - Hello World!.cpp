#include <iostream>
using namespace std;

int main() {
  
  int n, a = 1;

  while(cin >> n and n > 0){
    int num =1, count = 0;

    while(num < n){
      num += num;
      count++;
    }
    cout << "Case " << a++ << ": " << count << endl;
  }
}