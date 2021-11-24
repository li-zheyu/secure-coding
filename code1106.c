
//Null Pointer dereference problem
#include<stdio.h>
int size =5;
void recurse(){
    void (*foo)(void); //fix unitialized pointer
    foo=recurse;
    //printf("%x\n", (int)foo); 
    //recursive call (implement a valid recursice check mechanism to fix null dereference)
    if(foo&&size>0){
        size=size-1;
        printf("%x\n", size);
	foo();
    }
}
int main(){
recurse();
return 0;
}
