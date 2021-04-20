#include <iostream>
#include <string>
using namespace std;

namespace ariel{
    class NumberWithUnits{
        private:
            std::string unit;
            double number;
        public:
            NumberWithUnits(double number , std::string unit){}
            //(+)(+=)(+ onary) (-)(-=)(- onary)
            static void read_units(std::ifstream &units_file);
            friend NumberWithUnits operator+(NumberWithUnits& firstElement , NumberWithUnits& secondElement);
            friend NumberWithUnits operator+(NumberWithUnits& onaryElement);
            NumberWithUnits& operator+=(const NumberWithUnits& firstElement);
            friend NumberWithUnits operator-(NumberWithUnits& firstElement , NumberWithUnits& secondElement);
            NumberWithUnits& operator-=(const NumberWithUnits& firstElement);
            friend NumberWithUnits operator-(NumberWithUnits& onaryElement);
            //(>)(>=)(<)(<=)(==)(!=)
            friend bool operator>(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            friend bool operator>=(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            friend bool operator<(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            friend bool operator<=(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            friend bool operator==(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            friend bool operator!=(const NumberWithUnits& firstElement , const NumberWithUnits& secondElement);
            //(pre ++)(post ++)(pre --)(post --)
            friend NumberWithUnits operator++(NumberWithUnits& firstElement);
            NumberWithUnits& operator++();
            friend NumberWithUnits operator--(NumberWithUnits& firstElement);
            NumberWithUnits& operator--();
            //*double
            friend NumberWithUnits operator*(NumberWithUnits& firstElement, double d);
            friend NumberWithUnits operator*(double d , NumberWithUnits& firstElement);
            //IO
            friend std::ostream& operator << (std::ostream& ret, const NumberWithUnits& unit);
            friend std::istream& operator >> (std::istream& in, NumberWithUnits& unit);
    };
}