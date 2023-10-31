#include <stdio.h>
main()
{
int  f;
float j;
scanf("%d",&f);
 j=f*0.9;
 if (f<=800){
    printf ("%.1f\n",j);


 }
 else if (f>800&&f<=1500){

    j=j*0.9;
    printf ("%.1f\n",j);

 }
  else {
    j=j*0.79;
    printf ("%.1f\n",j);
  }
}

