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
    cin >> numOfBoxesSold;
    totalNumOfBoxesSold = totalNumOfBoxesSold+numOfBoxesSold;
    numOfVolunteers++;
    cin >> *ptr;
    }
     cout << endl;
    cout << "Total number of boxes sold: " << totalNumOfBoxesSold << endl;
    cout << "Enter the cost of one box: " << endl;
     cin >> costOfOneBox;
       cout << endl;
    cout << "Total money made: " << "$" << totalNumOfBoxesSold * costOfOneBox << endl;
    if (numOfVolunteers != 0)
          cout << "Average number of " << "boxes sold by each person: "  << totalNumOfBoxesSold / numOfVolunteers  << endl;
    else
    cout << "Total number of boxed sold: " << totalNumOfBoxesSold << endl << "Total money made: " <<totalNumOfBoxesSold * costOfOneBox << endl << "No input." << endl;
    return 0;
    }

