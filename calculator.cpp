#include "calculator.h"

#include <string>
using std::string;
#include <sstream>
using std::istringstream;


int stringCalculate(const string &str)
{
    if (str.empty())
        return 0;

    istringstream iss(str);

    int n1 = 0;
    iss >> n1;
    if (iss.eof())
        return n1;

    char skip;
    iss >> skip;

    int n2 = 0;
    iss >> n2;

    return n1 + n2;
}
