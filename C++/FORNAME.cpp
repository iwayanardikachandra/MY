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
				cout<<" ";
			}
	}
	cout<<" ";
		
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(kolom==1||kolom==5||kolom==2&&baris==3||kolom==3&&baris==3||kolom==4&&baris==3)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<" ";
	
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(baris==3 
			|| baris>=3&&kolom==1
			||baris>=3&&kolom==5
			||baris==2&&kolom==2 
			||baris==2&&kolom==4
			||baris==1&&kolom==3)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<" ";
	
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(kolom==1||kolom==5||kolom==2&&baris==2||kolom==3&&baris==3||kolom==4&&baris==4)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<" ";
	
	for(int kolom = 1; kolom<=5;kolom++)
		{
			if(baris==kolom||baris+kolom==6)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<" ";
	
	
	cout<<endl;
}
}
