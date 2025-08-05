#include<stdio.h>
#define MAX 100000
int array[MAX];

//logic for recursive function
int maximum(int array[],int left,int right){

    //base case
    if(left==right)return array[left];

    int mid=(left+right)/2;


    //recursive process
    int maxleft=maximum(array,left,mid);
    int maxright=maximum(array,mid+1,right);

    //returning process
    if(maxleft>maxright)return maxleft;
    else return maxright;
}


int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1 || n>MAX){
        printf("Invalid input\n");
        return -1;
    }

    //logic for taking the input array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int max=maximum(array,0,n-1);


    //logic for printing output
    printf("The maximum value is %d\n",max);


    return 0;

}