#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a=3,b=4,c=5;
	
    double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        double perimeter = a + b + c;

        cout << "Area " << area << endl;
        cout << "Perimeter" << perimeter << endl;

    return 0;
}