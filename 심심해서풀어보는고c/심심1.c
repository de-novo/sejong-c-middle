

#include <stdio.h>


int* MAX(int ar[]);
int* MIN(int ar[]);

void simsim1(){


    int N ;

    scanf("%d",&N);

    for(int i = 0 ; i<N; i++){
        int ar[100]={0};
        for (int j=0 ; j<100; ++j){
            int n = 0;

            scanf("%d",&n);


            if (n == 0 ){

                printf("%d %d\n", *MAX(ar),*MIN(ar) );
                break;
            }

            *(ar+j)= n;




        }

    }


//    MAX(a);


    return;
}

int* MAX(int ar[]){

    int * a = ar ;
    int * p;
//    printf("ar : %d \n", sizeof(ar));
//
//    printf("a : %d \n",a);
//    printf("ar : %d \n",ar+1);
    int max=*ar;
//    printf("ar : %d \n",max);

    for(p=ar ;p <ar+sizeof(ar); p++){
        if(max<*p && *p != 0){
            a =  p ;
            max = *p;

        }

    }

    return a;
}

int* MIN(int ar[]){

int * a = ar ;
int * p;

int min=*ar;

for(p=ar ;p <ar+sizeof(ar) ; p++){

    if(min>*p && *p != 0){
        a =  p ;
        min = *p;
    }
}

return a;
};