#include <iostream>
#include <cstring>
#include "grafo.h"
#include <fstream>
using namespace std;



  

int main(int argc, char* argv[]) {

  Graph hotel;
  hotel.loadGraphList("hotelito.txt", 10, 10);
  hotel.loadGraphMat("hotelito.txt", 10, 10);

  int opcion;
  bool continua=true;

  while(continua){

    cout<<"\nMENU\n";
    cout<<"Escoge una opcion (escoger un numero entre el 1 y el 4)\n";
    cout<<"1. Ver mapa\n";
    cout<<"2. Escoger ruta\n";
    cout<<"3. ver grafo\n";
    cout<<"4. Salir\n";
    cout<<"Opcion: ";
    cin>>opcion;

    if(opcion==1){
      cout<<"\n\n\nMAPA DEL HOTEL SANDOS:  "<<endl;
      cout<<"Alberca de adultos: 0\n";
      cout<<"Lobby: 1\n";
      cout<<"Estacionamiento: 2\n";
      cout<<"Cenote: 3\n";
      cout<<"Spa & gym : 4\n";
      cout<<"Habitaciones familiares: 5\n";
      cout<<"Alberca con toboganes: 6\n";
      cout<<"Cancha de tennis: 7\n";
      cout<<"Alberca familiar: 8\n";
      cout<<"Playa: 9\n";

    }

    else if(opcion==2){
      int posicion,destino;
      cout<<"Introduzca el numero del lugar donde se encuentre(valores entre 0 y 9): ";
      cin>>posicion;
      cout<<"\nIntroduzca el numero del lugar donde desea ir(valores entre 0 y 9):";
      cin>>destino;
      cout<<endl;
      cout<<hotel.BFS(posicion,destino)<<endl;
      ofstream archivo;
      archivo.open("ruta_guardada.txt",ios::out);
      if(archivo.fail()){
      cout<<"No se pudo leer el archivo";
      exit(1);
      }
      archivo<<"\n";
      archivo<<hotel.BFS(posicion,destino)<<endl;
      archivo<<"\nMATRIZ"<<endl;
      archivo<<hotel.printAdjMat()<<endl;
      archivo<<"LISTA"<<endl;
      archivo<<hotel.printAdjList()<<endl;
      archivo.close();
      cout<<"Se guardo su ruta en un archivo de texto llamado ruta_guardada"<<endl;
    }
    else if(opcion==3){
      cout<<"AQUI SE PRESENTA LA MATRIZ DE ADYASENCIA\n";
      cout<<hotel.printAdjMat()<<endl;
      cout<<"AQUI SE PRESENTA LA LISTA DE ADYASENCIA\n";
      cout<<hotel.printAdjList();
      cout<<endl;

    }
    else if(opcion==4){
      cout<<"Usted ha salido";
      continua=false;
    }


    else{
      cout<<"Error, opcion invalida";
    }
  


  }
    

}
