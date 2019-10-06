#ifndef _ERATOSTHENESH
#define _ERATOSTHENESH_

struct Node {
    int number;
    struct Node *pNext;
}; 
typedef struct Node Solmu;

void Clear(Solmu *pAlku);
void Tulosta(Solmu *pAlku);
Solmu *FillList(Solmu *pAlku, int n);
Solmu *Delete(Solmu *pAlku, int n);
Solmu *AddLista(Solmu *pAlku, int value);
Solmu *CreateNode();

#endif

