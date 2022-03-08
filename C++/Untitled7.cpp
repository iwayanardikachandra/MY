#include <iostream>

using namespace std;

int main(){
	
	for (int baris = 1; baris<=5;baris++)
	{
		for(int kolom =1;kolom<=5;kolom++){
		if(kolom==1
			||kolom==5
			||kolom==2)	{
			cout<<"*";	
			} else {
			cout<<"";
			}	
			
		}
		
			
	cout<<endl;	
	}
}
