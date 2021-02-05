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

    int result = 0;
    iss >> result;

    return result;
}
