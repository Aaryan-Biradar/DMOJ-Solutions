#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

  int num,loop;
  char symbol;

  cin>>loop;

  for (int i = 0;i<loop;i++){
    cin>>num>>symbol;
    for (int x = 0;x<num;x++){
      cout<<symbol;
    }
    cout<<endl;
  }


  

    
    return 0;

}

