//Ongoing
//http://www.cplusplus.com/reference/cstring/strncpy/
//http://www.cplusplus.com/reference/cstring/strpbrk/
//http://www.cplusplus.com/reference/cstring/strcat/
//strpbrk give me problem

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
bool search_vowel(char * &, char &);

int main() {
        char * string=NULL;
        const char vowel[]="aeiouyAEIOUY";
        //char consonant[]="bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
        insert(string);
        cout<<"\nThe word is: "<<string<<endl;
        /*if (search_vowel(string,vowel)) {
                strcat(string,"yay");
                cout<<"\nThe pig-latin word is: "<<string;
        }*/
        delete [] string;
        cout<<"\n\n";
        return 0;
}

//Function
void insert(char *  & s)
{
        char buffer[100];
        cout<<"\nInsert the word: ";
        cin>>buffer;
        s=new char [strlen(buffer)+1];
        strcpy(s,buffer);
}

bool search_vowel(char * & s, char & v)
{
        bool trovato=false;
        char token[2];  //this take che first letter of the word
        char * pch;  //this take the pointer of the corresponding vowel
        strncpy(token,s,1);
        pch =strpbrk (token,v);
        if (pch != NULL)
                trovato=true;
        return trovato;
}
