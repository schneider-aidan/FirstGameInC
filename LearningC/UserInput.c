#include <stdio.h>

int main(){
    int pizzaSlices;

    printf("How many pizza slices would you like?\n");

    //& means "address of"
    scanf("%d", &pizzaSlices);

    if(pizzaSlices>4){
        printf("Wow, %d slices is a lot for one person.\n", pizzaSlices);
    }else if(pizzaSlices<0){
        printf("It is impossible to have %d slices.\n", pizzaSlices);
    }else if(pizzaSlices<=1){
        printf("I think %d slices is too little.\n", pizzaSlices);
    }else{
        printf("%d slices is just the right amount.\n", pizzaSlices);
    }
}