#include <stdio.h>

int main(){
//name variable where name is stored
char name[50];

//Ask name
printf("What is your name? ");
//Read terminal
scanf("%s", name);

//OUTPUT: display hello and name
printf("Hello %s\n", name);
return 0;
}

