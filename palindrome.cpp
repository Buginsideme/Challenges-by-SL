/*Create a programm that takes a number as imput and return whether the number
is palindromic or not*/

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


const int max_dim=20;
typedef char str[max_dim];

void control(int&, str&, bool&);


int main(){
        bool flag=true;
        str number;
        cout<<"\nInsert the nuber (Max three digit): ";
        cin>>number;
        int lung=strlen(number);
        control(lung,number,flag);
        if (flag)
                cout<<"\nIt's palindrome";
        else
                cout<<"\nNot palindrome";
        cout<<"\n\n";
}

void control(int& n, str& s, bool& flag)
{
        for (int i=0, j=n-1; i<n/2; i++, j--) {
                if (s[i]!=s[j]) {
                        flag=false;
                        break;
                }
        }
}
