// #include<stdio.h>
// void main()
// {
//     int a[]={5,3,1,9,8,2};
//     int n=6;
//     int temp;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])//or a[j]<a[j+1] for getting sorting in desending order
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// insertion sort
// #include<stdio.h>
// void main()
// {
//     int arr[]={5,9,3,7,2,1,8};
//     int t,n=7;
//     for (int i=1;i<n;i++)
//     {
//         t=arr[i];
//         int j;
//         for(j=i;arr[j-1]>t && j>0;j--)
//         {
//             arr[j]=arr[j-1];
//         }
//         arr[j]=t;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

//selection sort

#include<stdio.h>
void main()
{
    int a[]={5,9,3,7,2,1,8};
    int n=7;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}