	#include<stdio.h>      
#include<math.h>
#include<stdlib.h>
void main()
      {
         
        int n,x1;
        float accuracy,term,denom,x,cos(x),cosval;
          
        printf("Enter value of x(in degrees)\n");
        scanf("%f",&x);
        x1=x;
          
        x=x*(3.142/180);
        cosval=cos(x);
        printf("Enter the accuracy for the result\n");
        scanf("%f",&accuracy);
        term=1;
        cos(x)=term;
        n=1;
        do
            {
                denom=2*n*(2*n-1);
                term=-term*x*x/denom;
                cos(x)=cos(x)+term;
                n=n+1;
            }
              while(accuracy<=fabs(cosval-cos(x));
        printf("sum of the cosine series=%f\n",cos(x));
        printf("Using library function cos(%d)=%f\n",x1,cos(x);
     }
