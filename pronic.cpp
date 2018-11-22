/*Pronic number is a number which is the product of two consecutive
integers, that is, n=x*(x+1)*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool pronic(int&);

int main(){
        int num;
        cout<<"\nGive me the number: ";
        cin>>num;
        if (pronic(num))
                cout<<num<<" is a pronic number.";
        else
                cout<<num<<" is not a pronic number.";
        cout<<"\n\n";
}

bool pronic(int& num)
{
        for (int x=0; x<num; x++) {
                if (num==(x*(x+1))) {
                        return true;
                }
        }
        return false;
}
