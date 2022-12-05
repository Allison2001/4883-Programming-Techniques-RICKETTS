#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // fstream infile;
  // infile.open("in1");
  int highJump, lowJump, jumps, line;
  int num[50];

  cin >> jumps;

  for(int i = 0; i < jumps; i++){
    highJump = 0;
    lowJump = 0;
    cin >> line;
    for(int j = 0; j < line; j++){
      cin >> num[j];
      }
    for(int j = 0; j < line - 1; j++){
      if(num[j] < num[j+1]){
        highJump++;
      } else if(num[j] > num[j+1]){
        lowJump++;
      }
      }
    cout << "Case " << i + 1 << ": " << highJump << " " << lowJump << endl;
  }
  return 0;
}