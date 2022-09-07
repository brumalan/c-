#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int coluna, tm = 4;
    cin >> coluna;
    char operacao;
    cin >> operacao;
    float mat[tm][tm], soma = 0, media;
    for (int i=0; i<tm; i++){
        for (int j=0; j<tm; j++){
            cin >> mat[i][j];
        }
    }
    for (int i=0; i<tm; i++){
        soma += mat[i][coluna];
    }
    media = soma / tm;
    if(operacao == 'S'){
        cout << fixed << setprecision(1) <<  soma << endl;
    }
    else if(operacao == 'M'){
        cout << fixed << setprecision(1) << media << endl;
    }   
    return 0;
}