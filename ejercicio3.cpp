#include <iostream>
#include <stdlib.h>

using namespace std;
/*Se hizo un programa usando la estructura basica del if, 
en la cual se ocupo el modulo para saber si el año era divisible o no, además de utilizar la lógica vista en matemática discreta para la segunda condición*/
main (){

int anho=0;
cout << "Ingrese el a"<<char(164)<<"o que desea comprobar si es bisiesto o no: "<< "\n";
cin >> anho;
if (anho % 400==0) {
cout<< "El a"<<char(164)<<"o es bisiesto";
}
if ((anho % 4==0) && (anho % 100!=0)) {
cout<< "El a"<<char(164)<<"o es bisiesto";
}
else cout <<"El a"<<char(164)<<"o no es bisiesto";
return 0;
}

