/*Each day the snail climbs up A meters on a tree with H meters in height. At
night it goes down B meters.
Write a program which takes 3 inputs: H, A, B, and calculates how many days it
take for the snail to get to the top og the tree.
Assume H>A>B
For example:
Input: 15,1,0.5
Output: 29 days*/
#include<iostream>
#include<cstdlib>
using namespace std;


int main() {
        float h, a, b, count=0;
        int days=0;
        cout<<"\nInsert the height of the tree: ";
        cin>>h;
        while (h<=0) {
                cout<<"\nERROR. Reinsert the value: ";
                cin>>h;
        }
        cout<<"\nGive the metres of the day: ";
        cin>>a;
        while (a<=0 || a>h) {
                cout<<"\nERROR. Reinsert the value: ";
                cin>>a;
        }
        cout<<"\nInsert the metres of the night: ";
        cin>>b;
        while (b<=0 || b>a) {
                cout<<"\nERROR. Reinsert the value: ";
                cin>>b;
        }
//easy way
        /*if (h>a && a>b) {
                days = (h-b)/(a-b);
                cout<<days;
        } else {
                cout<<"\nERROR. Wrong value.";
        }*/
//hard way
        if (h>a && a>b) {
                while (count!=h) {
                        cout<<endl<<++days<<"° day";
                        count+=a;
                        cout<<"\nMorning: "<<count;
                        if (count!=h) {
                                count-=b;
                                cout<<"\nNight: "<<count<<endl;
                        }
                }
        } else {
                cout<<"\nERROR. Wrong value.";
        }
        cout<<"\n\n";
}
