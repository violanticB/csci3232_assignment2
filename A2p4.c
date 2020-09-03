#include <stdio.h>
int main() {
     int l0 = (int) 'a', l1 = (int) 'z';
     int u0 = (int) 'A', u1 = (int) 'Z';
     int n0 = (int) '1', n1 = (int) '9';
     char out[] = "(char) %c\tconvert to ASCII: %d\n"; 

     for(; l0 <= l1; l0++)
     {
          printf(out, (char) l0, l0);
     }
     
     for(; u0 <= u1; u0++)
     {
           printf(out, (char) u0, u0);
     }
    
     for(; n0 <= n1; n0++)
     {
           printf(out, (char) n0, n0);
     }
     
     return 0;         
}
