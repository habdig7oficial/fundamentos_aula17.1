#include <iostream>
 
using namespace std;
 
float somar(float a, float b){
    return a + b;
}
 
 
int main() {

     string a, b;
     
     getline(cin, a);
     getline(cin, b);

     float x = somar(stof(a), stof(b));
 
     cout << "X = " << x << endl;
 
    return 0;
}

/*Rode com: g++ extremamente_basico.cpp -o basico.elf && ./basico.elf*/