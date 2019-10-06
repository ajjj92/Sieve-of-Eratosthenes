//@attejantunen
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "eratosthenes.h"

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    Solmu *pAlku = NULL;
    pAlku = FillList(pAlku, n); 
    pAlku = Delete(pAlku, n);
    Tulosta(pAlku);
    Clear(pAlku);
    return 0;
}

