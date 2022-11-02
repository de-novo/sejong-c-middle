//
//#include <stdio.h>
//void six1_2T() {
//    //입력 받을 횟수를 입력받는다
//    int n;
//    scanf("%d",&n);
//
//    //가장많은 약수를 갖는것을 저장할 변수를 선언한다.
//    int Many = 0;
//    int AN = 0;
//    //입력받은 횟수만큼 반복문을 돌려준다.
//
//    for(int i = 0 ;i<n;i++){
//        //약수를 구할수를 입력받는다.
//        int M;
//        scanf("%d",&M);
//        printf("%d:",M);
//        //약수의 개수를 구해줄 변수를 초기화한다.
//        int C=0;
//        //약수를 구하고 출력해준다.
//
//        for(int j = 1; j<=M;j++){
//            if(M%j==0){
//                printf(" %d",j);
//                C++;
//            }
//        }
//        if (C>Many){
//            Many =C;
//            AN = M;
//        }
//        printf(" %d",C);
//        printf("\n");
//
//
//
//
//
//
//
//
//
//    }
//    printf("%d",AN);
//
//
//
//
//}