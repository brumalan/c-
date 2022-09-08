#include <iostream>
using namespace std;

int main(){
   int T, numero, a=0, b=1, c = 1, fib = 0;
   cin >> T;
   int teste[T];

   for (int i=0; i<T; i++){
    cin >> teste[i];
   }
   cout << teste[0] << endl << teste[1] << endl << teste[2] << endl;

   for (int i=0; i<T; i++){
      if(teste[i]==0){
        cout << "Fib(0) = 0" << endl;
    }
    else{
        for (int j =0; j<teste[i]; j++){
            fib+=c;
            c++;
        }
        cout << "Fib(" << teste[i] << ") = 0" << endl;
    }
   }
   
   return 0;
}