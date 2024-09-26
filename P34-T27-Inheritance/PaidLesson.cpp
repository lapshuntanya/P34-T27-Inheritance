#include "PaidLesson.h"

PaidLesson::PaidLesson(){
    //Lesson() => C++, Inheritance, base class
    price = 0;
    cout << "PaidLesson()\n";
}

PaidLesson::PaidLesson(string theme, string info, string home, float price)
    :Lesson(theme, info, home)
{
    //Lesson() => C++, Inheritance, base class
    //this->theme = theme;
    //this->info = info;
    //setHome(home);

    this->price = price;
    cout << "PaidLesson(t, i, h, p)\n";
}

PaidLesson::~PaidLesson(){
    cout << "~PaidLesson() => " << theme << endl;
}

void PaidLesson::setPrice(float price){ this->price = price; }
float PaidLesson::getPrice() const{    return price;}

void PaidLesson::showInfo() const{
    //!!!!! showInfo(); => рекурсія
    Lesson::showInfo(); // => theme, info, home
    cout << "Price: " << price << "UAH\n\n";
}
