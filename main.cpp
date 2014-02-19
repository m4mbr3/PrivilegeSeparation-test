#include <cstdlib>
#include <iostream>
#include <string>
int f2() __attribute__((privilegeSeparation(2)));
int f() __attribute__((privilegeSeparation(4)));
struct ciao2 {
    std::string name,
    surname;
}ciao3 __attribute__((privilegeSeparation(6)));
int ciao __attribute__((privilegeSeparation(5)));
int f()
{
   // int c __attribute__((privilegeSeparation(3)));

std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;

    int i;
    i = 1 +1;
    return 1;
}
int __attribute__((privilegeSeparation(9))) f4() {
    std::cout << "asdasdasd" << std::endl;
    return 4;
}
int f2()
{
    std::cout << "Hello World2!" << std::endl;
    return 1;
}
int main(void)
{
    f();
    f4();
    f2();
    std::cout << "Hello World!" << std::endl;
    return 1;
}
