//Ongoing
//http://www.cplusplus.com/reference/cstring/strncpy/
//http://www.cplusplus.com/reference/cstring/strpbrk/
//http://www.cplusplus.com/reference/cstring/strcat/

/*Pig Latin
Pig Latin is an argot ("secret" language) in which words in English are altered
to conceal the words from others not familiar with the rules.You convert a word
to pig latin by transferring the initial consonant or consonant cluster of the
word to the end of the word with -ay appended to the end. If the word starts
with a vowel (including y), append -yay to the end. For example, "pig" would
become igpay (taking the 'p' and 'ay' to create a suffix).

Examples:
Input: say
Output: aysay

Input: english
Output: englishyay

Input: smile
Output: ilesmay

Write a program that translates the user input (an English word) to Pig Latin.
Bonus: Do the reverse and translate Pig Latin to English.*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//Prototypes
void insert(char * &);
bool is_vowel(const char *, const char *);

int main() {
        char * str;
        const char vowel[]="aeiouyAEIOUY";
        insert(str);
        if (is_vowel(str,vowel))
                strcat(str,"yay");
        cout<<"\nThe word in pig latin is: "<<str<<endl;
        /*else {
                for (int j=0; j<strlen(s); j++) {
                        int i;
                        mystring temp="";
                        strcpy(temp,s);
                        for (i=0; i<strlen(temp); i++)
                                temp[i]=temp[i+1];
                        temp[i]='\0';
                        //i=0;
                        strncpy(token,temp,1);
                        pch = strpbrk (token, vowel);
                        if (pch != NULL)
                                trovato=true;
                        if (trovato)
                                cout<<"\nLa successiva è una vocale";
                }
        }*/
        cout<<"\n\n";
        return 0;
}

//Function
void insert(char * & s)
{
        cout<<"\nInsert the word: ";
        char buffer[100];
        cin.getline(buffer,100);
        s=new char [strlen(buffer)+1];
        strcpy(s,buffer);
}

bool is_vowel(const char * s, const char * v)
{
        char * pch;  //this take the pointer of the corresponding vowel
        char token[2];  //this take che first letter of the word
        strncpy(token,s,1);
        pch=strpbrk(token,v);
        return (pch != NULL);
}


