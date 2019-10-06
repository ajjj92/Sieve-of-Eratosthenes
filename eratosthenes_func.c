//@attejantunen
//@attejantunen
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "eratosthenes.h"

Solmu *CreateNode() {
    Solmu *tmp;
    tmp = (Solmu*)malloc(sizeof(Solmu));
    tmp->pNext= NULL;
    return tmp;
}
Solmu *Delete(Solmu *pAlku, int n) {

    Solmu *previousP = pAlku;
    Solmu *ptr = previousP->pNext;
    Solmu *tmp;
    
    while(ptr!=NULL) {

        if(ptr->number % pAlku->number == 0 && ptr->number > pAlku->number) {
            tmp = ptr;
            previousP->pNext=ptr->pNext;
            ptr=ptr->pNext;
            free(tmp);
        }else {
            previousP=previousP->pNext;
            ptr=ptr->pNext;               
        }
        
    }
    ptr = pAlku->pNext;
    if (ptr->number*ptr->number>n) {
        return pAlku;
    }else {
        Delete(ptr,n);
    }
    return pAlku;

}

void Clear(Solmu *pAlku) {
    Solmu *ptr = pAlku;
    while (ptr != NULL) {
        pAlku = ptr->pNext;
        free(ptr);
        ptr = pAlku;
        }
    printf("Muisti vapautettu.\n");
   
}
Solmu *AddLista(Solmu *pAlku, int value) {
    Solmu *tmp, *ptr;
    tmp = CreateNode();
    tmp->number=value;
    if(pAlku == NULL) {
        pAlku = tmp;
    } else {
        ptr = pAlku;
        while(ptr->pNext != NULL) {
            ptr = ptr->pNext;
        }
        ptr->pNext=tmp;
    }
    
    return pAlku;
}


Solmu *FillList(Solmu *pAlku, int n) {
    Solmu *ptr = pAlku;
    for (int i=2; i<=n; i++) {
        ptr = AddLista(ptr, i);
    }
    return ptr;
}

void Tulosta(Solmu *pAlku) {
    Solmu *ptr = pAlku;
    while (ptr != NULL) {
        printf("%d\n", ptr->number);
        ptr = ptr->pNext;
    }
}
