#include <stdio.h>
#include <float.h>

 int main()
 
 {
 
     printf("Storage size for float: %d \n", sizeof(float));
     printf("Maximum float value: %E \n", FLT_MAX);
     printf("Minimum float value: %E \n", FLT_MIN);
     printf("Precision value: %d \n", FLT_DIG);
     
     return 0; 
 
 }
