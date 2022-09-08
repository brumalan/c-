#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, maior;
    cin >> a >> b >> c;
    maior =  ((a + b) + abs(a-b)) /2;
    cout << (maior > c ? maior :c)<< " eh o maior" << endl;
}