#include <iostream>
#include "header.hpp"


Student::Student(std::string newname, int newage, float newGPA, std::list<std::string> newcourses) : name(newname), age(newage), GPA(newGPA), courses(newcourses) {

};