/*Write a method that takes a string as input and returns a compressed version
of it, as shown in the example below:
input: aaabbbbccd
output: a3b4c2d*/

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

#define max_dim 20
typedef char str[max_dim];

bool binary_search(str&, int&, char&, char&);

int main(){
        int lu, count=1;
        str input;
        cout<<"\nInsert the string: ";
        cin>>input;
        lu=strlen(input);
        for (int i=0; i<lu; i++) {
                if (binary_search(input,lu,input[i],input[i+1])) {
                        count++;
                }
                else {
                        cout<<input[i];
                }
        }
//i have to implement the print of the numbers of the chars
        cout<<"\n\n";
}

bool binary_search(str& s, int& n, char& a, char& b)
{
        int i=0,j=n-1,k;
        do {
                k=(i+j)/2;
                if (a != b)
                        i=k+1;
                else
                        j=k-1;
        } while(a != b && i<=j);
        return a == b;
}
