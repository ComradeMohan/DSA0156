#include<iostream>
using namespace std;
int main(){
	int n=123321;
	int t=n,d,r=0;
	while(t>0){
		d=t%10;
		r=r*10+d;
		t/=10;
	}
	if(n==r)
	cout<<"PANLIDROME";
	else
	cout << " NOT A PALINDROME";
}