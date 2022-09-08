#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    double r, n = 3.14159;
    cin >> r;
    cout << "A=" << fixed << setprecision(4)<< n* (pow(r, 2)) << endl;
}