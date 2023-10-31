#include <stdio.h>
main()
{
int  h,m;
float z,x,j;
scanf("%d%d",&h,&m);
   x=m*6;
 z=h*30+0.5*m;
   if (x>z){
    j=x-z;
     

     if (j>=180){
     j=360-j;
    
    printf ("%.3f\n",j);
   }
   else {printf ("%.3f\n",j);}
  }
else {
     j=z-x;
if (j>=180){
     j=360-j;
    
    printf ("%.3f\n",j);
   }
   else {printf ("%.3f\n",j);}
  }

}
