#pragma once
#include "Lesson.h"

class PaidLesson: public Lesson
{
protected:
	float price;
public:
	PaidLesson();
	PaidLesson(string theme, string info, string home, float price);
	~PaidLesson();

	void setPrice(float price);
	float getPrice()const;

	void showInfo()const;
};

