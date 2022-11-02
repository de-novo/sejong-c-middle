

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//


#include <stdio.h>
void six8add4() {
    int n;
    scanf("%d",&n);

    while (1){
        int c=0;

        for(int i =2; i<=n;i++){
            for(int j =2; j<=i;j++){
                if(i%j==0&&i!=j){
                    break;
                } else if(i==j){
                    if(n%i==0){
                        while(1){

                            n/=i;
                            c++;
                            if(n%i!=0){
                                break;
                            }
                        }
                        printf("%d %d\n",i,c);
                        c=0;
                    }
                }

            }


        }


        if(n==1){
            break;
        }
    }

}



