//100 - 3n+1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  
  while(cin >> n >> m){ 
    int x = 0;
    int y = 0;
    
  for(int i = min(n,m); i <= max(n,m); i++){
    x = 0;
    int j = i;
    
    while(j > 1){
        
    if(j%2 == 1){
      j = (3*j) + 1;
    } 
    else{
      j = j/2;
      } 
      
    x++; 
      
    if(x>y){
      y=x;
      
    }}}
    
    cout << n << " " << m << " " << y+1 << endl;
    
  }}