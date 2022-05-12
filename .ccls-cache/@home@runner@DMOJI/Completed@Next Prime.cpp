#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){

  long long int bottom;

  cin>>bottom;

  int a = 0;

  for(long long int k = bottom; a==0; k++){

  int sum = 0;

  for(int i = 2; i<=sqrt(k); i++){

    if(k%i==0)

      sum = sum+1;

  }

  if(sum==0&&k!=1){

    cout<<k<<endl;

    a = a+1;}

  }
}

