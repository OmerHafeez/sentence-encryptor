#include<iostream>
using namespace std;
int main ()
{
	//declaration of variable
	string z;
	int a,b,c,d,e,f,h,i,j,k;
	long int g;
	
	//For encryption we need string and the roll number
	
		cout<<"Enter a String: ";										//take inputs by the user 
		cin>>z;
	cout<<"Enter your roll number: ";
	cin>>g;
	
	a=z[0];															//the first character of string is separated and stored in an interger which will return its ASCII value
	b=z[1];															//the second character of string is separated and stored in an interger which will return its ASCII value
	c=z[2];															//the third character of string is separated and stored in an interger which will return its ASCII value
	d=z[3];															//the fourth character of string is separated and stored in an interger which will return its ASCII value
	e=z[4];															//the fifth character of string is separated and stored in an interger which will return its ASCII value
	f=z[5];															//the sixth character of string is separated and stored in an interger which will return its ASCII value
	h=g/1000;														//separates the first letter of roll number
	i=g/100;														
	i=i%10;															//separates the second letter of roll number
	j=g/10;														
	j=j%10;															//separates the third letter of roll number
	k=g%10;															//separates the forth letter of roll number
	cout<<a<<"\t"<<h<<"\t"<<b<<"\t"<<i<<"\t"<<c<<"\t"<<j<<"\t"<<d<<"\t"<<k<<"\t"<<e<<"\t"<<h<<"\t"<<f;				//prints the values in the sequence of the encryption code
} 