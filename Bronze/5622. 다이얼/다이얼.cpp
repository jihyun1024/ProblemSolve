#include <stdio.h>

int main(void)
{
    char Arr[16];
    int Count = 0;
    fgets(Arr, sizeof(Arr), stdin);
 
    for(int i=0;;i++){
        if(Arr[i] == '\0')break;
        if(Arr[i]>=65 && Arr[i]<=67)Count+=3;
        else if(Arr[i]>=68 && Arr[i]<=70)Count+=4;
        else if(Arr[i]>=71 && Arr[i]<=73)Count+=5;
        else if(Arr[i]>=74 && Arr[i]<=76)Count+=6;
        else if(Arr[i]>=77 && Arr[i]<=79)Count+=7;
        else if(Arr[i]>=80 && Arr[i]<=83)Count+=8;
        else if(Arr[i]>=84 && Arr[i]<=86)Count+=9;
        else if(Arr[i]>=87 && Arr[i]<=90)Count+=10;
    }
    printf("%d",Count);
    return 0;
}
