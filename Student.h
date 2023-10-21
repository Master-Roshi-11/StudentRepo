#ifndef STUDENT_H
#define STUDENT_H
#include<string.h>
using namespace std;

class Student
{
	private :
		int studid;
		string studname;
		int marks1;
		int marks2;
		int marks3;
		int total;
		double percentage;
	public:
		Student();
		Student(int,string,int,int,int);
		void calTotalMarks();
		void calPercentage();
		void display();
		
		void setStudid(int);
		void setStudname(string);
		void setMarks1(int);
		void setMarks2(int);
		void setMarks3(int);
		void setTotal(int);
		void setPecentage(double);
		
		int setStudid();
		string setStudname();
		int setMarks1();
		int setMarks2();
		int setMarks3();
		int setTotal();
		double setPecentage();
	protected:
};

#endif
