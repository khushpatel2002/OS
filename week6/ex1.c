#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n; 
	int* at;
	int* bt;
	int* id;
	int* ct;
	int* wt;
	int* tat;
	printf("---- FCFS algorithm ----\n");
	printf("Enter the No of Processes:\n");
	scanf("%d",&n);
	at = (int*)malloc(sizeof(int)*n);
	bt = (int*)malloc(sizeof(int)*n);
	id = (int*)malloc(sizeof(int)*n);
	ct = (int*)malloc(sizeof(int)*n);
	wt = (int*)malloc(sizeof(int)*n);
	tat = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++) 
	{
		printf("Enter the Arrival time of Process No. %d\n",i);
		scanf("%d",&at[i]);
		printf("Enter the Burst time of Process No.r %d\n",i);
		scanf("%d",&bt[i]);
		id[i] = i;
	}


	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(at[j]<at[j-1])
			{
				int tmp = at[j];
				at[j] = at[j-1];
				at[j-1] = tmp;
				tmp = bt[j];
				bt[j] = bt[j-1];
				bt[j-1] = tmp;
				tmp = id[j];
				id[j] = id[j-1];
				id[j-1] = tmp;
			}
		}
	}


	int time = 0;
	for(int i=0;i<n;i++) 
	{
		if(time<at[i]) time = at[i];
		wt[id[i]] = time - at[i];
		time+=bt[i];
		ct[id[i]] = time;
		tat[id[i]] = time - at[i];
	}
	float totalwt = 0;   
	float totaltat = 0;
	for(int i=0;i<n;i++)
	{
		printf("For Process No. %d: Waiting Time(WT) = %d, Completion Time(CT) = %d, Turn Around Time(TAT) = %d\n", i,wt[i],ct[i],tat[i]);
		totaltat += tat[i];
		totalwt+=wt[i];
	}
	printf("Average Turn Around Time(TAT) = %f\n", totaltat/n);
	printf("Average Waiting Time(WT) = %f\n", totalwt);
}
