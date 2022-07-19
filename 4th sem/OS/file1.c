#include <stdio.h>
#include <unistd.h>
 
int main()
{
    int pp_id;
     
    pp_id=getpid();  
  
     
    printf("Process id of example.c= %d\n",pp_id);
    execve("/home/rahul_094/hello",NULL,NULL);
 	 
    return 0;
}
