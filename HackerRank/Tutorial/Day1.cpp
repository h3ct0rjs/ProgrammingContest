#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    cin>>i2>>d2;
    cin.ignore();  	//ignores an end of line character, this is the Tricky part of the challenge
			//because you're going to receive :"is the best place to learn and practice coding!"

    getline(cin,s2);
    // Print the sum of both integer variables on a new line.
    cout<<i+i2<<endl;
    // Print the sum of the double variables on a new line.
    cout<<fixed;cout<<setprecision(1);
    cout<<d+d2<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s+s2<<endl;
}
