#include<stdio.h>
#include<stdlib.h>
typedef enum
{
    tea,
    coffee,
    juice,


}Menu;
int main()
{
    Menu mario =tea;
    Menu andrea= juice;
    printf("mario ordered :%d",mario);
    printf("andrea ordered : %d",andrea);
    return EXIT_SUCCESS;

}