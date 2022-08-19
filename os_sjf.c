#include <stdio.h>

int
main ()
{
  int n, i, j,temp1,temp2;
  printf ("Enter the number of process: ");
  scanf ("%d", &n);

  int p[n];
  int b[n];
  int c[n];

  printf ("Enter the process id: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &p[i]);
    }

  printf ("Enter the burst time: ");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &b[i]);
    }
    
    for (i=0; i<n-1; i++){
    for (j=i+1;j<n-1; j++){
        if (b[j]<b[i]){
        temp1=b[j];
        b[j]=b[i];
        b[i]=temp1;
        temp2=p[j];
        p[j]=p[i];
        p[i]=temp2;    
        }
    }
    }
    
    for (i=0; i<n; i++){
        int s=s+ b[i];
    	c[i]=s; }
    
    printf("process id   burst time   completion time\n");
    
    for (i=0; i<n; i++){
        printf("%d               %d               %d\n",p[i],b[i],c[i]);
    }
    
    
return 0;
}