#include <iostream>
using namespace std;

int main (){
	int a, b, c, total;
	cout<<"Masukkan nilai a : ";cin>>a;
	cout<<"Masukkan nilai b : ";cin>>b;
	cout<<endl;
	
	if(a>10){
		if(b>15){
			c = a + b;
			a = b;
			b = c;
			total = c + a + b;
		} else{
			c = a * b;
			a = c;
			b = c;
			total = a + b + c;	
		}	
	} else {
		c = a - b;
		b = c;
		a = b;
		total = b + c + a;
	}
	
	cout<<"a, b, c, total : "<<a<<" "<<b<<" "<<c<<" "<<" "<<total;
	
}
