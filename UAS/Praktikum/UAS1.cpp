#include <iostream>
using namespace std;

//I Wayan Ardika Chandra (202131009)//
//I W A C (009)//

main(){
	cout<<"WATERMARK"<<endl;
	cout<<"I Wayan Ardika Chandra (202131009)"<<endl;
	cout<<endl;
	cout<<endl;

	for(int baris = 1 ; baris<=5; baris++)
	{
		
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(kolom==5)
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
			if(kolom==1||kolom==2&&baris==4||kolom==3&&baris==3||kolom==4&&baris==4||kolom==5)
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
			|| baris >=3 && kolom==1
			||baris >=3 && kolom==5
			||baris==2 && kolom==2 
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
			if(kolom==1||kolom==2&&baris==1||kolom==3&&baris==1||kolom==4&&baris==1||kolom==5&&baris==1||kolom==2&&baris==5||kolom==3&&baris==5||kolom==4&&baris==5||kolom==5&&baris==5)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	cout<<" ";
	cout<<" ";
	cout<<" ";
	cout<<" ";
	cout<<" ";
	cout<<" ";
		for(int kolom = 1; kolom<=5;kolom++)
		{
			if(kolom==1||kolom==5||baris==1||baris==5)
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
			if(kolom==1||kolom==5||baris==1||baris==5)
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
			if(kolom==5||kolom==3&&baris==1||kolom==4&&baris==1||kolom==3&&baris==3||kolom==4&&baris==3||kolom==2&&baris==1||kolom==1&&baris==1||kolom==2&&baris==3||kolom==1&&baris==3||kolom==1&&baris==2||kolom==4&&baris==5||kolom==3&&baris==5)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
	}
	
	cout<<endl;
}
}
