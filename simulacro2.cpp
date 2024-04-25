#include <iostream>
using namespace std;

int main (){
int numero;
int divisor = 1;
cout << "Ingresar un numero ";
cin >> numero;
if(numero%divisor==0){
 cout << "no es un numero primo";
}else{
 cout << "es un numero primo";
}

return 0;
}
