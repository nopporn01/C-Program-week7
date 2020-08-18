#include<stdio.h>
void message();
void cat();

void main(){
    int animal=5;
    printf("hello world\n");
    printf("%i",animal);
    message();
    cat();
}
void message(){
    printf("we can take mor sub function");
}
void cat(){
    printf("I LOVE MY CAT\n");
}

