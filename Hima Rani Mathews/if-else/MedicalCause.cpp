#include<iostream>
using namespace std;
int main(){
	float nch,nca;
	char ch;
	cout<<"\nEnter the no. of classes held & attended : ";
	cin>>nch>>nca;
	float p=(nca/nch)*100;
	if(p>=75){
		cout<<"The student with "<<p<<"% of attendance is allowed to sit in Exam";
	}
	else{
		cout<<"\nAny Medical Cause?(Y/N)";
		cin>>ch;
		if(ch=='Y'||ch=='y')
		cout<<"The student with "<<p<<"% of attendance is allowed to sit in Exam due to Medical reasons";
		else
		cout<<"The student  with "<<p<<"% of attendance is not allowed to sit in Exam";
	}
}
