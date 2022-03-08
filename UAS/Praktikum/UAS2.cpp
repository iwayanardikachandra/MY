#include <iostream>

using namespace std;

int main()
{
int n,i,j;
cout<<"WATERMARK"<<endl;
cout<<"I Wayan Ardika Chandra (202131009)"<<endl;
cout<<"=========================================="<<endl;		

cout << "Tentukan Tinggi/Baris Segitiga Anda : ";cin >> n;
cout << endl;

for(i=1;i<=n;i++) {
    for(j=1;j<=i;j++){
      cout << j <<" ";
    }
    cout << endl;
  }

  return 0;
}
