#include <iostream>
#include <fstream>
float Ejecucion(int NumAlum,int edadalu,float EdProm);
using namespace std;

int main() {

  ofstream Archivo;
  int NumAlum,edadalu=0;
  float EdProm;
  float ins;
  Archivo.open("Ejercicio",ios::out );
  
  cout << "Ingrese la cantidad de Alumnos: ";
  cin >> NumAlum;
  Archivo << "Numero de Alumnos: " << NumAlum << endl;
  ins=Ejecucion(NumAlum, edadalu, EdProm);

  cout << "Edad Promedio de los alumnos: " << ins;
  Archivo << "Edad Promedio de los alumnos: " << ins << endl; Archivo.close();
  return 0;
}
float Ejecucion(int NumAlum,int edadalu,float EdProm)
{
  ofstream Archivo;
  Archivo.open("Ejercicio",ios::app);
  int Suma;
  for(int i=0; i<NumAlum;i++)
  {
    do{

    cout << "Ingrese la Edad del Alumno " <<i+1 << ": " ;
    cin >> edadalu;}while(edadalu<0 || edadalu >100);
    Archivo << "Edad de Alumno " <<i+1 << ": " << edadalu << endl ;
    Suma+=edadalu;
  }
  
  EdProm=Suma/NumAlum;
  Archivo<< "Edad Promedio: "<< EdProm;
  Archivo.close();
  return EdProm;
}