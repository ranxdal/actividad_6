#include <iostream>
using namespace std;

main(){
	/*int edad, *p_edad;
	p_edad = &edad;
	
	cout<<"Ingrese edad: ";
	cin>>edad;
	cout<<*p_edad<<endl;
	
	if(*p_edad>18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
	
	int total = 0;
	int notas[total];
	char res;
	int *p_notas = notas;
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'||res=='S');

	cout<<"________Mostrar notas_______"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
		}

	//punteros con asignacion de memoria dinamica
	//new = reservar un espacio en memoria
	//delete [] = liberar la memoria
	
	int total=0,*p_notas;
	p_notas= new int[total];
	char res;

	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>notas[total];
		total++;
		cout<<"Desea ingresar otro valor (s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
	
	
	cout<<"________Mostrar notas_______"<<endl;
	for(int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
		}
		delete [] p_notas;*/
		
		
	int fil = 0, col = 0, **pm_notas;
	cout<<"Ingrese la cantidad Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de Notas por estudiante: ";
	cin>>col;
	
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	
	for(int i=0;i<fil;i++){
		cout<<"__________Estudiante___________"<<i<<endl;
		for(int ii=0;ii<col;ii++){
			//cout<<"Estudiante "<<i<<", Nota: "<<ii<<" : ";
			cout<<"Nota: "<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_______________________"<<endl;
	}
	cout<<"-------------Mostrar notas-----------"<<endl;
	for(int i=0;i<fil;i++){
			
			for(int ii=0;ii<col;ii++){	
				cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_______________________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;



	system("pause");
}
