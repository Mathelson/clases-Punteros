#include <stdlib.h>
#include "Person.h"



//static void initialize(Person* this, int age, int something);
static void initialize(Person* this, int age, int something);

/** \brief  Reseva espacio en meomoria para una nueva persona y la inicializa
 *
 * \param int age Edad de la persona
 * \param int something Otros datos
 * \return Person* Retorna un puntero a la persona o NULL en caso de error
 *
 */
//Person* person_new (int age, int something)
//{
//    Person* this = malloc(sizeof(Person));//MALLOC PARA UNA PERSONA PIDE MEMORRIA DINAMICA
//    //PIDE MEMORIA PARA DOS ENTEROS PORQUE LA ESTRUCTURA TIENE DENTRO DOS ENTEROS
//    if(this != NULL)//SI ES DISTINTO DE NULL
//        initialize(this,age,something);//INICIALIZA LA DIRECCION DE MEMORIA  LE PASA UNA EDAD Y ALGO, //THIS MEMORIA DE UNA VARIABLE
//
//    return this;//DEVULEVE UN PUNTERO DEL TIPO PERSONA//PIDIO MEMORIA DE MANERA DINAMICA Y ADEMAS TIENE DATOS
//}

Person* person_new (int age, int something)
{
 Person* this = malloc(sizeof(Person));
 if(this != NULL)
 {
     initialize(this,age,something);
       return this;
 }
}

/** \brief  Inicializa a una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \param int age Edad de la persona
 * \param int something Otros datos
 * \return void
 *
 */
static void initialize(Person* this, int age, int something)
{
    this->age = age;//EL AGE DE LA DERECHA PERTENECE A LA ESTRUCTURA
    this->something = something;
    persona_setName(this);
}

/** \brief  Setea la edad de una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \param int age Edad de la persona
 * \return void
 *
 */
void person_setAge(Person* this, int age)//TODAS LAS FUNCIONES A UN N TIPO DE DATO_serAge//RECIBE UN PUNTERO A PERSONA Y UNA EDAD
{
    if(age > 0)//PARA QUE LA EDAD SEA MAYOR A CERO
        this->age = age;//LO COLOCA EN EL CAMPO EDAD EN LA ESTRUCTURA PERSONA
                        //ENCAPSULADO//
                        //ALGO ROBUSTOS:
}
////////////////////////////////
////////////////////////////////
///////////////////////////////
void person_setAname(Person* this, char*nombre)
{
    if(nombre!=NULL)
    {
        this->nombre = nombre;
    }
}
/** \brief Obtiene la edad de una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \return int age Edad de la persona
 *
 */
int person_getAge(Person* this)
{
    return this->age;//recibe el puntero a la estructura edad
}
////////////////////////////////////////
////////////////////////////////////////
////////////////////////////////////////
void Person_getName(Person* this)
{
    return this->nombre;
}
void persona_setName(Person*this)
{
    char nombre[51];
    printf("\nNOMBRE");
    setbuf(stdin,NULL);
    scanf("%[^\n]",&nombre);
    return this->nombre;
}



/** \brief Libera el espacio ocupado por una persona recibida como parametro
 * \param Person* this Puntero a la persona
 * \return void
 *
 */
void person_free(Person * this) {
    // Do any other freeing required here.
    free(this);//
}
