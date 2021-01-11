/*Tower Of Hanoi Using Recursion*/

#include<stdio.h>

void TOH(int n,int A,int B,int C){
	if(n>0){                                                  //true if n is greater than 0
		TOH(n-1,A,C,B);                                       //Move n-1 disk form A to B using C
		printf("Move Disk from %d to %d\n",A,C);              //Move a disk from A to C
		TOH(n-1,B,A,C);                                       //Move n-1 disk form B to C using A
	}
	else if(n<0){
		printf("Please Enter positive no.");
	}
}

int main(){
	int disk_no;
	printf("Enter the number of Disks:-");
	scanf("%d",&disk_no);
	TOH(disk_no,1,2,3);
}
