#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {


int num1,num2,num3,num4,num5,num6,AIF,avg,req;

cin >> num1;
cin >> num2;
cin >> num3;
cin >> num4;
cin >> num5;
cin >> num6;

cin >> AIF;
cin >> req;

avg = (num1 + num2 + num3 + num4 + num5 + num6) / 6 + AIF;

if (avg >= req) {
  cout <<"yes"<<endl;
}
else {
  cout <<"no"<<endl;
}
  

}