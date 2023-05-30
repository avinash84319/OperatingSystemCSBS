#include<stdio.h>
#include<stdlib.h>
int main(){
    int pid[15],bt[15],n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        pid[i]=i+1;
    }
    for(int i=0;i<n;i++){
        printf("Enter the burst time of process %d: ",i+1);
        scanf("%d",&bt[i]);
    }
    int i,wt[15];
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
    }
    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t\t%d\t\t%d\n",pid[i],bt[i],wt[i],wt[i]+bt[i]);
    }
    float avgwt=0;
    for(i=0;i<n;i++){
        avgwt+=wt[i];
    }
    avgwt/=n;
    printf("Average waiting time: %f\n",avgwt);
    float avgtat=0;
    for(i=0;i<n;i++){
        avgtat+=wt[i]+bt[i];
    }
    avgtat/=n;
    printf("Average turnaround time: %f\n",avgtat);
}