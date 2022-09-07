//Allison Ricketts
//4883-Programming-Techniques
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  string tree;
  map<string, double> treeCount;
  double total = 0;

  ifstream infile;
  infile.open("in1");
  infile >> T;
  infile.tie(0);
  infile.ignore();
  infile.ignore();

  while(T--){
    
    getline(infile, tree);
    while(getline(infile, tree) && tree.length()) ++treeCount[tree], ++total;
    for(auto it = treeCount.begin(); it != treeCount.end(); ++it)
      cout << it->first << " "  << it->second/total*100 << endl;
    
  } return 0;
}