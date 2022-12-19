#include<iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main() {
   /* Greet the user and give a run down of what will be asked. */
   cout << "Hello! Welcome to this simple Investment Calculator.\n";
   
   cout << "\nYou will be asked to input the following:\n";
   cout << " 1. Principal Investment\n";
   cout << " 2. Monthly/Yearly Contributions\n";
   cout << " 3. Years You Will Let Your Money Grow For\n";
   cout << " 4. Expected Rate of Return\n";

   cout << "\nPress the space bar to get started.\n";

   /* Ask for initial investment. */
   int principal;
   cout << "Enter your principal investment: $";
   cin >> principal;

   /* Contributions made monthly or yearly? (0 for monthly, 1 for yearly) */
   int choice;
   cout << "\nWill you make monthly or yearly contributions?\n";
   cout << "Enter 0 for Monthly Contributions.\n";
   cout << "Enter 1 for Yearly Contribution.\n";
   cin >> choice;

   /* Contributions per month/year. */
   int contribution;
   if (choice == 0) {
      cout << "\nHow much per month? $";
      cin >> contribution;
   } else {
      cout << "\nHow much per year? $";
      cin >> contribution;
   }

   /* The time period money will be invested for. */
   int time;
   cout << "\nEnter the years you will let your money grow for: ";
   cin >> time;

   /* Expected rate of return. */
   double rate;
   cout << "\nEnter the rate of return you expect: ";
   cin >> rate;
   rate = rate / 100;

   /* Investment calculation. */
   double principalAmount;
   double futureValue;
   if (choice == 0) {
      principalAmount = principal * pow(1 + (rate / 12), time * 12);
      futureValue = (contribution * (pow(1 + (rate / 12), time * 12) - 1) / (rate / 12)) * (1 + (rate / 12));

   } else {
      principalAmount = principal * pow(1 + rate, time);
      futureValue = (contribution * (pow(1 + rate, time) - 1) / rate) * (1 + rate);
   }

   /* Output. */
   double finalInvestment;
   finalInvestment = principalAmount + futureValue;
   
   cout << "\nYOUR INVESTMENT WILL BE WORTH: $"<< finalInvestment <<"\n";







 




   






   
}