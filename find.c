#include<stdio.h>
search(int *ar,int length,int target){
	int left = 0,right = length-1;
	int mid;
	while(right > left){
		mid = (left + right)/2;
		if(target == ar[mid])
		return mid;
		else if(target > ar[mid])
		left = mid+1;
		else
		right = mid-1;
	}
}
int main(void)
{
	int idx;
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	idx = search(ar,10,2);
	printf("%d",ar[idx]);
}
