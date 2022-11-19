// write your code here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const string SENTINEL = "-1";
int main()
{
string name;
int numOfVolunteers;
int numOfBoxesSold;
int totalNumOfBoxesSold;
double costOfOneBox;
    
cout << fixed << showpoint << setprecision(2);
//cout << "Enter each volunteer's name and the number of boxes sold by each volunteer ending with -1: " << endl;
totalNumOfBoxesSold = 0;
numOfVolunteers = 0;
numOfBoxesSold = 0;
string * ptr = nullptr;
ptr = new string;
cin >> *ptr;
    
while (*ptr != SENTINEL)
    {
    numOfVolunteers++;
    cin >> numOfBoxesSold;
    totalNumOfBoxesSold += numOfBoxesSold;
    cin >> *ptr;
    }
    cin >> costOfOneBox;
    cout << "Total number of boxes sold:" << totalNumofBoxesSold << endl;
    cout << "Total money made: $" << totalNumofBoxesSold*costOfOneBox << endl;
    if (numOfVolunteers != 0)
        cout << "Average number of boxes sold by each person:" << totalNumOfBoxesSold/numOfvolunteers << endl;
    else 
        cout << "No Input." << endl;
    
    return 0;
}
    
