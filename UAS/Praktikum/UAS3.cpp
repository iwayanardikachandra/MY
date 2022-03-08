#include<iostream>
using namespace std;

int main()
{
	cout<<"WATERMARK"<<endl;
	cout<<"I Wayan Ardika Chandra (202131009)"<<endl;
	cout<<"=========================================="<<endl;
	int n;
	
	cout << "Masukkan Baris : ";
	cin >> n;
	cout<<endl;

	cout << "Pola 1"<<endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout <<k<< " ";
		}
		cout << endl;
	}
	cout<<endl;
	cout << "Pola 2"<<endl;
	for (int i = n; i >= 1; i--)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout <<k<< " ";
		}
		cout << endl;
	}
	
	cout<<endl;
	cout<<"NO 3 Tidak Sama Dengan Yang Diminta :(";
}
