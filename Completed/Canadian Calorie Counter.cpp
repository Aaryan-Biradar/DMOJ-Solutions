#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

 int burger,drink,side,dessert,total = 0;

  cin>>burger;

    switch (burger){

    case 1:{
      total+=461;
    }
    break;

    case 2:{
      total+=431;
    }
    break;

    case 3:{
      total+=420;
    }
    break;

    case 4:{
      total+=0;
    }
    break;

    default:{
      cout<<"Input Invalid"<<endl;
    }
  }

  //cout<<"Please enter a side order choice: "<<endl;
  cin>>side;

   switch (side){

    case 1:{
      total+=100;
    }
    break;

    case 2:{
      total+=57;
    }
    break;

    case 3:{
      total+=70;
    }
    break;
     
    case 4:{
      total+=0;
    }
    break;

    default:{
      cout<<"Input Invalid"<<endl;
    }
  }

  //cout<<"Please enter a drink choice: "<<endl;
  cin>>drink;

    switch (drink){

    case 1:{
      total+=130;
    }
    break;

    case 2:{
      total+=160;
    }
    break;

    case 3:{
      total+=118;
    }
    break;

    case 4:{
      total+=0;
    }
    break;

    default:{
      cout<<"Input Invalid"<<endl;
    }
  }

  //cout<<"Please enter a dessert choice: "<<endl;
  cin>>dessert;

  switch (dessert){

    case 1:{
      total+=167;
    }
    break;

    case 2:{
      total+=266;
    }
    break;

    case 3:{
      total+=75;
    }
    break;

    case 4:{
      total+=0;
    }
    break;

    default:{
      cout<<"Input Invalid"<<endl;
    }
  }

cout<<"Your total Calorie count is "<<total<<"."<<endl;

  

    
    return 0;

}

