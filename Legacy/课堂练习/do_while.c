#include <stdio.h>
 
int main ()
{
    int i;

    for(;;) {
        printf("这将一直进行下去");
        i = getch();
        if(i == 'X' || i == 'x') {
            break;
        }

    }
}