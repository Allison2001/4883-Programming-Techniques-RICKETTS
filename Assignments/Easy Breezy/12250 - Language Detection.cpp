#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // ifstream infile;
  // infile.open("in1");
  string word;
  int count = 1;
  cin >> word;

  while(word != "#"){
    if(word == "HELLO"){
      cout << "Case " << count << ": ENGLISH" << endl;
    } else if(word == "HOLA"){
      cout << "Case " << count << ": SPANISH" << endl;
    } else if(word == "HALLO"){
      cout << "Case " << count << ": GERMAN" << endl;
    } else if(word == "BONJOUR"){
      cout << "Case " << count << ": FRENCH" << endl;
    } else if(word == "CIAO"){
      cout << "Case " << count << ": ITALIAN" << endl;
    } else if(word == "ZDRAVSTVUJTE"){
      cout << "Case " << count << ": RUSSIAN" << endl;
    } else {
      cout << "Case " << count << ": UNKNOWN" << endl;
    }
    count++;
    cin >> word;
  }
  return 0;
}