#include <iostream>

using namespace std;

int main(){
    int n, teste;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> teste;
        if (teste == 0){
            cout << "NULL" << endl;
        }
        else if (teste > 0){
            if(teste % 2 != 0){
                cout << "ODD POSITIVE" << endl;
            }
            else{
                cout << "EVEN POSITIVE" << endl;
            }
        }
        else{
            if(teste % 2 != 0){
                cout << "ODD NEGATIVE" << endl;
            }
            else{
                cout << "EVEN NEGATIVE" << endl;
            }
        }
        
    }
}