//
// Created by denovo on 2022/09/14.
//
#include <stdio.h>

void five10(){

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    float grade = (float)(a+b+c)/3;

    char good[] ="Good";

    char  bad[] ="Bad";

    char *Grade = grade>=91.5 ? "A" : 85.5<=grade&&grade<91.5 ? "B": 80.5<=grade&&grade<=85.5 ? "C" : "F";


    printf("%c",*Grade);
    printf("%s",a==100||b==100||c==100?good:"\0");

    printf("%s",a<60||b<60||c<60?bad:"\0");




    return;
}