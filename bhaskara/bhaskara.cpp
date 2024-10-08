#include <iostream>
#include <math.h>

using namespace std;

class Bhaskara{
    public: 
        float a, b, c;
        float v_delta;
        bool raiz_igual;

        struct resposta {
            float r1;
            float r2;
        } res;

        Bhaskara(float a, float b, float c){
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }

        int delta(){
            this -> v_delta = (pow(this -> b, 2)) - (4 * (this -> a * this -> c));
            return this -> v_delta;
        }

        resposta raizes(){
            this -> delta();
            if(v_delta == 0){
                this -> res.r1 = (-b + sqrt(this -> v_delta)) /  (2 * this -> a);
                this -> res.r2 = this -> res.r1;
                raiz_igual = true;
            }
            else if (v_delta > 0){
                this -> res.r1 = (-b + sqrt(this -> v_delta)) /  (2 * this -> a);
                this -> res.r2 = (-b - sqrt(this -> v_delta)) /  (2 * this -> a);
            }
            else{
                throw runtime_error("O valor não pode ser calculado");
            }
           // cout << this -> res.r1 << endl;
            //cout << this -> res.r2 << endl;
            return this -> res;
        }

        void print(){
            cout << this -> a << endl << this -> b << endl << this -> c << endl;
        }
};
 
int main() {
    string a, b, c ;
     
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
     
    Bhaskara instancia(stof(a), stof(b), stof(c));     

    try{
        instancia.raizes();
        cout << instancia.res.r1 << endl;

        if(instancia.raiz_igual != true){
            cout << instancia.res.r2 << endl;
        }
    }
    catch(runtime_error err){
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}