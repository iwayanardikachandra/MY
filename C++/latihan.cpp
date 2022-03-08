#include <iostream>
using namespace std;

int main (){
    int n = 15;
    int m = 10;
    int i = 2;
    int j = i;
    int k = j;

    for(i;i<=5;i++){
        while(j<=3){
            do {
            n = n + m;
            k = k + 1;
            }while(k<=3);
            j++;
        }
    }

cout<<n;
}