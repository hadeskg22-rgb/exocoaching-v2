
#include <stdio.h>
int main() {
    int x,cpc,cpp,nbrc,sommep,j,i,total,sommoy;
 float moy,pourcentage;
    do {
        printf("Entrez votre age : ");
        scanf("%d", &x);
    } while (x <= 0 || x % 2 != 0);
    sommep=0;
    nbrc=0;
    cpp=0;
    sommoy=0;
    cptimp=0;

    for(i=x;i<=x*3;i++){
        cpc=0;
        sommep=0;
        total++;
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
            sommoy=sommoy+i;

     }
     if(i % j != 0 && i % 7 == 0 && i % 3 = 0 ){
            cptimp++;

     }

    }





}
printf("%d",cpp);




return 0;
}
