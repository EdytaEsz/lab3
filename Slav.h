#pragma once
#include <string>
#include <vector>

using namespace std;

enum sex { male, female }

class Slav
{
private:
	static void init();

	sex which_sex();
	sex _gender = which_sex();

	static std::vector <string> names;
	static int _counter;

	string _name;
	int _id;

public:
	Slav();

	static int counter() { return _counter; }

	sex gender() { return _gender; }
	string name() { return _name; }
	int id() { return _id; }

	string description();
};


