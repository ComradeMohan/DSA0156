#include<iostream>
using namespace std;
void Reverse(int A[], int n){
	int left=0,right=n-1;
	while(left<right)
	swap(A[left++],A[right--]);
		for(int i=0;i<5;i++)
	cout << A[i]<<" ";
}
int main(){
	int A[]={10,20,30,40,50};
	Reverse(A,5);
}