#include <iostream>

using namespace std;

int main(){
    double n;
    int hora, minuto, segundo;
    cin >> n;
    hora  = n/3600;
    minuto = (n/3600 - hora) *60;
    segundo = n - (3600* hora) - (minuto *60) ;
    cout << hora << ":" << minuto << ":" << segundo << endl;
}