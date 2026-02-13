#include<stdio.h>
int main (){
    int x,n,som,cpt,imp ;
    float moy;
    do{
            printf("saisir n entiers : ");
            scanf("%d" ,&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            printf("saisir un entier negatif :");
            scanf("%d",&x);
        }while(x>0);
        if (x%2==0){
            som=som+x;
           cpt++;
        }
    }

    moy = som/cpt;
    printf("le moyenne est :%f",moy) ;
    imp==n-som;
    printf(" les nombre imp sont : %d" ,imp);



return 0 ;
}
