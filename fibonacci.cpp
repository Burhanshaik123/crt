// You are using GCC
#include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
       return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ans=fib(n);
    printf("%d",ans);
    
    return 0;
}