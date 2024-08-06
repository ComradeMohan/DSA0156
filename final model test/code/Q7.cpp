#include <iostream>
using namespace std;
void AddEnd4(int A[][3] ,int R ,int C){
	int s=0;
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	if(A[i][j]%10==4)
	s+=A[i][j];
	cout <<" Sum =" << s;
}
int main(){
	int A[2][3]={{24,16,14},{19,5,46}};
	AddEnd4(A,2,3);	
}