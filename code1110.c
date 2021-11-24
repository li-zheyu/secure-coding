	// -------------- Tasks -------------------------
// use clang static analyser to identify bug(s)
// Implement fix for the bug keeping in mind the following three conditions
// 1.Dynamically allocate memory in the caller function 
// 2. Convert p from global variable to a parameter in foo()
// 3. Print valid output for p in foo()
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char const *p;
void foo(char const *p){//add one parameter
    char const str[6] = "string";
    p = str;
    printf("%s",p);//print value
}

int main(){
    
    p = (char const *)malloc(sizeof(char)*6);//allocate memory space to p
    foo(p);
    return 0; 

}
