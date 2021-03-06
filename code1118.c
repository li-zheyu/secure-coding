/* Implement 
1. Valid Null pointer check for allocated memeory
2. Fix missing variable/pointer initialization
3. Fix Memory leak for allocated memory*/
#include <stdlib.h> 
#include <stdio.h> 
  
typedef struct buf_t buf; 
struct buf_t { 
    int *mem; 
}; 
  
  
int main(int argc, char *argv[]) 
{ 
    buf buffer = {.mem = (int *)NULL}; 
    buffer.mem = (int *)malloc(2*sizeof(int));
    // initialize variable 
    buffer.mem[0]=1;
    buffer.mem[1]=2;
    //check Null pointer
    if(buffer.mem)    /* FIX */
        printf("%d %d\n", buffer.mem[0], buffer.mem[1]);
    //release the allocated memory 
    free(buffer.mem);                                 
    return 0; 
} 
