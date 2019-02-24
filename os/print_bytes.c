#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

   static int test_val ;
   long val_ptr = &test_val;
   char addr[1024] = "\x38\x10\x60\x00";

   printf(" Pointer address and equivalent long value is %llx  %d\n", &test_val, val_ptr);
   printf(" Pointer address after casting is %llx \n", (int *) val_ptr);
   printf(" Pointer address after casting is %llx \n",(int ) addr);
   //printf(" Total number of bytes written %n \n",(int *) val_ptr);
   printf(" Total number of bytes written %n \n", addr);
   printf(" New value of test_val is %d\n",test_val);
   printf(" Total number of bytes written %n %d\n", &test_val , test_val);
}
