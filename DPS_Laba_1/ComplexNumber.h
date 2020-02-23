#pragma once
#include <iostream>



using namespace std;


class ComplexNumber
{
private:
	float i_part;
	float r_part;

public:

	ComplexNumber() {
		i_part = 0; r_part = 0;
	}

	ComplexNumber(float i_part, float r_part) {
		this->i_part = i_part;
		this->r_part = r_part;
	}

	ComplexNumber(const ComplexNumber& object) {
		this->i_part = object.i_part;
		this->r_part = object.r_part;
	}

	ComplexNumber& operator=(const ComplexNumber& copy) {
		this->i_part = copy.i_part;
		this->r_part - copy.r_part;
		return *this;
	}
	



	friend void operator<<(ostream& object, ComplexNumber complex_number) {
		cout << "������������� �����: ";
		object << complex_number.r_part << endl;
		cout << "������ �����: ";
		object << complex_number.i_part << endl;
	}

	void Printf();

	void Mul(const ComplexNumber& complex_number1, const ComplexNumber& complex_number2);

};

