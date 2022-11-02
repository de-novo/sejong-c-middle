//
// Created by denovo on 2022/09/28.
//

#include <stdio.h>
void six3T() {

    int n, r;
    scanf("%d %d",&n,&r);
//    printf("inputs n and r must satisfy '0 < r <= n'.");
//
    if(!(0<r&r<=n)){
        printf("inputs n and r must satisfy '0 < r <= n'.");
    } else{
//        printf("inputs n and r must satisfy '0 < r <= n'.");

        long long int P=1,PI=1;
        long long int C,H;

        long long int rto1=1,NpR_1toN=1;

        //P를 구한다
        for(int i =n ; i>=n-r+1;i--){
            P*=i;
        }
//
        //PI를 구한다
        for(int i =1; i<=r;i++){
            PI*=n;
        }
//
        //C와 H에 이용할 r!을 구한다.
        for(int i = 1; i<=r;i++){
            rto1*=i;
        }

//        // nCr = nPr/r!
        C = P/rto1;

        for(int i = n ; i<=n+r-1; i++){
            NpR_1toN*=i;
        }
//
//     H= (n +r -1)(n +r -2) ... n/r!
        H = NpR_1toN/rto1;

        printf("%dP%d=%lld\n",n,r,P);
        printf("%dPI%d=%lld\n",n,r,PI);
        printf("%dC%d=%lld\n",n,r,C);
        printf("%dH%d=%lld\n",n,r,H);
    }


}