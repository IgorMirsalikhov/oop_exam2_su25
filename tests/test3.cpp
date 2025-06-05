#include <iostream>
#include "../PolyStudent.h"

int main(){
    PolyStudent* student = new PolyStudent;
    student->enrollToCourse(3337);
    student->toStudy(181);
    student->toStudy(179);
    
    std::cout << student->isHappy() << std::endl;

    return 0;
}
