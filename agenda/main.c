#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    Node* agenda = criarAgenda();
    processamento(agenda);
    return 0;
}
