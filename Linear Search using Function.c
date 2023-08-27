#include<stdio.h>
int linear(int arr[],int size,int key)
{
int i,z;
for(i=0;i<size;i++)
{
if(arr[i]==key)
{
return i;
}
}
return -1;
}
int main(){
int arr[]={10,20,35,5,60};
int size;
size=sizeof(arr)/sizeof(arr[0]);
int key;
scanf("%d",&key);
int abc=linear(arr,size,key);
if(abc==-1)
printf("Not Found");
else{
    printf("Position at %d",linear(arr,size,key));
}
return 0;
}
