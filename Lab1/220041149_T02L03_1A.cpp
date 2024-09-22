#include<bits/stdc++.h>
using namespace std;

class Temperature
{
    double deg;
    string unit;
    
public:
    void assign (double x, string unt)
    {
        if(set<string>{"Celsius", "Fahrenheit", "Kelvin"}.count(unt) == 0)
        {
            cout<<"Invalid unit\n";
            return;
        }
        map<string, double> absoluteZero = 
        {
            {"Celsius", -273.15},
            {"Fahrenheit", -459.66},
            {"Kelvin", 0}

        };
        if (absoluteZero.find(unt)!= absoluteZero.end() && x < absoluteZero[unt])
        {
            cout<<"Temparature is below zero in "<<unt<<endl;
            return;
        }
        deg = x;
        unit = unt;
    }
    double convert(string target)
    {
        if (set<string>{"Celsius", "Fahrenheit", "Kelvin"}.count(target) == 0)
        {
            cout<<"Invaid target unit\n";
            return 0;
        }
        double temp_temp = deg;
        map<pair<string, string>, function<double(double)>> conversions =
            {
                {{"Celsius", "Fahrenheit"}, [](double temp){ return temp * 9.0 / 5.0 + 32; }},

                {{"Celsius", "Kelvin"}, [](double temp){ return temp + 273.15; }},

                {{"Fahrenheit", "Celsius"}, [](double temp){ return (temp - 32) * 5.0 / 9.0; }},

                {{"Fahrenheit", "Kelvin"}, [](double temp){ return (temp - 32) * 5.0 / 9.0 + 273.15; }},

                {{"Kelvin", "Celsius"}, [](double temp){ return temp - 273.15; }},

                {{"Kelvin", "Fahrenheit"}, [](double temp){ return (temp - 273.15) * 9.0 / 5.0 + 32; }},

            };
        if(conversions.find({unit, target}) != conversions.end())
        {
            temp_temp = conversions[{unit, target}](temp_temp);
            deg = temp_temp;
            unit = target;
            return temp_temp;
        }
        else cout<<"Conversions not supported\n";
        

    }
    void print()
    {
        cout<<"The temperature is "<<deg<< " degress "<< unit<<'\n';
    }
};

int main()
{
    Temperature t1;
    t1.assign(-100, "Celsius");
    t1.print();
    t1.convert("Kelvin");
    t1.print();
    t1.assign(-200, "Kelvin");
    t1.print();
}