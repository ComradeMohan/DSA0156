#include<iostream>
#include <cmath>
using namespace std;
class area{
	public:
		area(int r){
			cout << " Area of circle" << 3.14* r* r;

		}
		area(int l,int w){
			cout << " Area of rectangle " <<l*w << endl;
		}
		area(int a , int b , int c){
			double s = (a+b+c)/2;
			cout << " area of traingle = "<< sqrt(s * (s - a) * (s - b) * (s - c));

		}
};

int main() {
 area c(3);
}
