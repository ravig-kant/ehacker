#include <stdio.h>
#include <stdlib.h>

void test(int , int *);

int main() {
   int A = 5, B = 7, count_one, count_two;

   // Example of a %n format string
   printf("The number of bytes written up to this point X%n is being stored in count_one, and the number of bytes up to here X%n is being stored in count_two.\n", &count_one, &count_two);

   printf("count_one: %d\n", count_one);
   printf("count_two: %d\n", count_two);

   // Stack example
   printf("A is %d and is at %llx.  B is %llx.\n", A, &A);

   test(A, &A);
   exit(0); 
}

void test(int a, int* b){
	printf("hello");
}
