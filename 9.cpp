#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
for(int i=1;i<=9;i++) 
{ 
for(int j=1;j<=9;j++) 
{ 
printf("%dX%d=%d\t",i,j,i*j); 
} 
printf("\n"); 
} 
system("PAUSE"); 
return 0; 
}
