#include <iostream>
#include <fstream>
#include <algorithm>     //needed for swap function
using namespace std;


template <class T>

T quickSort(T arr[],int start,int end)
{
    if(start < end)             //test for base case
    {
        int p=partition(arr,start,end);

        quickSort(arr,start,p-1);

        quickSort(arr,p+1,end);
    }
    return;
}

int partition(T[],int,int);
int main()
{
    const int SIZE=10;
    int iArray[SIZE]={5,98,17,35,11,67,72,3,41,50};
    double dArray[SIZE]={213.33,64.12,19.99,68.44,451.29,23.61,178.43,15.31,71.32,59.32};
    char cArray[SIZE]={'l','q','t','a','g','z','p','e','r','h'};
    quickSort(iArray,0,SIZE-1);
    quickSort(dArray,0,SIZE-1);
    quickSort(cArray,0,SIZE-1);
    return 0;
}


template <class T>
int partition(T array[],int start,int end)
{
    int pivotValue= array[start];
    int pivotPosition=start;

    for (int index=start+1;index<=end;index++)
    {
        if(array[index]< pivotValue)
        {
            swap(array[pivotPosition+1],array[index]);
            swap(array[pivotPosition],array[pivotPosition+1]);
            pivotPosition++;
        }
    }
    return pivotPosition;
}
