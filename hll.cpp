#include <iostream>
#include <ctime>

int main()
{
    int hours;
    int minutes;
    int seconds;
   std:: cout << "Enter Hours: ";
   std:: cin >> hours;
   std:: cout << "Enter Minutes: ";
   std::cin >> minutes;
   std:: cout << "Enter Seconds: ";
   std::cin >> seconds;
   time_t long_totalsecs = hours*3600+minutes*60+seconds;
   std:: cout << "Total Seconds " << long_totalsecs;
}