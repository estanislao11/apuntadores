#include <iostream>
using namespace std;

int numero = 12;
int numero2 = 14;
int *apuntadores;
char a='b';
float f = 1.23,*pflo;
int arreglo []={1,2,3,4,5];
int *apuntador;
int main () {
pflo = &f;
apuntador = &arreglo[3];
apuntadores = &numero;
 cout <<"numero:"<< apuntadores<<endl;
cout <<"memoria char:"<< &a<<endl;
cout <<"memoria entero:"<< &numero2<<endl;
cout <<"memoria float :"<< &f <<endl;
cout <<"valor float:" << f << endl;
cout <<"arreglo direccion:" << apuntador<<endl;
cout <<"arreglo valor:"<< apuntador << endl;
cout <<"memoria de arreglo:" << apuntador<< endl;
apuntador+=4;
cout << "arreglo valor 5:" << *apuntador <<endl;
cout <<"memoria de valor 5:" << apuntador;
return 0;
