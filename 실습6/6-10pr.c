
#include <stdio.h>
void six10pr() {
    int n;
    char c;
    scanf("%c %d",&c,&n);

    for(int i =1 ; i <=n*2;i++){
        if(i%2!=0){
            printf(" ");
        } else{

            printf("%c",c);
        }

    }
}