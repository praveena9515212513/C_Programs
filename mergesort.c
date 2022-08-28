#include<stdio.h>
void merge(int [],int[],int,int);
void main()
{
    int a[]={2,4,7,9};
    int b[]={3,4,6,8};
    merge(a,b,4,4);
    // printf("hai");

}
void merge(int a[],int b[],int n,int m)
{
    // printf("hai");
    int c[m+n];
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else 
        c[k++]=b[j++];
    }
    // print("hel");
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    for(int i=0;i<8;i++)
    {
        printf("%d\t",*(c+i));
    }
}