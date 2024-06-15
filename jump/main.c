#include<stdio.h>
#include<stdbool.h>

bool jump(int*,int);


void main()
{
int size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
scanf("%d",&arr[i]);
 printf("Can we reach the last index: %s\n", jump(arr,size) ? "true" : "false");
}

bool jump(int* arr, int size) {
    int maxReach = 0;
    for (int i = 0; i < size; i++) {
        if (i > maxReach) {
            return false;
        }
        if (maxReach < i + arr[i]) {
            maxReach = i + arr[i];
        }
        if (maxReach >= size - 1) {
            return true;
        }
    }
    return false;
}
