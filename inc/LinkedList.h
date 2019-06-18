/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __LINKEDLIST
#define __LINKEDLIST
struct Node
{
    void* pElement;
    struct Node* pNextNode;
}typedef Node;

struct LinkedList
{
    Node* pFirstNode;
    int size;
}typedef LinkedList;
#endif



//Publicas
LinkedList* ll_newLinkedList(void);
int ll_len(LinkedList* this);
Node* test_getNode(LinkedList* this, int nodeIndex);//
int test_addNode(LinkedList* this, int nodeIndex,void* pElement);
int ll_add(LinkedList* this, void* pElement); // agrega un elemento en el len (al final)
void* ll_get(LinkedList* this, int index); // hace lo mismo que el getNode pero devuelve el elemento.
int ll_set(LinkedList* this, int index,void* pElement); //
int ll_remove(LinkedList* this,int index); //hacer un free y decremetanr el size
int ll_clear(LinkedList* this);//recorrer la lista desde el 0 hasat que de NULL
int ll_deleteLinkedList(LinkedList* this); //vaciarla con el clear y hacer un free del linkedlist
int ll_indexOf(LinkedList* this, void* pElement); //recorrer la lista y encontrar el que nos pasaron por parametro, de 0 alen evaluanto element y retorna i
int ll_isEmpty(LinkedList* this); //
int ll_push(LinkedList* this, int index, void* pElement); //
void* ll_pop(LinkedList* this,int index); // get del elemento, lo conserva en un aux y hace el remove. (get + remove)
int ll_contains(LinkedList* this, void* pElement); //usamos indexOF y devolvemos V o F
int ll_containsAll(LinkedList* this,LinkedList* this2);// recorrer this y preg si dentro estan los elementos de la lista this2
LinkedList* ll_subList(LinkedList* this,int from,int to); // construir un arraylist, construir otro y agregarles lo del original, get de lista vieja ya dd de lista nueva.
LinkedList* ll_clone(LinkedList* this); //una lista nueva que copia todos lo de la lista snterior
int ll_sort(LinkedList* this, int (*pFunc)(void* ,void*), int order);// ordenamiento, poria ser burbujeo. evaluar pfunc evaluar -1, 0 o 1 t ver si hacer o no el swap.

//filter parecida a clone, pero antes de agregarlo llama a la funcion que recibi por parametro y segun que le dice(V o F) lo agrega o no.
//map recorrer el array, y por cada elemento del array, llamas a funcion recibida (map recibe el array y la funcion)
//reduce
