#include <iostream>

using namespace std;

int main(){
    int numero, dias, meses, anos;
    cin >> numero;
    anos = numero /365;
    meses = (numero - (anos*365)) / 30;
    dias = numero - (anos * 365) - (meses * 30);
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout <<  dias << " dia(s)" << endl;
}