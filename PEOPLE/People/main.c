#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
/**SET NOMBRE_ GET NAME BUCLE SETEAR EL NOMBRE Y TRAER EL NOMBRE ALTA Y LISTAR RECORRE EL DE TRES GET NAME*/

int main()
{
    Person* personArray[50];//ARRAY DE 50 PUNTEROS  DEL TIPO PERSONA//MEMORIA ESTATICA
    int i;
    for(i = 0; i < 3; i++)
    {


        personArray[i] = person_new(i,i);//A CADA ELEMENTO DEL ARRAY LE ASIGNA UN ELEMENTO UNA PERSONA 0,0
                                      //
    }
    for(i = 0; i < 3; i++)
    {
        person_setAge(personArray[i],i-4);//SETEA LA EDAD COLOCA UN DATO
    }
    for(i = 0; i < 3; i++)
    {
        printf("\nAge: %2d nombre %s",person_getAge(personArray[i]));//person Array person_get devuelve el otro lo muestra
    }
    scanf(" ");
    return 0;
}

