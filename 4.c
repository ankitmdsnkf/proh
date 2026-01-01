#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    printf("reverse number is : \n") ;
    for (int i = a; i >= 1; i--){
        printf("%d\n",i);

    }
    return 0;
}
