#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main(){
    int numerofun, horas;
    double precoporhora;
    cin >> numerofun >> horas >> precoporhora;
    cout << "NUMBER = "<< numerofun << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) <<horas * precoporhora << endl;
}