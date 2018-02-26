/*Pronic number is a number which is the product of two consecutive
integers, that is, n=x*(x+1)*/
#include<iostream>
#include<cstdlib>
using namespace std;

bool pronic(int&, bool&);

int main(){
        int num;
        bool flag=false;
        cout<<"\nGive me the number: ";
        cin>>num;
        if (pronic(num,flag))
                cout<<num<<" is a pronic number.";
        else
                cout<<num<<" is not a pronic number.";
        cout<<"\n\n";
}

bool pronic(int& num, bool& flag)
{
        for (int x=0; x<num; x++) {
                if (num==(x*(x+1))) {
                        flag=true;
                }
        }
        return flag;
}
