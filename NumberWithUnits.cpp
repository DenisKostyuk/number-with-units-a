#include "NumberWithUnits.hpp"
#include <iostream>
#include <string>
#include<map>
#include <fstream>
using namespace std;
using namespace ariel;

namespace ariel{
    void NumberWithUnits::read_units(ifstream& inFile){}
    //(+)(+=)(+ onary) (-)(-=)(- onary)
    //NumberWithUnits(double number , string unit);
    void read_units(ifstream &units_file){}
    NumberWithUnits operator+(NumberWithUnits& firstElement , NumberWithUnits& secondElement){return firstElement;}
    NumberWithUnits operator+(NumberWithUnits& onaryElement){return onaryElement;}
    NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& firstElement){return *this;}
    NumberWithUnits operator-(NumberWithUnits& firstElement , NumberWithUnits& secondElement){return firstElement;}
    NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& firstElement){return *this;}
    NumberWithUnits operator-(NumberWithUnits& onaryElement){return onaryElement;}
    //(>)(>=)(<)(<=)(==)(!=)
    bool operator>(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    bool operator>=(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    bool operator<(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    bool operator<=(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    bool operator==(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    bool operator!=(const NumberWithUnits& firstElement ,const  NumberWithUnits& secondElement){return true;}
    //(pre ++)(post ++)(pre --)(post --)
    NumberWithUnits operator++(NumberWithUnits& firstElement){return firstElement;}
    NumberWithUnits& NumberWithUnits::operator++(){return *this;}
    NumberWithUnits operator--(NumberWithUnits& firstElement){return firstElement;}
    NumberWithUnits& NumberWithUnits::operator--(){return *this;}
    //*double
    NumberWithUnits operator*(double d,NumberWithUnits& firstElement){return firstElement;}
    NumberWithUnits operator*(NumberWithUnits& firstElement, double d){return firstElement;}
    //IO
    std::ostream& operator << (std::ostream& ret, const NumberWithUnits& unit){return ret;}
    std::istream& operator >> (std::istream& in, NumberWithUnits& unit){
        in >> unit.number >> unit.unit;
        return in;
    }
    
}