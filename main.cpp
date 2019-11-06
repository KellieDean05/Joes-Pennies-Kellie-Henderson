//Kellie Henderson, Dr_T, 8-19-2019
// A program to calculate Joe's monies from the bank.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  cout << fixed << setprecision(3);
// Declare and intialize an variable for pennies.
// Get the amount of Pennies Joe exchanged for cash from the bank.
 int pennies = 0;
 int division = 0;
 double division_double = 0.0;
 cout << "Please enter how many Pennies you have or enter '-1' to exit." << endl;
 cin >> pennies ; 
if (pennies != -1 ) 
 {
   cout << "\nYour Pennies amount to "<< (pennies/100)
  << " in dollars with a remainder of: "<< endl;

   cout << (pennies % 100/ 25)<< " Quarters, " << endl;
   
   cout << (pennies % 25 / 10) << " Dimes," << endl;
   cout << (pennies % 10 / 20) << " Nickles, and " << endl; 
   cout << (pennies / pennies % 100) << " pennies." << endl;
 } 
  else if (pennies == -1)
   {
   cout << "Goodbye." << endl; 
   }
  return 0;
}