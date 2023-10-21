#include <iostream>
#include "Student.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Student s1(123,"Udit",70,72,74);
	s1.calTotalMarks();
	s1.calPercentage();
	s1.display();
	
	return 0;
}
