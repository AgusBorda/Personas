#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{
    Personaptr p1 = cargarpersona("Agus", 18, 1.84);
    mostrarpersona(p1);
    return 0;
}

