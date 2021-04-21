
#include "NumberWithUnits.hpp"

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;
using ariel::NumberWithUnits;

namespace ariel{

        std::ostream& operator<<(std::ostream& out, const NumberWithUnits& NumberWithUnits){
            out << NumberWithUnits.number << "[" << NumberWithUnits.km << "]" ;
            return out;
        }
        NumberWithUnits operator-(const NumberWithUnits a){
            return a;
        }
        NumberWithUnits operator+(const NumberWithUnits a){
            return a;
        }
        NumberWithUnits operator*(double num, const NumberWithUnits a){
            return a;
        }
        NumberWithUnits operator+(const NumberWithUnits a, const NumberWithUnits b){
            return a;
        }
        NumberWithUnits operator-(const NumberWithUnits b, const NumberWithUnits a){
            return a;
        }
        bool operator>(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        bool operator>=(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        bool operator<(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        bool operator<=(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        bool operator==(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        bool operator!=(const NumberWithUnits a, const NumberWithUnits b){
            return true;
        }
        NumberWithUnits operator-=(const NumberWithUnits a, const NumberWithUnits b){
            return a;
        }
        NumberWithUnits operator+=(const NumberWithUnits a,const NumberWithUnits b){
            return a;
        }
        NumberWithUnits operator++(const NumberWithUnits a){
            return a;
        }
        NumberWithUnits operator--(const NumberWithUnits a){
            return a;
        }
        NumberWithUnits operator--(const NumberWithUnits a, int){
            return a;
        }
        std::istream& operator>> (std::istream& in, NumberWithUnits& a){
            in>> a.number >>a.km;
            return in;
        }
        NumberWithUnits operator++(const NumberWithUnits a, int){
            return a;
        }
    // NumberWithUnits::
}