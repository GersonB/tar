// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top(); // la funcion top() muestra el primer elemento que esta en la pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
   return mi_pila.size(); // la funcion size() devuelve el tamano de la pila (cuantos elementos tiene)
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
      while(!mi_pila.empty())
    {

    if(str==mi_pila.top())  // se verefica cada elemento de la pila y al encontrar str devuelve true y termina el ciclo
    return true;
    mi_pila.pop();
    }
    return false;
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor=mi_pila.top();  //se declara una variable int mayor y se iguala al primer elemento de la pila

    while(!mi_pila.empty())

    {
    if(mi_pila.top()==0){

    mayor=mi_pila.top();
    }
    if(mi_pila.top()> mayor){

    mayor=mi_pila.top();

    }
    mi_pila.pop();

    }
    return mayor;// la variable mayor va tomando cada elemento de la pila y los compara con los demas elementos al terminar el ciclo devueleve el mayor
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor=mi_pila.top();  //se declara una variable int mayor y se iguala al primer elemento de la pila

    while(!mi_pila.empty())

    {
    if(mi_pila.top()==0){

    menor=mi_pila.top();
    }
    if(mi_pila.top()< menor){

    menor=mi_pila.top();

    }
    mi_pila.pop();

    }
    return menor;// la variable menor va tomando cada elemento de la pila y los compara con los demas elementos al terminar el ciclo devueleve el menor
}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"
int contarLetraA(stack<char> mi_pila)
{
     int conta=0;  //se declara una variable contador de tipo int

char letra='a';//se declara una variale letra de tipo char que contiene la letra a buscar
    while( !mi_pila.empty()){
    if(letra==mi_pila.top())//se compara la variable letra con cada elemento de la pila
    conta ++;//cuando encuentra la letra "a" contador aumenta
    mi_pila.pop();


    }
return conta;//cuando termina el ciclo devuelve contador con la cantidad de letras"a" que encontro
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
