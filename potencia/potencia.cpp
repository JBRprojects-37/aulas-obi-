#include <iostream>

using namespace std;

int main(void){
    int base, exp, res= 1;
         
    cout << "Qual a base ?";
     cin >> base;

    cout << "qual o expoente da potencia ?";
    cin >> exp;

    for(int i= 0; i < exp; i++){
        res *=base;// res = res * base
    }
    
    cout << " a resposta é" << res << "\n ";
    
    return 0;
 }