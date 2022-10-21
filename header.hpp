#include <list>
#include <iostream>


class Student {

private:
	std::string name;
	int age;
	float GPA;
	std::list<std::string> courses;

public:
	Student(std::string newname, int newage, float newGPA, std::list<std::string> newcourses);
};