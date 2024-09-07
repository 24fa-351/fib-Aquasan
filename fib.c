#include <stdio.h>
#include <stdlib.h>
#include <string.h>


   int fib_recursive(int n) {
      if (n <= 1)
       
        return n;
      
      return fib_recursive(n - 1) + fib_recursive(n - 2);
   }

   int fib_iterative(int n) {
       if (n <= 1)
          return n;

      int prev = 0; 
      int curr = 1; 
      int next;
      
      for (int i = 2; i <= n; ++i) {
         next = prev + curr;
         prev = curr;
         curr = next;
    }

      return curr;
   }  

   int main(int argc, char *argv[]) {

      int number= atoi(argv[1]);

      char method = method = argv[2][0];
   
      char *fileName = argv[3];
   
   FILE *file = file = fopen(fileName, "r");
   
   
   int numfile;

   fscanf(file, "%d", &numfile);
   fclose(file);

   int N = number + (numfile - 1);

   int result;
    if (method == 'r') {
      
        result = fib_recursive(N); 
    
    } else if (method == 'i') {
      
        result = fib_iterative(N);  
       
        }
   printf("%d", result);

   return 0;
}
