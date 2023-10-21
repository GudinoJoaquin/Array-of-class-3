#include<bits/stdc++.h>
#include "Estudiante.h"
using namespace std;

void mostrarEstudiante(Estudiante *e);
int main(){
	
	Estudiante *estudiante = new Estudiante[3];
	
	estudiante[0] = Estudiante("Lautaro", "Firpo", "10/3/23", 6);
	estudiante[1] = Estudiante("Martin", "Rojas", "5/7/23", 7);
	estudiante[2] = Estudiante("Augusto", "Chuquimia", "4/9/23", 10);
	
	mostrarEstudiante(estudiante);	
	
	return 0;
}

void mostrarEstudiante(Estudiante *e){
	for(int i = 0 ; i < 3 ; i++){
		if(e[i].getNota() >= 7){
			cout<<e[i].getNombre()<<" "<<e[i].getApellido()<<endl;
		}
	}
	cout<<endl;
}
