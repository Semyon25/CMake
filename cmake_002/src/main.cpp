#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;

std::string utc_date()
{
    namespace bg = boost::gregorian;

    static char const* const fmt = "%d.%m.%Y";
    std::ostringstream ss;
    
    ss.imbue(std::locale(std::cout.getloc(), new bg::date_facet(fmt)));
    ss << bg::day_clock::universal_day();
    return ss.str();
}

void main()
{
    cout << "Current date: " << utc_date() << endl;
}