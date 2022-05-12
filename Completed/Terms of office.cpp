#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
  int Y,lastY;

  cin >> Y;
  cin >> lastY;

  for (int i = Y; i <= lastY; i++){
    int loop = i - Y;
    
    if (loop % 4 == 0 && loop % 2 == 0 && loop % 5 == 0 && loop % 3 == 0) {
      
      cout<<"All positions change in year "<<i<<endl;
    }
 
  }
    
    return 0;

}

