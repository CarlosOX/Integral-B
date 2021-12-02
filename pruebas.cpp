#include <iostream>
#include <cstring>
#include "grafo.h"

using namespace std;

int main(int argc, char* argv[]) {

    Graph hotel;

    string hotel_ans, hotel_ans_2;
   
    hotel.loadGraphList("hotelito.txt", 10, 10);

    hotel.loadGraphMat("hotelito.txt", 10, 10);
  

    //hotel.printAdjList()
    g_ans ="vertex 0 : 1 3 \nvertex 1 : 0 2 3 4 \nvertex 2 : 1 8 \nvertex 3 : 0 1 5 \nvertex 4 : 1 5 7 \nvertex 5 : 3 4 6 \nvertex 6 : 5 7 9 \nvertex 7 : 4 6 9 \nvertex 8 : 2 9 \nvertex 9 : 6 7 8";
    cout << "\n" <<"1.- esperada " << g_ans << "\n programa " << g.printAdjList() << "\n";
    cout <<	(!g_ans.compare(g.printAdjList()) ? "success\n" : "fail\n");

    //hotel.printAdjMat()
    g_ans = "0 1 0 0 1 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 1 1 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 ";
    cout << "\n" <<"3.- esperada " << g_ans << "\n programa " << g.printAdjMat() << "\n";
    cout <<	(!g_ans.compare(g.printAdjMat()) ? "success\n" : "fail\n");

  
    //hotel.DFS(0,3);
    g_ans = "visited: 0 4 5 1 3 path: 0 1 3";
    g_ans_2 = "visited: 0 1 2 3 path: 0 1 3";
    cout << "\n" <<"5.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << g.DFS(0,3) << "\n";
    cout <<	( (!g_ans.compare(g.DFS(0,3)) || !g_ans_2.compare(g.DFS(0,3))) ? "success\n" : "fail\n");


    //hotel.BFS(0,3);
    g_ans = "visited: 0 1 4 2 3 path: 0 1 3";
    g_ans_2 = "visited: 0 4 1 5 3 path: 0 1 3";
    cout << "\n" <<"7.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << g.BFS(0,3) << "\n";
    cout <<	(( !g_ans.compare(g.BFS(0,3)) || !g_ans_2.compare(g.BFS(0,3))) ? "success\n" : "fail\n");

   

}
