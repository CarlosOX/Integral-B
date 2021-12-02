#include <iostream>
#include <cstring>
#include "grafo.h"

using namespace std;

int main(int argc, char* argv[]) {

    Graph hotel;

    string hotel_ans;
   
    hotel.loadGraphList("hotelito.txt", 10, 10);

    hotel.loadGraphMat("hotelito.txt", 10, 10);
  

    //hotel.printAdjList()
    hotel_ans ="vertex 0 : 1 3 \nvertex 1 : 0 2 3 4 \nvertex 2 : 1 8 \nvertex 3 : 0 1 5 \nvertex 4 : 1 5 7 \nvertex 5 : 3 4 6 \nvertex 6 : 5 7 9 \nvertex 7 : 4 6 9 \nvertex 8 : 2 9 \nvertex 9 : 6 7 8";
    cout << "\n" <<"1.- esperada\n" << hotel_ans << "\n programa\n" << hotel.printAdjList() << "\n";
   

    //hotel.printAdjMat()
    hotel_ans = "0 1 0 1 0 0 0 0 0 0 \n1 0 1 1 1 0 0 0 0 0 \n0 1 0 0 0 0 0 0 1 0 \n1 1 0 0 0 1 0 0 0 0 \n0 1 0 0 0 1 0 1 0 0 \n0 0 0 1 1 0 1 0 0 0 \n0 0 0 0 0 1 0 1 0 1 \n0 0 0 0 1 0 1 0 0 1 \n0 0 1 0 0 0 0 0 0 1 \n0 0 0 0 0 0 1 1 1 0";
    cout << "\n" <<"2.- esperada\n" << hotel_ans << "\n programa \n" << hotel.printAdjMat() << "\n";
   

    //hotel.BFS(0,3);
    hotel_ans = "CAMINO MAS CORTO : 0 3";
    cout << "\n" <<"3.- esperada  " << hotel_ans<<"\n programa " << hotel.BFS(0,3) << "\n";
    cout <<	( !hotel_ans.compare(hotel.BFS(0,3)) ? "success\n" : "fail\n");
   //hotel.BFS(0,9);
    hotel_ans = "CAMINO MAS CORTO : 0 3";
    cout << "\n" <<"3.- esperada  " << hotel_ans<<"\n programa " << hotel.BFS(0,3) << "\n";
    cout <<	( !hotel_ans.compare(hotel.BFS(0,9)) ? "success\n" : "fail\n");
}
