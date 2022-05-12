#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

 int number;
  bool top= false,mid= false,bot = false,topL= false,topR= false,botL= false,botR = false;

  //cout<<"Enter a single digit"<<endl;
  cin >> number;

  switch (number) {

    case 0: {
      topL = true;
      top = true;
      topR = true;
      botR = true;
      bot = true;
      botL = true;
    }
    break;

    case 1: {
      topR = true;
      botR = true;
    }
    break;

    case 2: {
      top = true;
      topR = true;
      mid = true;
      botL = true;
      bot = true;
    }
    break;

    case 3: {
      top = true;
      topR = true;
      mid = true;
      botR = true;
      bot = true;
    }
    break;

    case 4: {
      topL = true;
      mid = true;
      topR = true;
      botR = true;
    }
    break;

    case 5: {
      top = true;
      topL = true;
      mid = true;
      botR = true;
      bot = true;
    }
    break;

    case 6: {
      top = true;
      topL = true;
      mid = true;
      botL = true;
      bot = true;
      botR = true;
    }
    break;

    case 7: {
      top = true;
      topR = true;
      botR = true;
    }
    break;

    case 8: {
      top = true;
      topR = true;
      topL = true;
      mid = true;
      botR = true;
      botL = true;
      bot = true;
    }
    break;

    case 9: {
      top = true;
      topL = true;
      topR = true;
      mid = true;
      botR = true;
      bot = true;
    }
    break;
    
  }

    if (top == true) {
      cout <<" * * *"<<endl;
    }
    else {
      cout<<endl;
    }

    for (int counter1 = 0; counter1 < 3;counter1++) {
      if (topL == true && topR == true) {
        cout<<"*     *"<<endl;
      }
      else if (topL == true && topR == false) {
        cout<<"*"<<endl;
      }
      else if (topL == false && topR == true){
        cout <<"      *"<<endl;
      }
    }

    if (mid == true) {
      cout <<" * * *"<<endl;
    }
    else {
      cout<<endl;
    }

    for (int counter1 = 0; counter1 < 3;counter1++) {
      if (botL == true && botR == true) {
        cout<<"*     *"<<endl;
      }
      else if (botL == true && botR == false) {
        cout<<"*"<<endl;
      }
      else if (botL == false && botR == true){
        cout <<"      *"<<endl;
      }
    }

    if (bot == true) {
      cout <<" * * *"<<endl;
    }
    else {
      cout<<endl;
    }


  

    
    return 0;

}

