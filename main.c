#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

int main()
{
    int h, m, s;
    int d=1; // delay of 1000 milliseconds and we will use it in the function sleep
    printf("Set time: \n");
    scanf("%02d%02d%02d", &h, &m, &s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR! PLEASE INPUT A PROPER TIME FORMAT. EX: 01:25:30\n");
        exit(0);
    }
    while(1) // this is an infinite loop and anything inside will repeat itself to infinity
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d", h,m,s); //time format is 00:00:00
        sleep(d); //slows down the while loop and makes it more like a real clock
        system("clear"); //clears the screen
    }
    return 0;
}