/*Write a programm that takes a string as input anda converts it intno Morse code*/
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

#define max_dim 30
typedef char str[max_dim];

int main(){
        str s1, s2;
        char c;
        cout<<"\nInsert the world to convert: ";
        cin>>s1;
        int l=strlen(s1);
        for (int i=0; i<l; i++) {
                switch (s1[i]) {
                        case 'A':
                        case 'a':
                                cout<<".-"<<" ";
                                break;
                        case 'B':
                        case 'b':
                                cout<<"-..."<<" ";
                                break;
                        case 'C':
                        case 'c':
                                cout<<"-.-."<<" ";
                                break;
                        case 'D':
                        case 'd':
                                cout<<"-.."<<" ";
                                break;
                        case 'E':
                        case 'e':
                                cout<<"."<<" ";
                                break;
                        case 'F':
                        case 'f':
                                cout<<"..-."<<" ";
                                break;
                        case 'G':
                        case 'g':
                                cout<<"--."<<" ";
                                break;
                        case 'H':
                        case 'h':
                                cout<<"...."<<" ";
                                break;
                        case 'I':
                        case 'i':
                                cout<<".."<<" ";
                                break;
                        case 'J':
                        case 'j':
                                cout<<".---"<<" ";
                                break;
                        case 'K':
                        case 'k':
                                cout<<"-.-"<<" ";
                                break;
                        case 'L':
                        case 'l':
                                cout<<".-.."<<" ";
                                break;
                        case 'M':
                        case 'm':
                                cout<<"--"<<" ";
                                break;
                        case 'N':
                        case 'n':
                                cout<<"-."<<" ";
                                break;
                        case 'O':
                        case 'o':
                                cout<<"---"<<" ";
                                break;
                        case 'P':
                        case 'p':
                                cout<<".--."<<" ";
                                break;
                        case 'Q':
                        case 'q':
                                cout<<"--.-"<<" ";
                                break;
                        case 'R':
                        case 'r':
                                cout<<".-."<<" ";
                                break;
                        case 'S':
                        case 's':
                                cout<<"..."<<" ";
                                break;
                        case 'T':
                        case 't':
                                cout<<"-"<<" ";
                                break;
                        case 'U':
                        case 'u':
                                cout<<"..-"<<" ";
                                break;
                        case 'V':
                        case 'v':
                                cout<<"...-"<<" ";
                                break;
                        case 'W':
                        case 'w':
                                cout<<".--"<<" ";
                                break;
                        case 'X':
                        case 'x':
                                cout<<"-..-"<<" ";
                                break;
                        case 'Y':
                        case 'y':
                                cout<<"-.--"<<" ";
                                break;
                        case 'Z':
                        case 'z':
                                cout<<"--.."<<" ";
                                break;
                        case '0':
                                cout<<"-----"<<" ";
                                break;
                        case '1':
                                cout<<".----"<<" ";
                                break;
                        case '2':
                                cout<<"..---"<<" ";
                                break;
                        case '3':
                                cout<<"...--"<<" ";
                                break;
                        case '4':
                                cout<<"....-"<<" ";
                                break;
                        case '5':
                                cout<<"....."<<" ";
                                break;
                        case '6':
                                cout<<"-...."<<" ";
                                break;
                        case '7':
                                cout<<"--..."<<" ";
                                break;
                        case '8':
                                cout<<"---.."<<" ";
                                break;
                        case '9':
                                cout<<"----."<<" ";
                                break;
                }
        }
        cout<<"\n\n";
}
