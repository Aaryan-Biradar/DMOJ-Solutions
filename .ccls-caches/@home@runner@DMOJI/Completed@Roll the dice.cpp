#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
  int dice1,dice2,counter = 0;

  cin >> dice1;
  cin >> dice2;

  for (int c1 = 1; c1 <= dice1;c1++){
    for (int c2 = 1; c2 <= dice2;c2++){

      if (c1 + c2 == 10){
        counter++;
      }
    }
  } 

  if (counter == 1){
    cout<<"There is 1 way to get the sum 10."<<endl;
  }
  else {
    cout<<"There are "<<counter<<" ways to get the sum 10."<<endl;
  }
  
    
    return 0;

}

