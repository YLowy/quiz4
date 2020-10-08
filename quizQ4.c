#include <stdio.h>
#include <stdlib.h>
int main(){

    for(int i=0;i<10;i++)
        printf("__builtin_ffs (%d) = %d \n ",i,__builtin_ffs (i));
	return 0;
}
