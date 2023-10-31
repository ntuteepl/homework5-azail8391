#include <stdio.h>
main()
{
int  f,a;
float j;
scanf("%d%d",&f,&a);

 if (f<=60){
    j=f*a;

    printf ("%.1f\n",j);


 }
 else if (f>60&&f<=120){
   j =60*a;
    j=j+(f-60)*a*1.33;
    printf ("%.1f\n",j);

 }
  else {
    j=60*a;
    j=j+60*a*1.33;
    j=j+(f-120)*a*1.66;
    printf ("%.1f\n",j);
  }
}

