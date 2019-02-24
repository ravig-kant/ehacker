#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int test(char* argv[]){
   char text[1024];
   static int test_val = -72;

   strcpy(text, argv[1]);

   printf("The right way to print user-controlled input:\n");
   printf("%s", text);


   printf("\nThe wrong way to print user-controlled input:\n");
   printf(text);

   printf("\n");

   // Debug output
   printf("[*] test_val @ 0x%08x = %d 0x%08x\n", &test_val, test_val, test_val);

   exit(0);
}

int main(int argc, char *argv[]) {

   if(argc < 2) {
      printf("Usage: %s <text to print>\n", argv[0]);
      exit(0);
   }

   test(argv);
}
