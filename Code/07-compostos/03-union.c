#include <stdio.h>
#include <string.h>

union Identidade  {
    int  ifp;
    int  cpf;
    char nome[256];
};

void main (void) {
    union Identidade i1;
    i1.ifp = 117766118;

    union Identidade i2;
    i2.cpf = 1688833355;

    union Identidade i3;
    strcpy(i3.nome, "Francisco Sant'Anna");

    printf("> %s %d %s\n", i1.nome, i2.cpf, i3.nome);
}
