#include <iostream>
#include <tchar.h>
#include <chrono>
#include <string>
#include <thread>
#include "constream.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
    using namespace std;
    using namespace conio;
    using namespace std::chrono_literals;
    string strLine("Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!");
    int nLen = strLine.length();
    clrscr(cout);
    for (int i = 0; i < nLen; i++)
    {
        for (int j = 70; j > 10 + i; j--)
        {
            cout << setcrsrtype(0) << setxy(10 + j, 10) << strLine[i] << " ";
            std::this_thread::sleep_for(5ms);
        }
    }
    cout << setcrsrtype(0) << setxy(10, 10) << strLine;
    getch();
}
