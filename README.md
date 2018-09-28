#include <iostream>
#include <cmath>
int f1(int x){
int n1 = x/ 100;
   x = x % 100;
   int n2 = x / 10;
   x = x % 10;
   int n3 = x;
return n1+n2+n3;
}
bool f2(int a){
	return a%25==0;
}
bool f3(int a){
	return a/100;
}
double f4(double x,double y){
	double q = (tan(x)-tan(y))/1+tan(x)*tan(y);
	double t = (atan(x)*atan(y)+1)/atan(x)-atan(y);
	return pow(x,2)*q*t;
}
int main() {
	int sum= f1(312);
	std::cout<< sum << std::endl;
	f2(100);
	std::cout<< f2 << std::endl;
	f3(800);
	std::cout<< f3 << std::endl;
	int res= f4(1.4,1.4);
	std::cout<< res << std::endl;
	return 0;
}
