
#include <stdio.h>
void six16pr() {
    int c = 0;
    for (int i=2; i<=50; i++){
        for(int j=2; j<=i;j++){
            if(i%j==0&&i!=j){
                break;
            } else if(i==j){

                printf(" %d",i);
                c++;
                if(c%5==0){
                    printf("\n");
                }
            }
        }


    }





}