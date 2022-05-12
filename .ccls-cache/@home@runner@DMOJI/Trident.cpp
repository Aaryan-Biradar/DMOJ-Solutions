#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

 int length,space,handle;

  cout<<"Enter tine length:"<<endl;
  cin>>length;

  cout<<"Enter tine spacing:"<<endl;
  cin >> space;

  cout<<"Enter handle length:"<<endl;
  cin >> handle;

  for (int i = 0; i < length;i++){
    cout<<"*";
    
    for (int x = 0;x < space;x++){
      cout<<" ";
    }
    
    cout<<"*";
    
    for (int x = 0;x < space;x++){
      cout<<" ";
    }
    cout<<"*";
    cout<<endl;
  }

  for (int i = 0;i< space*2+3;i++){
    cout<<"*";
  }
  cout<<endl;

  for (int i = 0; i < handle;i++){
    for (int x = 0;x < space+1;x++){
      cout<<" ";
    }
    cout<<"*";
    cout<<endl;
  }



  

    
    return 0;

}

