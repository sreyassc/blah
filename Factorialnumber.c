	#include<studio.h>  
void main()

      {
        
         int c,n,f=1;

       
         printf("Enter number\n");
         scanf("%d",&n);

         for(c=1;c<=n;c++)
             {
                 f=f*c;
                 printf("Factorial of %d=%d\n",n,f);
             }

     
      }
