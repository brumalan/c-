#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double R, volume;
    cin >> R;
    volume = (4.0/3) * 3.14159 * (pow (R,3));
    cout << "VOLUME = " << fixed << setprecision (3)<< volume << endl;
}