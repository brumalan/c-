#include<iostream>

using namespace std;

int main(){
    int notas100, notas50, notas20, notas10, notas5, notas2, moedade1;
    double valor;
    cin >> valor;
    notas100 = valor / 100;
    cout << "NOTAS:" << endl;
    cout << notas100 << " nota(s) de R$ 100.00" << endl;
    notas50 = (valor - (100* notas100)) / 50;
    cout << notas50 << " nota(s) de R$ 50.00" << endl;
    notas20 = ((valor - (100 * notas100)) - (50*notas50)) / 20;
    cout << notas20 << " nota(s) de R$ 20.00" << endl;
    notas10 = (((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) /10;
    cout << notas10 << " nota(s) de R$ 10.00" << endl;
    notas5 = ((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10)) / 5;
    cout << notas5 << " nota(s) de R$ 5.00" << endl;
    notas2 = ((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10) - (5 * notas5)) / 2;
    cout << notas2 << " nota(s) de R$ 2.00" << endl;
    moedade1 = (((((valor - (100 * notas100)) - (50*notas50)) - (20 * notas20)) - (10 * notas10) - (5 * notas5))) - (2 * notas2) / 1;
   
    int valorint = valor;
    double valorquebrado = valor - valorint;
    int moeda50 = 100*valorquebrado / 50;
    int moeda25 = ((101*valorquebrado) - (50*moeda50)) / 25;
    int moeda10 = (((101*valorquebrado) - (50*moeda50)) - 25*moeda25) / 10;
    int moeda05 = ((((101*valorquebrado) - (50*moeda50)) - 25*moeda25) - 10*moeda10) / 5;
    int moeda01 = ((((101*valorquebrado) - (50*moeda50)) - 25*moeda25) - 10*moeda10) - 5*moeda05 ;
    cout << "MOEDAS:" << endl;
    cout <<moedade1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda05 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda01 << " moeda(s) de R$ 0.01" << endl;
}