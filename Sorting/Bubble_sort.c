#include<stdio.h>
int main()
{
    int arr[10],n,i,j,temp;
    printf("Enter how many elements you want for sorting");
    scanf("%d",&n);

    printf("Enter the elements:- ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){               
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;             
            }
        }
    }
    printf("\n The Bubble sorting is done:-\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}