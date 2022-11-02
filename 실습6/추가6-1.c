//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

#include <stdio.h>
void six1add() {
    char prev=0, ch =0;
    int cnt1=0, cnt2=0;

    scanf("%c",&ch);


    while (1){
        prev=ch;
        scanf("%c",&ch);
        if(ch=='.'){
            break;
        }
        if(prev=='d'&&ch=='o'){
            cnt1++;
        }
        if(prev=='r'&&ch=='e'){
            cnt2++;
        }


    }
    printf("do=%d\n",cnt1);
    printf("re=%d\n",cnt2);
}

