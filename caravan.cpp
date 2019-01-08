/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

#include "caravan.h"
#include "stdlib.h"
#include "general.h"

typedef struct _node{
  void* pack_animal;
  struct _node* next;
}Node;

struct CaravanImplementation{
  Node* head;
  int length = 0;
};

Caravan new_caravan()
{
  return (Caravan) malloc(sizeof(Caravan));
}

/**
* @return Die Länge einer Karawane, d.h., die Anzahl der Tiere in der Karawane.
*/
int get_length(Caravan caravan)
{
  return caravan -> length;
}

/**
* Entfernt alle Tiere aus einer Karawane und löscht die Karawane.
*/
void delete_caravan(Caravan caravan)
{
  Node* currentNode = caravan -> head;
  Node* toBeDeleted;
  while(currentNode != 0)
  {
    toBeDeleted = currentNode;
    currentNode = currentNode -> next;
    sfree(toBeDeleted);
  }
  sfree(caravan);
}

/**
* Fügt e testin Packtier zu einer Karawane hinzu.
*/
void add_pack_animal(Caravan caravan, PackAnimal animal)
{
    if(caravan == 0 || animal == 0)
    {
      return;
    }
    if(get_caravan(animal) != 0)
    {
      remove_from_caravan(animal, get_caravan(animal));
    }
    Node* newNode = (Node*) malloc(sizeof(Node));
    add_to_caravan(animal, caravan);
    newNode -> pack_animal = animal;
    newNode -> next = caravan -> head;
    caravan -> head = newNode;
    caravan -> length++;
}

/**
* Entfernt ein Packtier aus einer Karawane.
*/
void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  if(caravan->head==0||animal==0)
  {
    return;
  }
  if(caravan->head->pack_animal==animal)
  {
    Node* toBeDeleted=caravan->head;
    caravan->head=caravan->head->next;
    sfree(toBeDeleted);
  }
  else{
    Node* currNode=caravan->head;
    while(currNode->next != 0 && currNode->next->pack_animal != animal)
    {
      currNode = currNode->next;
    }

    if(currNode->next != 0)
    {
      Node* toBeDeleted=currNode->next;
      currNode->next=currNode->next->next;
      sfree(toBeDeleted);
    }
  }
  add_to_caravan(animal,0);
}

/**
* @return Die Geschwindigkeit einer Karawane. Diese richtet sich nach der Geschwindigkeit des
* langsamsten Tiers in der Karawane.
*/
int get_caravan_speed(Caravan caravan)
{
  return 0;
}

/**
* @return Die Gesamtanzahl der Ballen einer Karawane.
*/
int get_caravan_load(Caravan caravan)
{
  return 0;
}

/**
* Entl&auml;dt die gesamte Karawane. D.h. es wird jedes Tier in der Karawane von seinen Ballen
* befreit.
*/
void unload(Caravan caravan)
{

}

/**
* Verteilt die Last der Ballen so auf die einzelnen Tiere, dass die Geschwindigkeit der Karawane
* maximal ist.
*/
void optimize_load(Caravan caravan)
{

}
