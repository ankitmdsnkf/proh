#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for french  & i for india :");
    char ch;
    scanf("%cc",&ch);
    if (ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namasre\n");

}
void bonjour(){
    printf("bonjour\n");
}