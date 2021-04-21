
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

using namespace std;


namespace ariel{
    class NumberWithUnits{
        
        public:

        double number;
        string km;    
        NumberWithUnits(double num, string KM){
            number = num;
            km = KM;
        };
        static void read_units(ifstream& file){

        };
        friend std::ostream& operator<<(std::ostream& out, const NumberWithUnits& NumberWithUnits);
        friend NumberWithUnits operator-(const NumberWithUnits a);
        friend NumberWithUnits operator+(const NumberWithUnits a);
        friend NumberWithUnits operator*(double num, const NumberWithUnits a);
        friend NumberWithUnits operator+(const NumberWithUnits a, const NumberWithUnits b);
        friend NumberWithUnits operator-(const NumberWithUnits b, const NumberWithUnits a);
        friend bool operator>(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator>=(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator<(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator<=(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator==(const NumberWithUnits a, const NumberWithUnits b);
        friend bool operator!=(const NumberWithUnits a, const NumberWithUnits b);
        friend NumberWithUnits operator-=(const NumberWithUnits a, const NumberWithUnits b);
        friend NumberWithUnits operator+=(const NumberWithUnits a, const NumberWithUnits b);
        friend NumberWithUnits operator++(const NumberWithUnits a);
        friend NumberWithUnits operator--(const NumberWithUnits a);
        friend NumberWithUnits operator--(const NumberWithUnits a, int);
        friend std::istream& operator>> (std::istream& in, NumberWithUnits& a);
        friend NumberWithUnits operator++(const NumberWithUnits a, int);
    };
    
}
