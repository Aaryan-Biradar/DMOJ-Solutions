#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    
  int N,K,bars,newswords;
  int swords = 0;

  cin>>N;
  bars = N;
  newswords = N;
  cin>>K;

  while (bars > 0) {
    swords = swords + bars;
    bars = newswords/K;
    newswords = bars + (newswords%K);
  }

  cout<<swords<<endl;
  
    
    return 0;
}

