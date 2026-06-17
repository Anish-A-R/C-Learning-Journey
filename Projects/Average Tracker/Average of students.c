#include<stdio.h>
int main()
{

    printf("Average Score Tracker\n");
    int choice=1;
    while(choice==1)        
    {
        int num;
        printf("Enter how much people are there:  ");
        scanf("%d",&num);
        if(num<=0)  
        {
            printf("The number of students less than one\n");
            continue;
        }
        int i;
        float score[num],avg,sum;
        sum=0;
        for(i=1;i<=num;i++)
        {
            printf("Enter the score of %d student:  ",i);
            scanf("%f",&score[i-1]);
            sum+=score[i-1];
        }
        avg=sum/num;
        printf("The average of the students is:  %.2f\n",avg);
        printf("Do you want to continue(1 for yes and 0 for no): ");
        scanf("%d",&choice);
    }
    printf("Thanks For Using the Average Tracker.");
    
}