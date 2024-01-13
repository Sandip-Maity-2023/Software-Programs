//
// Created by 12san on 13-01-2024.
//
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums,int numsSize,int target,int* returnSize);
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int* nums=malloc(size*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;++i){
        scanf("%d",&nums[i]);
    }
    int target;
    printf("Enter the target sum:");
    scanf("%d",&target);

    int returnSize;
    int* result=twoSum(nums,size,target,&returnSize);

    if(returnSize==2){
        printf("Indices of the two numbers:[%d,%d]\n",result[0],result[1]);
    }else{
        printf("No pairs found.\n");
    }
    free(nums);
    free(result);

    return 0;

}
int* twoSum(int* nums,int numsSize,int target,int* returnSize){
    int* retarr=malloc(2*sizeof(int));
    retarr[0]=-1;//initialize to a invalid value
    retarr[1]=-1;//initialize to a invalid value

    for(int i=0;i<numsSize;++i){
        for(int j=i+1;j<numsSize;++j){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                retarr[0]=i;
                retarr[1]=j;
                return retarr;
            }
        }
    }
    *returnSize=0;
    return retarr;
}
