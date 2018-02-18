/*Given a string as imput, output it without spaces*/
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

#define max_dim 20
typedef char str[max_dim+1];

int main(){
        str s;
        char a=' ';
        int j=0;
        cout<<"\nInsert the string (Max "<<max_dim<<" type): ";
        cin.getline(s,max_dim);
        int dim=strlen(s);
        for (int i=0; i<dim; i++) {
                if (s[i]!=a) {
                        cout<<s[i];
                }
        }
        cout<<"\n\n";
}
