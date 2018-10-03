#include <iostream>
#include <cmath>
int f(int x){
	if(x>0){
		return x+1;
	}
	else{
		return x;
	}
}
int f2(int x){
	if(x>0){
		return x+1;
	}
	else{
		return x-2;
	}
}
int f3(int x){
	if(x>0){
		return x+1;
	}
	if(x<0){
		return x-2;
	}
	if(x==0){
		return 10;
	}
}
int f6(int a, int b){
	if(a>b){
		return a;
	}
}
void f8(){
	int a=10;
	int b=8;
	if(a>b){
		std::cout<<a<<std::endl;
	}
	if(b<a){
	std::cout<<b<<std::endl;
	}
}
double f24(double x){
	if(x>0){
		return 2*sin(x);
	}
	if(x<=0){
		return 6-x;
	}
}
int f25(int x){
	if(x<-2){
		return 2*x;
	}
	if(f25||x>2){
		return 2*x;
		}
		else{
			return -3*x;
		}
	}
int main() {
int res=f(4);
int q=f2(4);
int t=f3(0);
int p=f6(10,3);
double v=f24(-3);
int y= f25(93);
	std::cout << res <<std::endl;
	std::cout << q << std::endl;
	std::cout << t << std::endl;
	std::cout << p << std::endl;
	std::cout << v << std::endl;
	std::cout << y << std::endl;
	return 0;
}
