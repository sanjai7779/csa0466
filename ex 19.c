#include<stdio.h>
int main()
{
    char name[10][30];
    int start[10],length[10],num;
    printf("Enter the number of files to be allocated\n");
    scanf("%d",&num);
    int count=0,k,j;
    {
        printf("Enter the name of the file %d\n");
        scanf("%s",&name[0]);
        printf("Enter the start block of the file %d\n");
        scanf("%d",&start);
        printf("Enter the length of the file %d\n");
        scanf("%d",&length);
        
        for(j=0,k=1;j<num && k<num;j++,k++)
        {
            if(start[j+1]<=start[j] || start[j+1]>=length[j])
            {
                
            }
            else
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%s cannot be allocated disk space\n",name);
        }
    }
    printf("File Allocation Table\n");
    printf("%s%40s%40s\n","File Name","Start Block","Length");
    printf("%s%50d%50d\n",name[0],start[0],length[0]);
    {
        if(start<=start || start>=length)
            {
                printf("%s%50d%50d\n",name[j],start[j],length[j]);
            }
    }
    return 0;
}

