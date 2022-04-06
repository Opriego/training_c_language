#include <stdio.h>

// Variable declaration:
extern int a, b; //extern is used to define global variables
int c;
float f;

int main () {

   /* variable definition: */
   int a, b, some_Variable_in_good_naming_convention;
   int c;
   float f;

   /* this are some examples for naming conventions
   float 12BadNaming;
   float __goodname;
   float float;
   float floatvar;*/
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}
