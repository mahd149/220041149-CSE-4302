#include <bits/stdc++.h>

using namespace std;

int main()
{
    string unit;
    double deg;
    cin >> deg;
    cin.ignore();
    cin >> unit;
    cin.ignore();
     cout<<"The temperature is "<<deg<< " degress "<< unit<<'\n';

    map<pair<string, string>, function<double(double)>> conversions =
        {
            {{"Celsius", "Fahrenheit"}, [](double temp)
             { return temp * 9.0 / 5.0 + 32; }},

            {{"Celsius", "Kelvin"}, [](double temp)
             { return temp + 273.15; }},

            {{"Fahrenheit", "Celsius"}, [](double temp)
             { return (temp - 32) * 5.0 / 9.0; }},

            {{"Fahrenheit", "Kelvin"}, [](double temp)
             { return (temp - 32) * 5.0 / 9.0 + 273.15; }},

            {{"Kelvin", "Celsius"}, [](double temp)
             { return temp - 273.15; }},

            {{"Kelvin", "Fahrenheit"}, [](double temp)
             { return (temp - 273.15) * 9.0 / 5.0 + 32; }},

        };
    string target;
    cin >> target;
    if (conversions.find({unit, target}) != conversions.end())
    {
        deg = conversions[{unit, target}](deg);
        unit = target;
    }
     cout<<"The temperature is "<<deg<< " degress "<< unit<<'\n';
    map<string, double> absZero =
        {
            {"Celsius", -273.15},
            {"Fahrenheit", -459.66},
            {"Kelvin", 0}};

    if (absZero.find(unit) != absZero.end() && deg < absZero[unit])
    {
        cout << "Temperature is below absZero in " << unit << " unit\n";
    }
}