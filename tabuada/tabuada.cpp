#include <iostream>

using namespace std;

void calc_tabuada(int valor, int limite = 10, int vezes = 1){
    if(limite >= vezes){
        cout << (vezes) << " x " << valor << " = " << (valor * vezes) << endl;
        vezes++;
        calc_tabuada(valor, limite, vezes);
    }
    
}
int main(){

    int valor;
    string recived;

    getline(cin, recived);
    valor = stoi(recived);

    calc_tabuada(valor);

    return 0;
}