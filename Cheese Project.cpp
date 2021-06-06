// Cheese Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//set the constant numbers for the math
const float linesize = 80;
const float cheeseweight = 2.76;
const float barrelcost = 4.12;
const float barrelprofit = 1.45;
//there will be a way for the number to break the max line size because of the decimal, it is set to 3 for the . and the 2 munbers
const int surpluschar = 3;

int main()
{
    //Declare Variables
    float cheese;
    float barrel;
    float cheeseprice;
    float profit;

    //create strings
    //title
    string s0 = " Cheese Profits ";
    //first output
    string s1 = "The amount of containers needed to hold the cheese is: ";
    //second output had to break because adding the float inbetween the strings was breaking the distance between them
    string s2 = "The cost from creating ";
    string s3 = " container(s) of cheese is: $ ";
    //third output, same as for second output
    string s4 = "The profit of creating ";
    string s5 = " container(s) of cheese is: $ ";

    //Title screen
    cout << left << setw(linesize) << setfill('*') << '*' << endl;
    //s
    cout << setw((linesize - s0.length()) / 2) << '*' << setfill(' ') << s0 << setfill('*') << setw((linesize - s0.length()) / 2) << '*' << endl;
    cout << left << setw(linesize) << setfill('*') << '*' << endl;

    //ask for input
    cout << "Enter the amount of kilograms of cheese produced : ";
    cin >> cheese;

    //cheese math
    //how much cheese goes into one container
    barrel = cheese / cheeseweight;
    //make sure the variable for containers is rounded up the nearest whole number, without affecting the other floats
    //price to make containers
    cheeseprice = (ceil(barrel) * barrelcost);
    //profit per container
    profit = (ceil(barrel) * barrelprofit);



    //remove setfill of * from earlier
    cout << setfill(' ') << endl;
    //print first output string and round the float to the nearest whole number
    cout << s1 << setw(linesize - s1.length()) << fixed << setprecision(0) << right << (barrel) << endl;
    //print second output string and round float to 2 decimal places
    //repeating the setw and set prececision forces all the characters to the left of the screen so they dont push the outputs too far out of the right
    cout << s2 << setw(linesize - (s2.length() + s3.length()) * 2) << fixed << setprecision(0) << left << barrel << s3 << setw(linesize - (s2.length() + s3.length()) - surpluschar) << fixed << setprecision(2) << right << (cheeseprice) << endl;
    //repeat second output code for third output
    cout << s4 << setw(linesize - (s4.length() + s5.length()) * 2) << fixed << setprecision(0) << left << barrel << s5 << setw(linesize - (s2.length() + s3.length()) - surpluschar) << fixed << setprecision(2) << right << (profit) << endl;
    //will break placement if number is too high, fixed by adding surpluschar (still breaks if input number is too small or too large)

    //pause code
    return 0;
}
