
#include <stdio.h>
void six12pr() {
    int n ;
    scanf("%d",&n);

    for(int j=0; j<n;j++){
        printf("   ");

    }
    for(int i =1; i<=31; i++){

        printf("%3.0d",i);
        if((i+n)%7==0){
            printf("\n");
        }

    }





}