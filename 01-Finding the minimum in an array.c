#include<stdio.h>
#define MAX 100000
int array[MAX];

//logic for finding the minimum
int minimum(int array[],int left,int right){
    

    //logic for base case
    if(left==right)return array[left];

    int mid=(left+right)/2;

    //recursive process
    int minleft=minimum(array,left,mid);
    int minright=minimum(array,mid+1,right);

    //returning process
    if(minleft<minright){return minleft;}
    else{return minright;}
}
int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1 || n>MAX){
        printf("Invalid input\n");
        return 1;
    }
    

    //logic for taking the input array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int min=minimum(array,0,n-1);
    

    //logic for printing output
    printf("The minimum value is %d\n",min);
    

    return 0;
}