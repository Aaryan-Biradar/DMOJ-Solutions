#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

  int quarter,slot1,slot2,slot3,counter = 0;

  cin >>quarter;
  cin>>slot1>>slot2>>slot3;

  while (quarter >= 0){
    slot1++;
    counter++;
    if (slot1 == 35){
      quarter += 30;
      slot1 = 0;
    }
    quarter--;

    if (quarter > 0){
      slot2++;
      counter++;
      if (slot2 == 100){
        quarter += 30;
        slot2 = 0;
      }
      quarter--;
      if (quarter > 0){
        slot3++;
        counter++;
        if (slot3 == 10){
          quarter+= 9;
          slot3 = 0;
        }
        quarter--;
      }
    }
  }

  cout<<"Martha plays "<<counter<<" times before going broke."<<endl;


  

    
    return 0;

}

