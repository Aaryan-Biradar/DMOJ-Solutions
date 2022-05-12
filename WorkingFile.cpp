#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

  int total = 0,i;

  
    cin >>i;
  
    for(int div = 1;div<i;div++){
      if (i%div==0){
        total += div;
      }
    }
    
    if (total == i){
      cout<<i<<endl;
    }
  

  
    
  return 0;

}

