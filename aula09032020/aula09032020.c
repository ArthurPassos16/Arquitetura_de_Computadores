#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#define MAX 10

int main() {
    int i;
    unsigned long int *p;
    unsigned char *q;
    unsigned long int vetor[MAX] = { 3,30,300,3000,30000,300000,3000000,30000000,300000000,3000000000 };

    p = vetor;
    q = (unsigned char *)vetor;
    
    for (i = 0; i < MAX; i++) {
        printf("\n vet int=<%ud> vet hex=<%x> p=<%x> *p=<%x> q=<%x> *q=<%x> ", 
                        vetor[i], vetor[i], p + i ,*(p + i), q + i ,*(q + i));
    }
    return 0;
}