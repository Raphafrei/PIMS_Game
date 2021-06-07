#include <stdio.h>
 
void main(){
    int nMax = 0, multiplo = 0, i;
 
    printf("Insira qual sera o valor maximo: \n");
    scanf("%d", &nMax);
 
    printf("Insira qual sera o valor multiplo: \n");
    scanf("%d", &multiplo);
 
    for(i = 0; i <= nMax; i++){
        if(i % multiplo != 0){
            printf(" %d ", i);
        }else
            PIM(); 
    }
 
    system("pause");
}
 
void PIM(){
    printf(" PIM\n");
}