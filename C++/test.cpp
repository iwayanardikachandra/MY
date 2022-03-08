#include <iostream>
using namespace std;

main(){

	for(int baris = 1 ; baris<=5; baris++)
	{
		
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(baris==1||baris==5||kolom==1)
			{
				cout<<"*";
			}
			else{
				cout<<"  ";
			}
		}
	cout<<" ";
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(baris==1||baris==5||kolom==1)
			{
				cout<<"*";
			}
			else{
				cout<<"  ";
			}
		}
	cout<<" ";
	
	
	
	
	cout<<endl;
	}
	
	
	
}
