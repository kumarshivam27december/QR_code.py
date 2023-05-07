#include <stdio.h>
#include <malloc.h>
void main()
{
    int a = 10;
    float f = 10.10;
    int* ptr;
    ptr = &a;
    // printf("\n%d",ptr);
    // we will use instead of above
    //generic means void *
    printf("\n%d",*(int*)ptr);
    ptr=&f;
    printf("\n%f",*(float*)ptr);



}