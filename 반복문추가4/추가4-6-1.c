

//
// Created by denovo on 2022/10/05.
//
//
// Created by denovo on 2022/10/05.
//

//소인수분해


#include <stdio.h>
void six1add4() {
   int n,m;
    scanf("%d %d",&n,&m);

    int n_r=0;
    int m_r=0;
    while (1){
        int k=n%10;
        if(k!=0){
            n_r=n_r*10+k;
        }
        if(k==n){
            break;
        }
        n/=10;
    }
    while (1){
        int k=m%10;
        if(k!=0){
            m_r=m_r*10+k;
        }
        if(k==m){
            break;
        }
        m/=10;
    }
    if(n_r>m_r){
        printf("%d",n_r-m_r);
    } else{
        printf("%d",m_r-n_r);

    }

}

