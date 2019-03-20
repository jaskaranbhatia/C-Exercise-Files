#include<stdio.h>

void say_hello();

int main(void){
    int i;
    for(i=0;i<5;i++){
        say_hello();
    }
}

void say_hello(){
    static int num=1;
    printf("%d\n",num);
    num++;
}
