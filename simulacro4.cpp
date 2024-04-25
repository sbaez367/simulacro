#include <iostream>
using namespace std;

int main (){
int numero;
int suma = 0;
cout << "Ingrese un numero ";
cin >> numero;
if (numero>0){
  for(int iterador = 0;iterador<numero;iterador++){
  suma = suma + iterador;
  cout << suma << endl;
  }

}else {
cout<< "No ingresaste un valor valido";
}

return 0;
}
