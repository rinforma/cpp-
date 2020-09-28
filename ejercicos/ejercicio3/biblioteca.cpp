#include<iostream>
#include<algorithm>
#include<time.h>

using namespace std;
//            y  x
string libros[9][3];
string Autores[9][3];

void cargarlibros(){
    //arreglo con categoria y discripcion
    libros[0][0]= "Algoritmos"; 
    libros[0][1]= "Apuntes de Algoritmos y Estructura de Datos";
    libros[0][2]= "Fundamentos de Informatica y Programacion";
    libros[0][3]= "Clinfor Stein";

    libros[1][0]= "Base de Datos";
    libros[1][1]= "Apuntes de Base de Datos";
    libros[1][2]= "Base de Datos Avanzada (2013)";
    libros[0][4]= "Eduardo Brito";

    libros[3][0] = "Python";
	libros[3][1] = "Inmersion en Python 3";
	libros[3][2] = "Introduccion a la programacion con Python";
    libros[0][5]= "Sebastien Chazallet";
}


int main(int argc,char const *argv[]){

    cargarlibros();

    srand (time(NULL));

    bool salir = false;

    while (salir==false){

        string buscar= "";
        system("cls");
        cout<<"Ingrese la descripcion del libro que busca";
        cin>>buscar;

        //buscar
        for (int i = 0; i < 9; i++)
        {
            string libros = libros[i][1];
            string autor = libros[i][3];
            string librosEnminuscula = libros;
            string autorEnminuscula = libros;

            //transformamos en minuscula los string y libros
            transform(librosEnminuscula.begin(), librosEnminuscula.end(),librosEnminuscula.begin(), ::tolower;
            transform(buscar.begin(), buscar.end(),buscar.begin(), ::tolower);

            if(librosEnminuscula.find(buscar)!= string::npos||autorEnminuscula.find(buscar)!= string::npos){
                cout<<"libro encontrado: " << libros << endl;

                cout<<"Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 8 + 1;
                int sugerencia2 = rand() % 8 + 1;
                int sugerencia3 = rand() % 8 + 1;

                cout<<"sugerencia 1:" << libros[sugerencia1][1]<<endl;
                cout<<"sugerencia 2:" << libros[sugerencia2][1]<<endl;
                cout<<"sugerencia 3:" << libros[sugerencia3][1]<<endl;

                salir= true;
                break;
            }
        }
        
            if(salir == false){
                char continuar = 'n';

                while(true) {
                    system("cls");
                    cout<<"No se encontro el libro que busca. Desea continuar? s/n ";
                    cin>>continuar;

        if (continuar == 's'|| continuar == 'S'; ){
            break;

            }else if(continuar == 'n' || continuar == 'N';){
                salir == true;
                break;
                
              }       
            }
        }
    }
    return;
  }
                


