// Implement a fix for the null dereference bug
#include <stdlib.h> 
#include <stdio.h> 
  
int main(int argc, char *argv[]) 
{ 
    char k = 0; 
    char *p = (char *)NULL; 
    printf("%c\n",k);  
    switch(k) { 
        case 0: 
                if (p){ //make sure p  is not a null pointer                    
                	k = *p; /* FIX */
		}
        default: 
            break; 
    }  
    printf("%c\n", k);
    return 0; 
} 
