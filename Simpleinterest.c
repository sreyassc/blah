	#include<studio.h> 
void main()

      {
        
         float principle,time,rate,si;

        
         printf("\nEnter values for principle,time,rate");
         scanf("%f %f %f",&principle,&time,&rate);

        
         si=(principle*time*rate)/100;
         printf("The simple interest is %f",si);
      }
