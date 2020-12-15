#include<iostream>
using namespace std;

int main(){
    int n=-1;
	int x=0;
	int y=0;
	while (n !=0){
     	cout << "Enter an integer: ";
     	cin >> n;
     	
 		if(n==0){
 			break;
		 }
 		else if(n%2!=0){	
 			y++;}
		else {
	 		x++;
		 }
	 }
	 	
    cout << "#Even numbers = " << x <<"\n";
    cout << "#Odd numbers = " << y ;
    return 0;
}