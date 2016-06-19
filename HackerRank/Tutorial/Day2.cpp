#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealc,tip,tax;   //To Avoid the precision tricky part.
    cin>>mealc>>tip>>tax;
    tip=mealc*double(tip/100.0);
    tax=mealc*double(tax/100.0);
    double totalCost=mealc+tax+tip;
    cout<<"The total meal cost is "<<round(totalCost)<<" dollars."<<endl;


}
