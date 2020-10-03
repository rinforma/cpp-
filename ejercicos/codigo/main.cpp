#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int op;
	while(op!=4){
		cout<<"1.*** menu del juego *** "<<endl;
		cout<<"2. snake "<<endl;
		cout<<"3. startship "<<endl;
		cout<<"4. salir "<<endl;
		cout<<"elija una opcion";
		cin>>op;
		
		switch(op){
			
			case 1: 
				system("cls");// sirve para limpiar pantalla
				cout<<"menu de juego "<<endl;
				system("pause");// sirve para cuando se ejecute el codigo
				break;
			case 2: 
				system("cls");// sirve para limpiar pantalla
				cout<<"snake 2"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo
				break;
			case 3: 
				system("cls");// sirve para limpiar pantalla
				cout<<"startship 3"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo
				break;
			case 4: 
				system("cls");// sirve para limpiar pantalla
				cout<<"salir 4"<<endl;
				system("pause");// sirve para cuando se ejecute el codigo
				break;
			
		}
	
}
    system("cls");

    //starShip();
     //snake();

    return 0;
}