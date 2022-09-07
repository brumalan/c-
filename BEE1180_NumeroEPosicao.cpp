#include <iostream>

using namespace std;

int main(){
    int N, menor, posicao = 0;
    cin >> N;
    int vet[N];

    for (int i=0; i<N; i++){
        cin >> vet[i];
    }
    menor = vet[0];
    for (int j=0; j<N; j++){
        if (vet[j] < menor){
            menor = vet[j];
            posicao = j;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

}