#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);

int main() {
   // ifstream infile;
   // infile.open("in1");
  int Cases;
  double length, width, radius;
  cin >> Cases;

  while(Cases--){
    cin >> length;
    radius = length/5;
    width = (length*6)/10;
    double circleArea = PI * radius * radius;
    double rectangleArea = (length * width) - circleArea;
    cout << circleArea << "  " << rectangleArea << endl;
  }
  return 0;
}