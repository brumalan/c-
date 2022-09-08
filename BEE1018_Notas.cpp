#include<iostream>

using namespace std;

int main(){
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    cin >> valor;
    notas100 = valor / 100;
    cout << valor << endl;
    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    notas50 = (valor - (100* notas100)) / 50;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    notas20 = ((valor - (100 * notas100)) - (50*notas50)) / 20;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    notas10 = (((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) /10;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    notas5 = ((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10)) / 5;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    notas2 = ((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10) - (5 * notas5)) / 2;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    notas1 = (((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10) - (5 * notas5))) - (2 * notas2) / 1;
    cout << notas1 <<  " nota(s) de R$ 1,00" << endl;
}