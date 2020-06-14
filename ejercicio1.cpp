#include <iostream>
#include <iomanip>
using namespace std;
/*Se hicieron todos los procesos de calculo en las funciones fuera del main para evitar confusiones y así tener un trabajo más limpio y entendible,
en el main se pidio el ingreso de la cantidad de empleados para así generar un for que calculara "x" veces el sueldo de los empleados, además ya dentro del for se pidio
el ingreso de las horas y ahí se llamaron a las funciones encargadas de los cálculos las cuáles trabajan con las horas ingresadas por el usuario, por último en el mismo for, se hizo
un acumulador para el salario real y uno para el salario normal sin descuentos, así cada vez que se hiciera el cálculo de un nuevo empleado, los salarios se guardan en los acumuladores
para al final hacer la suma y mostrar los salarios, tanto el real como el normal, tde todos los empleados ingresados
*/
float horasn (float x){
    return (x*1.75);
}
float extras (float x)
{
    return (x*2.50);
}
float seguro (float x){
    return (x*0.04);
}
float afp (float x){
    return (x*0.0625);
}
float impuesto (float x){
    if (x>500)
    return (x*0.10);
}
float descuentos (float x, float y, float z){
    if (x>500)
    return (x+y+z);
    else
    return (x+y);
}
float salariototal (float x, float y){
    return (x+y);
}
float salarioreal (float x, float y){
    return (x-y);
}

main (){
    float sgeneral=0;
    float sneto=0;
    float empleados=0;
 
        cout <<"Ingresa la cantidad de empleados: ";
        cin>>empleados;
        for (int x=1; x<=empleados; x++)
        {
    float horas=0;
    float horasex=0;
    
     cout<<"ingresa la cantidad de horas normales trabajadas: ";
    cin >> horas;
    cout<<"ingresa la cantidad de horas extras trabajadas: ";
    cin >> horasex;
    float ihoras= horasn(horas);
    float hextras= extras(horasex);
    float satotal=salariototal(ihoras, hextras);
    float segu=seguro(satotal);
    float aefep=afp(satotal);
    float imp=impuesto(satotal);
    float desc=descuentos(segu, aefep, imp);
    float sareal= salarioreal(satotal,desc);
    cout << "Los ingresos por las horas trabajadas dentro del horario normal son: $"  << fixed <<setprecision(2) << ihoras << "\n";
    cout << "Los ingresos por las horas extras son: $"<< fixed <<setprecision(2)<< hextras << "\n";
    
    cout << "El salario total sin descuentos es: $"<< fixed <<setprecision(2)<< satotal << "\n";
   
    cout << "el descuento por el seguro social es: $" << segu << fixed <<setprecision(2)<< "\n";
cout << "el descuento por el AFP es: $" << aefep << fixed <<setprecision(2)<< "\n";
cout << "el descuento por el Impuesto sobre la renta es: $" << imp << fixed <<setprecision(2) << "\n";

   cout << "el salario con los descuentos aplicados es: $" << sareal << fixed <<setprecision(2) << "\n";
            sgeneral = sgeneral+satotal;
            sneto= sneto+sareal;
        }
  
    cout << "La suma de los salarios generales de tus empleados es: $" << sgeneral<< "La suma de los salarios reales de tus empleados es: $" << sneto;
     
 }
