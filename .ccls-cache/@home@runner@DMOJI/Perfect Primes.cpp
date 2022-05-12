#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {

  int loop,num,count1=0,count2=0;;

  cin>>loop;

  for (int i = 0;i<loop;i++){
    cin >> num;
    for (int c1 = 1;c1 < num*2;c1++){
      for (int d1 = 1; d1<num;d1++){
        //d1 = 0;
        if (c1%d1==0){
          count1++;
        }
         if (count1 == 2){
          cout<<c1<<" c1 prime"<<endl;
          for(int c2 = 1;c2<num*2;c2++){
            for (int d2 = 1;d2<num;d2++){
              //d2 = 0;
              if (c2%d2==0){
                count2++;
              }
              if (count2 == 2){
               if ((c1 + c2) / 2 == num){
                cout<<c1<<" "<<c2<<endl;
               }
          }
        }  
      }
     }
    }
  }
}

  

    
    return 0;

}

