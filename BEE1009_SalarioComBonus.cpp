#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    double salario, vendas;
    cin >> nome >> salario >> vendas;
    cout << "TOTAL = R$ " << fixed << setprecision (2) << salario +(vendas * 0.15) << endl;
}