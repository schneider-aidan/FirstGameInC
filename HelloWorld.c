#include <stdio.h>

int main(){

    //Print text

    /*
    Print Text
    */
    printf("Hello World!\n");
    printf("Hello World!\n");


    int x = 10;
    float decimal = 3.141592; // 4 bytes (32 bits) 6-7 digits %f
    double longNum = 3.141592653589793; // 8 bytes (64 bits) 15-16 digits %lf
    int reallyLongNum = 314159265;
    char letter = 'B';
    char Strings[] = "Cars"; //String


    printf("%10.2s\n", Strings);
    Strings[0] = letter;
    printf("My favorite word is %s.\n",Strings);

    //long float = double
    //must use format specifier to extend number of decimal places
    printf("%lf\n", longNum);

    float num = decimal * longNum;
    printf("%lf\n",num);

    unsigned long long int vLNum = 18446744073709551615; //8 bytes %llu

    //%lld if signed
    printf("%llu\n",vLNum);

    //num before decimal is width
    //num after is digits after decimal
    //- is left aligned
    printf("%f\n",decimal);
    printf("%15.10f\n",decimal);
    printf("%-10.1f",decimal);
    printf("%.3f\n",decimal);


    double z = reallyLongNum / (double) x;
    printf("%lf", z);

    return 0;
}