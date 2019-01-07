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
  //TO_DO
  sfree(caravan);
}

/**
* Fügt ein Packtier zu einer Karawane hinzu.
*/
void add_pack_animal(Caravan caravan, PackAnimal animal)
{
    if(caravan == 0 || animal == 0)
    {
      return;
    }
    Node* newNode = (Node*) malloc(sizeof(Node));
    //animal -> caravan = caravan;
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
