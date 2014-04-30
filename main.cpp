#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>
#include <sys/syscall.h>
int f1() __attribute__((privilegeSeparation(9)));
int f2() __attribute__((privilegeSeparation(8)));
int f3() __attribute__((privilegeSeparation(5)));
int f4() __attribute__((privilegeSeparation(5)));
int f5() __attribute__((privilegeSeparation(5)));
int f6() __attribute__((privilegeSeparation(5)));
int f7() __attribute__((privilegeSeparation(3)));
int f8() __attribute__((privilegeSeparation(1)));
int f9() __attribute__((privilegeSeparation(5)));
struct ciao2 {
    char *name,
    *surname;
}ciao3 __attribute__((privilegeSeparation(5)));
int ciao __attribute__((privilegeSeparation(1)));
int f()
{
   // int c __attribute__((privilegeSeparation(3)));

std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
std::cout << "SADFSADFASDFASDFASDFASDF" << std::endl;
    f3();
    int i;
    i = 1 +1;
    return 1;
}
int f1()
{
    std::cout << "Hello World 1!" << std::endl;
    return 1;
}
int f4() {
    f3();
    std::cout << "Hello World 4!" << std::endl;
    return 4;
}
int f2()
{
    std::cout << "Hello World 2!" << std::endl;
    return 1;
}

int f3()
{
    std::cout << "Hello World 3!" << std::endl;
    return 1;
}
int f5()
{
    std::cout << "Hello World 5!" << std::endl;
    return 1;
}
int f6()
{
    std::cout << "Hello World 6!" << std::endl;
    return 1;
}
int f7()
{
    std::cout << "Hello World2!" << std::endl;
    return 1;
}
int f8()
{
    std::cout << "Hello World2!" << std::endl;
    return 1;
}
int f9()
{
    std::cout << "Hello World2!" << std::endl;
    return 1;
}
int __attribute__((privilegeSeparation(9))) main(void)
{
    f();
    f2();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f();
    return 0;
}
