#include<stdio.h>
#include<math.h>
int main(){

    float altura,largura,area,tinta;
    printf("altura ");
    scanf("%f",&altura);
    printf("\nlargura ");
    scanf("%f",&largura);

    area=altura*largura;
    tinta=ceil(area/2);

    printf("voce vai precisar de %.0f litros e sua area e %.1f",tinta,area);
    return 0;
}
