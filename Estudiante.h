#ifndef Estudiante_H
#define Estudiante_H
#include<bits/stdc++.h>
using namespace std;

class Estudiante{
	private:
		string nombre;
		string apellido;
		string fecha;
		float nota;
	public:
		Estudiante(string Nombre, string Apellido, string Fecha, float Nota);
		Estudiante() {};
		
		string getNombre() { return nombre; }
		string getApellido() { return apellido; }
		string getFecha() { return fecha; }
		float getNota() { return nota; }
};
Estudiante::Estudiante(string Nombre, string Apellido, string Fecha, float Nota){
	nombre = Nombre;
	apellido = Apellido;
	fecha = Fecha;
	nota = Nota;
}


#endif
