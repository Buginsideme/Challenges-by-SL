/*A perfect number is a positive integer that is equal to the sum of its proper
positive divisors, that is, the sum of its positive divisors excluding the
number itself.
The smallest perfect number if 6: its proper divisors are 1,2,3 and 1+2+3=6.
Write a program which will check ifthe given input is a perfect number or not.*/

#include<iostream>
#include<cstdlib>
using namespace std;


int main() {
        int number, count=0;
        cout<<"\nInsert the number (only integer): ";
        cin>>number;
        for (int i=1; i<number; i++) {
                if ((number%i) == 0) {
                        count += i;
                } else
                        break;
        }
        if (count==number) {
                cout<<"\nThe number "<<number<<" is perfect.";
        } else
                cout<<"\nThe number "<<number<<" isn't perfect.";
        cout<<"\n\n";
}
