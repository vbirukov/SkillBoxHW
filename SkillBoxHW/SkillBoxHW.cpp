#include <iostream>
#include <ctime>

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

int main() {
	myClass oneB("One B", 21);
	oneB.getName();
	oneB.getSize();
	oneB.setName("Superclass");
	oneB.addStudent("Egor");
	oneB.showInfo();
}