#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
  int lowX = 2147483647,loop,x,y,highY = -1;

  cin >> loop;

  for (int i = 0;i < loop;i++){
    cin >> x;
    cin >> y;

    if (x <= lowX) {
      lowX = x;
    }

    if (y >= highY){
      highY = y;
    }
  }

  int area = (highY - lowX) * (highY - lowX);

  cout<<area<<endl;
  
    
    return 0;
}

