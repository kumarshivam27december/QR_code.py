/*
***************dynamic memory allocation************************

Dynamic Memory Allocation:
malloc() -> Memory Allocation  
//for 20 byte malloc
------------------- if memory is available then return address else null
Void* malloc(size) => size=> Bytes

calloc() -> Continuous Memory Allocation
// for slices
realloc() ->  Reallocation of pre occupied memory
free() -> To release pre occupied memory.


*/
#include <stdio.h>
#include <malloc.h>
void main()
{
    int* age = (int*) malloc(1) ;
    int* ptr;// wild pointer   /* not allocating any value*/ // not associated with any memory
    int* ptr1 = NULL;// Null pointer better than wild pointer
    // generic pointer can be converted 
    *age = 200;
    printf("%d",*age);
    free(age);


printf("\n%d",*age);//Dangling pointer   // associated with memory




}

//passing pointer means double pointer