#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo, codigo2, unidades, unidades2;
    double preco, preco2;
    cin >> codigo >> unidades >> preco;
    cin >> codigo2 >> unidades2 >> preco2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << (unidades * preco) + (unidades2 * preco2) << endl;
    return 0;
}