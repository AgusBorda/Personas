#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
struct persona{
char nombre[20];
int edad;
float altura;
};

void mostrarpersona(Personaptr p){
    printf("\nPERSONA:\n\n");
    printf("NOMBRE: %s\n",p->nombre);
    printf("EDAD: %d\n", p->edad);
    printf("DALTURA: %f.2\n", p->altura);

}
Personaptr cargarpersona(char n[20], int e, float d){
Personaptr p;
p->altura=d;
p->edad=e;
strcpy(p->nombre, n);
return p;
};
