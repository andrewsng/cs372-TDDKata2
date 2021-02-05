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

    while (true)
    {
        int n = 0;
        iss >> n;
        if (!iss)
        {
            if (iss.eof())
            {
                break;
            }

            iss.clear();
            iss.ignore(1);
        }

        if (n < 0)
        {
            throw std::out_of_range("Negative number");
        }

        result += n;
    }

    return result;
}
