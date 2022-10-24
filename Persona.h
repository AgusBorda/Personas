#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct persona;
typedef struct persona * Personaptr;
void mostrarpersona(Personaptr p);
Personaptr cargarpersona(char n[20], int e, float d);

#endif // PERSONA_H_INCLUDED
