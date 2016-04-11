#include <stdio.h>

#define I 0
#define V 1
#define X 2
#define L 3
#define C 4

int R[5];

void unidades(int n){
    switch(n){
        case 1: R[I] += 1; break;
        case 2: R[I] += 2; break;
        case 3: R[I] += 3; break;
        case 4: R[I] += 1; R[V]+=1; break;
        case 5: R[V] += 1; break;
        case 6: R[V] += 1; R[I]+=1 break;
        case 7: R[V] += 1; R[I]+=2 break;
        case 8: R[V] += 1; R[I]+=3 break;
        case 9: R[I] += 1; R[X]+=1 break;
    }
}

void decenas(int n){
    switch(n){
        case 1: R[X] += 1; break;
        case 2: R[X] += 2; break;
        case 3: R[X] += 3; break;
        case 4: R[X] += 1; R[L]+=1; break;
        case 5: R[L] += 1; break;
        case 6: R[L] += 1; R[X]+=1 break;
        case 7: R[L] += 1; R[X]+=2 break;
        case 8: R[L] += 1; R[X]+=3 break;
        case 9: R[X] += 1; R[C]+=1 break;
        case 10: R[C] += 1; break;
    }
}





int main()
{

    return 0;
}
