//Allison Ricketts
//9/15/22
//4883 Programming Techniques
//514 Rails
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // fstream infile;
  // infile.open("in1");
  
	int a, b; //track a, track b

  //while cin value for a
	while (cin >> a and a) {
    //while cin valie for b
		while (cin >> b and b) {
		
			bool works = true; //if works then true because then it works
      
			stack<int> train, station; //set up stack train and station
      
			for (int i = a; i > 0; --i) train.emplace(i); //insert new element to stack
      
			for (int i = 0; i < a; ++i) {
				if (i) cin >> b;

        //if station is not empty and station what is on top of stack is b
        //pop off b
				if (!station.empty() and station.top() == b) station.pop(); 
				else {
          //if train not empty and top if train does not = b
          //add value of train top to station then pop train
					while (!train.empty() and train.top() != b) station.emplace(train.top()), train.pop();
          //if train is empty then it does not work
					if (train.empty()) works = false;
          //else pop train
					else train.pop();
				}
			}
      //if it works then yes or doesn't work then it doesn't
			cout << (works ? "Yes\n" : "No\n");
		}
    
		cout << "\n";
	}
	return 0;
}
