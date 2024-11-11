#include<stdio.h>

int minimum(int a,int b){
    int min=a;
    if(a>b) min=b;
    return min;
}
int main(){
printf("%d",minimum(50,10));
}
