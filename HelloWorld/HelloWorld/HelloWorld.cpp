#include "pch.h"
#include <iostream>

class LetDebug {

public:

	void printNum() {
		short s1 = 32767;
		short s2 = 1;

		int s3 = (short)s1 + s2;

		std::cout << s3 << std::endl;
	}
};

int main() {

	LetDebug *Id = new LetDebug;
	Id->printNum();

	system("pause");
	return 0;
}

/*
int main() {
    std::cout << "Hello World!\n"; 

	system("pause");

	return 0;
}*/