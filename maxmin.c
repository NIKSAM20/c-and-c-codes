#include<stdio.h>
int main(){
    int n,i,j,s=0,T;
    printf("Enter the number the processes: ");
    scanf("%d", &n);

    printf("Enter the time quantum: ");
    scanf("%d", &T);
    
    int p[n];
    int b[n];
    int c[n];
    
    int max=b[0];
    
    printf("Enter the process id");
    for (i=0; i<n; i++){
        scanf("%d", &p[i]);
    }

    printf("Enter the burst time");
    for (i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++){
	if (b[i]>max)
	max=b[i];
    }
    while(max!=0){
    	for(i=0; i<n; i++){
                        if(b[i]!=0){
                            if(b[i]>=T){
                                s=s+T;
                            }
                            
                            else{
                                s=s+b[i];
                                b[i]=b[i]-b[i];
                                }
                                
                        }
                        c[i]=s;
    	}
    }
    printf("process id   burst time   completion time\n");
    
    for (i=0; i<n; i++){
        printf("%d               %d               %d\n",p[i],b[i],c[i]);
    }
    
    
return 0;
}