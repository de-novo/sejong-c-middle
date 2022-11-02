

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//*==42
//a ==97

#include <stdio.h>
void six2add4() {
    while (1){
        char c;
        scanf("%c",&c);

        if('a'<=c&&c<='z'){
            c +=('A'-'a');
        }


        printf("%c",c);
        if(c=='*'){
            break;
        }


    }
}

