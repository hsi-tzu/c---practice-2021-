#include <iostream>

using std::cout;
using std::endl;

// Time abstract data type (ADT) definition
class Time {
  public:
    Time(); // constructor
    void setTime( int, int, int ); // set hour, minute, second
    void printMilitary(); // print military time format
    void printStandard(); // print standard time format
  private:
    int hour; // 0 - 23
    int minute; // 0 - 59
    int second; // 0 - 59
}; // end class Time

 // Time constructor initializes each data member to zero.
 // Ensures all Time objects start in a consistent state.
Time::Time() { hour = minute = second = 0; }

 // Set a new Time value using military time. Perform validity
 // checks on the data values. Set invalid values to zero.
void Time::setTime( int h, int m, int s )
 {
 hour = ( h >= 0 && h < 24 ) ? h : 0;
 minute = ( m >= 0 && m < 60 ) ? m : 0;
 second = ( s >= 0 && s < 60 ) ? s : 0;
 } // end function setTime

 // Print Time in military format
void Time::printMilitary()
{
    cout << ( hour < 10 ? "0" : "" ) << hour << ":"<< ( minute < 10 ? "0" : "" ) << minute;
} // end function printMilitary

 // Print Time in standard format
void Time::printStandard()
{
 cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":" << ( minute < 10 ? "0" : "" ) << minute << ":" << ( second < 10 ? "0" : "" ) << second<< ( hour < 12 ? " AM" : " PM" );
} // end function printStandard

// Driver to test simple class Time
int main()
{
 Time t; // instantiate object t of class Time
54
55 cout << "The initial military time is ";
56 t.printMilitary();
57 cout << "\nThe initial standard time is ";
58 t.printStandard();
59
60 t.setTime( 13, 27, 6 );
61 cout << "\n\nMilitary time after setTime is ";
62 t.printMilitary();
63 cout << "\nStandard time after setTime is ";
64 t.printStandard();
65
66 t.setTime( 99, 99, 99 ); // attempt invalid settings
67 cout << "\n\nAfter attempting invalid settings:"
68 << "\nMilitary time: ";
69 t.printMilitary();
70 cout << "\nStandard time: ";
71 t.printStandard();
72 cout << endl;
73 return 0;
74 } /