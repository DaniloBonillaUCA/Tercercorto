#include <iostream>
#include <stdlib.h>
using namespace std;
/*Se uso las funciones fuera del main para hacer un trabajo mas limpio y ordenado, donde se pudiera hacer el proceso de comprobación de si el número era el ganador o no; 
en el main se uso un for para que indicara la cantidad de intentos restantes, y en el mismo for se llamo a la funcion*/
int calculo(int x, int y){
cout <<"Ingresa tu numero entero entre el 1 y el 100" << "\n";
cout <<"Si ya no deseas jugar ingresa el numero 0"<< "\n";
cin >> y;
if (y==x) {
cout << "Felicidades ganaste el premio" << "\n";
exit(0); }
if (y<x && y!=0) {
    cout << "Tu numero ingresado es menor al numero ganador"<< "\n"; }

if (y>x){
cout << "Tu numero ingresado es mayor al numero ganador"<< "\n";
}

if (y==0){
    cout << "Te esperamos pronto";
exit(0);
}
}
int main(void)
{
    int ganador=39;
    int numero=0;
    for (int i=1; i<=5; i++)
    {
    calculo(ganador,numero);
 cout<< "Cantidad de intentos restantes: " << 5-i << "\n";
    }
    cout << "Gracias por participar, el numero era: " << ganador;
}