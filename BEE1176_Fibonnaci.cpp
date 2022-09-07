#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;
    for (int i=0; i<T; i++){
        cin >> N;
        unsigned long long vet[N];
        vet[0] = 0;
        vet[1] = 1;
        if (N == 0){
            cout << "Fib(0) = "<< 0 << endl;
        }
        else{
              N++;
            for (int i=0; i<N-2; i++){
                vet[i+2] = vet[i+1] + vet[i];
            }
            cout << "Fib(" << N-1 <<") = " << vet[N-1] << endl;
        }

    }
}
