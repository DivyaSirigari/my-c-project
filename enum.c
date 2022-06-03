#include<stdio.h>
#include<stdlib.h>

enum months
{
 JAN=1,
 FEB,
 MAR,
 APR,
 MAY,
 JUN,
 JUL,
 AUG,
 SEP,
 OCT,
 NOV,
 DEC,   
};
int main()
{
    enum months myfavoritemonth= MAY;
    enum months myworstmonth=MAR;
    printf("Andears favorite month: %d",myfavoritemonth);
    printf("Andrea woest month:%d",myworstmonth);
    return EXIT_SUCCESS;
}
