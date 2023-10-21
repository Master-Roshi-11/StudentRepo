#include<iostream>
#include "Student.h"
using namespace std;

Student::Student()
{
}

Student::Student(int sid,string sname,int m1,int m2,int m3){
	this->studid=sid;
	this->studname=sname;
	this->marks1=m1;
	this->marks2=m2;
	this->marks3=m3;
}
void Student::calTotalMarks(){
	this->setTotal(this->marks1 +this->marks2 +this->marks3);
}
void Student::calPercentage(){
	this->setPecentage(this->total/300.0);
}
void Student::display(){
	cout<<"Name : "<<this->studname<<endl;
	cout<<"ID : "<<this->studid<<endl;
	cout<<"Total Marks : "<<this->total<<endl;
	cout<<"Percentage : "<<this->percentage<<endl;
}

void Student::setStudid(int id){
	this->studid=id;
}
void Student::setStudname(string name){
	this->studname=name;
}
void Student::setMarks1(int m1){
	this->marks1=m1;
}
void Student::setMarks2(int m2){
	this->marks2=m2;
}
void Student::setMarks3(int m3){
	this->marks3=m3;
}
void Student::setTotal(int total){
	this->total=total;
}
void Student::setPecentage(double p){
	this->percentage=p;
}

int Student::getStudid(){
	return this->studid;
}
string Student::getStudname(){
	return this->studname;
}
int Student::getMarks1(){
	return this->marks1;
}
int Student::getMarks2(){
	return this->marks2;
}
int Student::getMarks3(){
	return this->marks3;
}
int Student::getTotal(){
	return this->total;
}
double Student::getPecentage(){
	return this->percentage;
}

