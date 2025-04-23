#include<stdio.h>
#include<math.h>
int main(){

    int  base,intervalo1,intervalof,i,soma=0;

         printf("digite o numero base\t");
         scanf("%d",&base);
         printf("\nescreva ointervalo1 e intervalof\t");
         scanf("%d %d",&intervalo1,&intervalof);
         i=intervalo1;

         while(i<=intervalof){
            if(i%base==0){
                soma=soma+i;
            }
            i++;

         }

         printf("a soma e %d ",soma);
         return 0;
}
