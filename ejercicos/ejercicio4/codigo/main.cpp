#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
	// codigo del menu para elegir un juego
    int op; // declaramos la variable que es para ingresar el valor del menu
	while(op!=4){ // nos sirve para ejecutar una opcion de nuestro menu
		cout<<"1.*** menu del juego *** "<<endl;
		cout<<"2. snake "<<endl; 
		cout<<"3. startship "<<endl;
		cout<<"4. salir "<<endl;
		cout<<"elija una opcion";
		cin>>op;
		
		switch(op){ // aqui se recibe el valor que ingresaremos
			
			case 1: 
				system("cls");// sirve para limpiar pantalla
				cout<<"menu de juego 1"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo hacer una pausa
				break;
			case 2: 
				system("cls");// sirve para limpiar pantalla
				cout<<"snake 2"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo hacer una pausa
				break;
			case 3: 
				system("cls");// sirve para limpiar pantalla
				cout<<"startship 3"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo hacer una pausa
				break;
			case 4: 
				system("cls");// sirve para limpiar pantalla
				cout<<"salir 4"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo hacer una pausa
				break;
			
		}
	
}
    system("cls");

    starShip();
     snake();

    return 0;
}