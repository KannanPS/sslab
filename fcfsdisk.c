 #include<stdio.h>
void main()
{
            int queue[20],n,head,i,j,k,seek=0,size,diff;
            float avg;
            printf("Enter the size of disk ");
            scanf("%d",&size);
            printf("Enter the number of request ");
            scanf("%d",&n);
            printf("Enter the locations ");
            for(i=1;i<=n;i++)
            scanf("%d",&queue[i]);
            printf("Enter the postion of head ");
            scanf("%d",&head);
            queue[0]=head;
            for(j=0;j<=n-1;j++)
            {
                        diff=queue[j+1]-queue[j];
                        if(queue[j+1]<queue[j])
                                diff=queue[j]-queue[j+1];
                        seek+=diff;
            }
            printf("Total seek time is %d\n",seek);
            avg=seek/(float)n;
            printf("Average seek time is %f\n",avg);

}

