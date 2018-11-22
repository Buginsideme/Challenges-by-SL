/*Given a string as imput, output it without spaces*/

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

#define max_dim 20
typedef char str[max_dim+1];

int main(){
        str s;
        cout<<"\nInsert the string (Max "<<max_dim<<" type): ";
        cin.get(s,max_dim);
        for (int i=0; i<strlen(s); i++) {
                if (s[i]!=' ') {
                        cout<<s[i];
                }
        }
        cout<<"\n\n";
}
