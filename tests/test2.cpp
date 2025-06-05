#include <iostream>
#include "../PolyStudent.h"

int main(){
    PolyStudent* student = new PolyStudent[100];
    student[8].enrollToCourse(3337);
    student[9].enrollToCourse(3336);
    student[10].enrollToCourse(3337);
    std::cout << PolyStudent::studentsIn3337 << std::endl;

    return 0;
}
