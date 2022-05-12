#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){

    int tines, spacing, handle;
    int constantCounter = 0, temporaryCounter = 0;

    cin >> tines;
    cin >> spacing;
    cin >> handle;

    //Prints the tines
    while (constantCounter < tines * 2){
        constantCounter++;
        if(constantCounter % 2 != 0){
            while(temporaryCounter < 1){
                temporaryCounter++;
                cout << '*';
            }
            while(temporaryCounter < spacing + 1){
                temporaryCounter++;
                cout << " ";
            }
            while(temporaryCounter < spacing + 2){
                temporaryCounter++;
                cout << '*';
            }
            while(temporaryCounter < spacing * 2 + 2){
                temporaryCounter++;
                cout << " ";
            }
            while(temporaryCounter < spacing * 2 + 3){
                temporaryCounter++;
                cout << '*';
            }
          cout << endl;
        }
        temporaryCounter = 0;
        
    }
    
    //Prints the middle part
    while(constantCounter < tines * 2 + 1){
        constantCounter++;
        while(temporaryCounter < spacing * 2 + 3){
            temporaryCounter++;
            cout << '*';
        }
        temporaryCounter = 0;
        cout << endl;
    }
    
    //Prints out the handle
    while(constantCounter <= tines * 2 + handle * 2){
        constantCounter++;
        if(constantCounter % 2 != 0){
            while(temporaryCounter < spacing + 1){
                temporaryCounter++;
                cout << " ";
            }
            while(temporaryCounter < spacing + 2){
                temporaryCounter++;
                cout << '*';

            }
          cout << endl;
        }
        temporaryCounter = 0;
    }

    return 0;
}

