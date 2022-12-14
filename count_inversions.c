#include<stdio.h>
#include<malloc.h>
int mergesort(int [],int);
int _mergesort(int [] , int *,int ,int);
int merge(int [], int*,int ,int, int);
void main()
{
    int a[]={5,4,3,2,1};
    int count = mergesort(a,5);
    printf("No of inversions=%d",count);
}
int mergesort(int a[],int n)
{
    int *temp=(int *)malloc(n*sizeof(int));
    int i=_mergesort(a,temp,0,5-1);
    return i;
}
int _mergesort(int a[],int *temp,int l,int h)
{
    int mid=0,inv=0;
    if(l<h)
    {
        int mid=(l+h)/2;
        inv+=_mergesort(a,temp,l,mid);
        inv+=_mergesort(a,temp,mid+1,h);
        inv+=merge(a,temp,l,mid+1,h);
    }
    return inv;
}
int merge(int a[],int *temp,int left,int mid,int right)
{
    int i,j,k;
    i=left;
    j=mid;
    k=left;
    int inv=0;
    while(i<=mid-1 && j<=right)
    {
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else
        temp[k++]=a[j++];
        inv=inv+mid-i;
    }
    while(i<=mid-1)
    {
        temp[k++]=a[i++];
    }
    while(j<=right)
    {
        temp[k++]=a[j++];
    }
    return inv;
}
 
