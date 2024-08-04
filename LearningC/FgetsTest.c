#include <stdio.h>
#include <string.h>

int main(){
    char name[20];

    printf("What is your full name? ");

    //gets next 20 characters or full line whichever is shorter
    fgets(name, 20, stdin);

    //Remove Newline character when taking string input
    name[strlen(name)-1] = '\0';

    printf("\nYour name is %s.\n", name);
}