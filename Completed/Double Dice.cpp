#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
  int loop,Ant,Dav,dS = 100,aS = 100;
  
  cin >> loop;

  for (int i = 0;i < loop; i++){

    cin >>Ant;
    cin >>Dav;

    if (Ant > Dav){
      dS = dS - Ant;
    }
    if (Dav > Ant){
      aS = aS - Dav;
    }
  }

  cout<<aS<<endl;
  cout<<dS<<endl;
    
    return 0;

}

