// array insertion using c
#include <stdio.h>

void display(int arr[],int n)
{
    //traversal
    for (int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)
    {
        return -1;
    }
    for(int i = size-1;i>=index;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1; //element sucessfully installed


}

int main()
{
    int n;
    printf("enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements: ",n);
    for(int i = 0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int size = 5,element = 45,index;
    printf("enter the index at which you want to insert the element: ");
    scanf("%d",&index);

    display(arr,4);
    insertion(arr,size,element,100,index);
    size+=1;
    display(arr,size);
    return 0;
}
