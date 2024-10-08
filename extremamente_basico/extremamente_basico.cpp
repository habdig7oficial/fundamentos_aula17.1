#include <iostream> /* Inclui biblioteca padrão do C++ */
 
using namespace std; /* Encurta os namespaces, exemplos: std::cout << "hello"; vira cout << "hello"; */

/* Declara uma função do tipo float que recebe 2 floats e retorna a soma */ 
float somar(float a, float b){
    return a + b;
}
 
/* Por padrão o programa começa nessa função */ 
int main() {

    /* Declara 2 variáveis string */
    string a, b;
     
    /* Pega uma linha linha do cin e coloca em a equivalente ao a = input() */
    getline(cin, a);
    getline(cin, b);

    /* declara uma varriavel com ponto decimal */
    float x = somar(stof(a), stof(b));
 
    /* Equivalente ao print() do python */
    cout << "X = " << x << endl;
 
    /* Indica que o programa acabou com sucesso */
    return 0;
}

/*Rode com: g++ extremamente_basico.cpp -o basico.elf && ./basico.elf*/