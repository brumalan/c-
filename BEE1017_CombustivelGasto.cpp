#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double tempo, velocidade;
    double media;
    cin >> tempo >> velocidade;
    media = (tempo * velocidade) / 12;
    cout << fixed << setprecision (3) << media << endl;
    return 0;
}