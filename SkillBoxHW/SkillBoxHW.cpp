#include <iostream>
#include <ctime>
#include <cmath>

class myClass {
private:
	int size = 0;
	std::string name = "";

public:
	myClass() {

	};

	myClass(std::string _name, int _size) : name(_name), size(_size) {

	};

	void showInfo() {
		std::cout << "Class named " << name << " has " << size << " students." << '\n';
	}

	void getName() {
		std::cout << "Class name: " << name << '\n';
	}

	void setName(std::string newName) {
		name = newName;
		std::cout << "New name: " << name << " has been set for the class." << '\n';
	}

	void getSize() {
		std::cout << "Class has " << size << " students now" << '\n';
	}

	void addStudent(std::string studentName) {
		++size;
		std::cout << "A student " << studentName << " has been added to the class, it has " << size << " students now";
	}
};

class Vector {
private:
	double x;
	double y;
	double z;

public:
	Vector() : x(0), y(0), z(0) {

	};

	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {

	};

	double getLength() {
		return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
	}
};

int main() {
	myClass oneB("One B", 21);
	oneB.getName();
	oneB.getSize();
	oneB.setName("Superclass");
	oneB.addStudent("Egor");
	oneB.showInfo();

	Vector myVector(10, 122, 56);
	std::cout<<"my vector length is: "<< myVector.getLength();
}