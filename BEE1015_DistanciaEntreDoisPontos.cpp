#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fixed << setprecision(4) << sqrt ((pow((x2-x1),2)) + (pow ((y2-y1),2))) << endl;
}