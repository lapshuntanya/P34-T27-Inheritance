#include "Lesson.h"
#include "PaidLesson.h"

int main()
{
    Lesson a;
    Lesson b("Database", "SQL query", "SELECT query");

    a.showInfo();
    b.showInfo();

    cout << "\n\n\n++++++++++++++++++++++++++++++++++++++";
    cout << "\n++++++++++++++++++++++++++++++++++++++";
    cout << "\n++++++++++++++++++++++++++++++++++++++";
    cout << "\n++++++++++++++++++++++++++++++++++++++\n\n";

    PaidLesson c;
    PaidLesson d("JS", "DOM-model", "Create a gallery!", 200.99);

    c.showInfo();
    d.showInfo();
}

