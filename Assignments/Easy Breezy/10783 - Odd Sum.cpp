#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cin >> a;
    for(int i = 0; i < a; i++){

        cin >> b >> c;
        int sum = 0;
        for(int j = b; j <= c; j++){

            if(j%2){
              sum+=j;
              }
        }
        cout << "Case " << i+1 << ": " << sum << endl;
    }
    return 0;
}