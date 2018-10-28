//Ongoing
//http://www.cplusplus.com/reference/cstring/strncpy/
//http://www.cplusplus.com/reference/cstring/strpbrk/

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


int main() {
        bool trovato=false;
        char * string=NULL;
        const char vowel[]="aeiouyAEIOUY";
        //char consonant[]="bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
        char buffer[1000];
        cout<<"\nInsert the word: ";
        cin.getline(buffer,100);
        string=new char [strlen(buffer)+1];
        strcpy(string,buffer);
        cout<<"\nThe word is: "<<string<<endl;
        char token[2]; //this take che first letter of the word
        char * pch;    //this take the pointer of the corresponding vowel
        strncpy(token,string,1);
        pch = strpbrk (token, vowel);
        if (pch != NULL)
                trovato=true;
        if (trovato)
                strcat(string,"yay");
        cout<<"\nThe pig-latin word is: "<<string;
        delete [] string;
        cout<<"\n\n";
        return 0;
}
