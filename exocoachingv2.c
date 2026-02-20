
#include <stdio.h>
int main() {
    int x,cpc,cpp,nbrc,sommep,j,i,total,sommoy,cptimp;
 float moy,pourcentage;
    do {
        printf("Entrez un nombre : ");
        scanf("%d", &x);
    } while (x <= 0 || x % 2 == 0);

    nbrc=0;
    cpp=0;
    sommoy=0;
    cptimp=0;

    for(i=x;i<=x*3;i++){
        cpc=0;
        sommep=0;
        total++;
        for(j=1;j<=i;j++){
            if (i%j==0){
            cpc++;
            sommep=sommep+j;
        }
        }
        if(cpc>2){
            nbrc++;
        }
     if (sommep-i==i){
            cpp++;
            sommoy=sommoy+i;

     }
     if (i % 2 != 0 && i % 7 == 0 && i % 3 == 0 ){
            cptimp++;

     }

    }

if(cpp != 0)
        moy = (float)sommoy / cpp;
    else
        moy = 0;

pourcentage= (float)nbrc / total * 100;
printf("%f est la moyenne\n",moy);
printf("%f est le pourcentage\n",pourcentage);
printf("%d est le nombre de nomnre impaire multiple de 7 et divisible par 3\n",cptimp);
puts("merci beaucoup");



return 0;
}
