
#include <stdio.h>
void six13pr() {
   int n;
    scanf("%d",&n);
    int k = 1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            if(j<i){
                printf("   ");
            } else{
                printf("%3.0d",k);
                k++;
            }
        }
        printf("\n");


    }





}