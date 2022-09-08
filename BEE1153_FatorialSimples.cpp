# include <iostream>

using namespace std;

int fatorial (int fat) {
   int num = 1;
    for(int i = 2; i<=fat; i++){
        num *= i;
    }
    return num;
}

int main(){
    int valor;
    cin >> valor;
    cout << fatorial(valor) << endl;
    return 0;
}