#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

int main() 
{
   int size = 100*1024*1024;
    while(1){
        char *ly = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);
        for(int i = 0; i< size; i+=4096);
        {
            ly[i]=0;
        }
        system ("free -m >> ly.text");
        
    }
    return = 0;
}
