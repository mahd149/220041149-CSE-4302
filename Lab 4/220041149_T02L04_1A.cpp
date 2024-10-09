#include <iostream>
#include <string>
using namespace std;

class Flightdett
{
private:
    int FlightNum;
    string Dest;
    float Dist;
    float FuelCap;
    double CalFuel()
    {
        if (Dist <= 1000)
        {
            return 500;
        }
        else if (Dist > 1000 && Dist <= 2000)
        {
            return 1100;
        }
        // else if (Dist > 2000)
        {
            return 2200;
        }
    }

public:
    void FeedInfo()
    {
        int Fnum;
        string destination;
        float distance;
        float cap;

        cout << "Flight number : ";
        cin >> Fnum;
        cin.ignore();
        cout << "Destination : ";
        cin >> destination;
        cin.ignore();
        cout << "Distance : ";
        cin >> distance;
        cout << "Fuel capacity : ";
        cin >> cap;

        FlightNum = Fnum;
        Dest = destination;
        Dist = distance;
        FuelCap = cap;
    }

    void ShowInfo()
    {
        cout << "Flight Number : " << FlightNum << "\n";
        cout << "Flight Destination : " << Dest << "\n";
        cout << "Flight distance : " << Dist << "\n";
        cout << "Fuel Capacity : " << FuelCap << "\n";
        cout << "Fuel required : " << CalFuel() << "\n";
        if (CalFuel() > FuelCap)
        {
            cout << "Not sufficient Fuel Capacity for this flight.\n";
        }
        else
        {
            cout << "Fuel capacity is fit for this flight distance.\n";
        }
    }
};

int main()
{
    Flightdett f;
    f.FeedInfo();
    f.ShowInfo();
}