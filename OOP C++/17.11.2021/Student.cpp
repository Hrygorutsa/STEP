#include <iostream>
#include "Student.h"
using std::cout;
using std::endl;
using std::cin;

void Student::setSurename(const char* surename)
{
	if (this->surename != nullptr) delete[]this->surename;

	size_t size = strlen(surename) + 1;
	this->surename = new char[size];
	strcpy_s(this->surename, size, surename);
}

void Student::setForm(const char* form)
{
	if (this->form != nullptr) delete[]this->form;

	size_t tmp = strlen(form) + 1;
	this->form = new char[tmp];
	strcpy_s(this->form, tmp, form);
}

void Student::print() const
{
	//cout << "Address   :: " << kkalIng << endl;
	cout << "Student surename    :: " << getSurename() << endl;
	cout << "Form			     :: " << getForm() << endl;
	cout << "Number of marks     :: " << number_of_marks << endl;
	//cout << "Marks				 ::"  << getMarks() << endl;
}

Student::Student(const char* surename, const char* form, const size_t& number_of_marks) : number_of_marks{ number_of_marks }
{
	setSurename(surename);
}

Student::Student(const Student& other)
{
	setSurename(other.surename);
	setForm(other.form);
	setNumberOfMarks(other.number_of_marks);
}

void Student::operator=(const Student& other)
{
	if (this == &other) return;
	setSurename(other.surename);
	setForm(other.form);
	setNumberOfMarks(other.number_of_marks);
}

void Student::setMarks() 
{
	for (size_t i = 0; i < getNumberOfMarks(); i++)
	{
		marks[i]=rand()%12;
	}
}

void Student::getMarks()
{
	this->marks = marks;
}

Student::~Student()
{
	if (surename != nullptr) { delete[] surename; surename = nullptr; }
	//if (form != nullptr) { delete[] form; form = nullptr; }
	
}