#include <iostream>
#include "Project.h"
#include <string.h>
#include <time.h>
#include <fstream>
using namespace std;

int main()
{
    Movie m;
    {
        time_t t;time(&t);
        tm* timePtr = localtime(&t);

        cout<<" Current time: ";
        cout<<timePtr->tm_hour<<":"<<timePtr->tm_min<<":"<<timePtr->tm_sec<<endl;
        cout << " Current Date: " << timePtr->tm_mday<<"\/"<< timePtr->tm_mon + 1<<"\/"<< timePtr->tm_year+1900 << endl;

         fstream file;
        file.open("C:\\Users\\user\\Desktop\\e1.xls",ios::app);
        if(file)
        {
            file<<timePtr->tm_mday<<"\/"<< timePtr->tm_mon + 1<<"\/"<< timePtr->tm_year + 1900;
        }
        file.close();

	}
	m.home();

    return 0;
}
