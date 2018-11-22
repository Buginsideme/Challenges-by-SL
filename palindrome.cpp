/*Create a programm that takes a number as imput and return whether the number
is palindromic or not*/

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;


const int max_dim=20;
typedef char str[max_dim];

bool control(const str &);


int main(){
        str number;
        cout<<"\nInsert the nuber: ";
        cin>>number;
        if (control(number))
                cout<<"\nIt's palindrome";
        else
                cout<<"\nNot palindrome";
        cout<<"\n\n";
}

bool control(const str & s)
{
        bool flag=false;
        int i=0, j=strlen(s)-1;
        while (i<(strlen(s))/2 && !flag) {
                if (s[i++]==s[j--]) {
                        flag=true;
                }
        }
        return trovato;
        
        //Another way
        /*int start=0, end=strlen(s)-1;
        while (start<end) {
                if (s[start++]!=s[end--])
                        return false;
        }
        return true;*/
}
