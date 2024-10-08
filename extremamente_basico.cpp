#include <iostream>
 
 using namespace std;
 
 float somar(float a, float b){
     return a + b;
 }
 
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     string a;
     string b;
     
     getline(cin, a);
     getline(cin, b);
     
    
     
     float x = somar(stof(a), stof(b));
 
     cout << "X = " << x << endl;
 
    return 0;
}