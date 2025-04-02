#include "Aresta.h"
#include "Grafo.h"
#include <iostream>

using namespace std;

int main(){
    try{
        int num_vertices;
        cout<<"digite o numero de vertices: ";
        cin >> num_vertices;

        Grafo g(num_vertices);

        cout<<"Numero de vertices: "<<g.num_vertices()<<"\n";
        cout<<"Numero de aresta: "<<g.num_arestas()<<"\n";


        //testar se tem a aresta 2 3
        Aresta e(2,3);
        cout<<"tem aresta 2 3? " <<
        g.tem_arestas(e)<<"\n";

        cout<<"tem aresta 2 3? " << g.tem_arestas(Aresta(2,3)) << "\n";

        cout<<"\n";
        g.insere_aresta(Aresta(3,2));
        cout<<"Numero de vertices:" <<g.num_vertices() <<"\n";
        cout<<"numero de arestas"<< g.num_arestas() <<"\n";
        cout<<"tem arestas 3 2? "<<
        g.tem_arestas(Aresta(3, 2))<<"\n";

        cout<<"\n";
        g.remove_aresta(Aresta(1,2));
        cout<<"Numero de vertice: " <<g.num_vertices()<< "\n";
        cout<< "Numero de aresta:  "<<g.num_arestas()<<"\n" ;
        cout <<"tem aresta 1 2 ? "<< g.tem_arestas(Aresta(1,2))<< "\n";

        cout<<"\n";
        g.imprime();

    }catch (const exception&e){
        cerr<<"exception: "<<e.what()<<"\n";
    }
    return 0;
}