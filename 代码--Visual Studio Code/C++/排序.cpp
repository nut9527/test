#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//选择排序,从小到大，n^2
void selection_sort(int*a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                pos=j;
            }
        }
        swap(a[i],a[pos]);
    }
}

//冒泡排序，从小到大,n^2
void bubble_sort(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

//插入排序，从小到大，n^2
void insertion_sort(int* arr, int len)
{
    
}