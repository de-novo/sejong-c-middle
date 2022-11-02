
#include <stdio.h>
void six11pr() {
 int e =0 ;
 int o = 0;
 for(int i =1 ; i <=10;i++){
    if(i%2==0){
        e+=i;
    } else{
        o+=i;
    }
 }
    printf("%d\n",o);
    printf("%d",e);
}