#pragma once
#include <string>
#include <iostream>
using namespace std;

class Lesson
{
protected:
	string theme;
	string info;
private:
	string home;
public:
	Lesson();
	Lesson(string theme, string info, string home);
	~Lesson();

	void setTheme(string theme);
	void setInfo(string info);
	void setHome(string home);

	string getTheme()const;
	string getInfo()const;
	string getHome()const;

	void showInfo()const;
};

