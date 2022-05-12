#include <bits/stdc++.h>

using namespace std;

int main() {
    
int N, x, y, min_x, max_x, min_y, max_y, area, line1, line2;

cin>>N;
cin>>x;
cin>>y;

min_x = x;
max_x = x;

min_y = y;
max_y = y;

for (int i = 1; i < N; i++) {
    cin>>x;
    cin>>y;
    if (x <= min_x) {
        min_x = x;
    }
    if (y <= min_y) {
       min_y = y;
    }
    if (x >= max_x) {
        max_x = x;
    }
    if (y >= max_y) {
        max_y = y;
    }
}

line1 = max_x - min_x;
line2 = max_y - min_y;

if (line1 >= line2) {
    area = pow(line1, 2);
}
else {
    area = pow(line2, 2);
}

cout<<area<<endl;
    
    return 0;
}