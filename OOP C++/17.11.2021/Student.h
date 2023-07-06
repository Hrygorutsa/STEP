#pragma once

	class Student
	{
	private:
		char* surename = nullptr;
		char* form = nullptr;
		size_t number_of_marks;
		const int min_number_of_marks = 1;
		const int max_number_of_marks = 12;
		size_t *marks;

	public:
		const char* getSurename() const;
		const char* getForm() const;
		const size_t getNumberOfMarks() const;
		

		void setSurename(const char* surename);
		void setForm(const char* form);
		void setNumberOfMarks(const size_t& number_of_marks);
		void setMarks();
		void getMarks();
		void print() const;


		Student() :Student("None surename", "None form", 0) {}// ctor => create object
		Student(const char* surename, const char* form, const size_t& number_of_marks);
		Student(const Student& other);
		void operator=(const Student& other);
		~Student();

	};

	inline const char* Student::getSurename() const
	{
		if (surename == nullptr) return "None Name";
		return surename;
	}

	inline const char* Student::getForm() const
	{
		if (form == nullptr) return "None Form";
		return form;
	}

	inline const size_t Student::getNumberOfMarks() const
	{
		return number_of_marks;
	}

	inline void Student::setNumberOfMarks(const size_t& number_of_marks)
	{
		this->number_of_marks = number_of_marks;
	}


