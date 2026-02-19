
#include <stdio.h>
int main() {
    int x,cpc,cpp,nbrc,sommep,j,i;

    do {
        printf("Entrez votre age : ");
        scanf("%d", &x);
    } while (x <= 0 || x % 2 != 0);
    sommep=0;

    for(i=1;i<=x*3;i++){
        cpc=0;
        sommep=0;
        for(j=1;j<i;j++){
            if (i%j==0){
            cpc++;
            sommep=sommep+j;
        }
        if(cpc>2){
            nbrc++;
        }
     if (sommep==i){
            cpp++;

     }

    }
printf("%d",cpp);


    return 0;
}






}
