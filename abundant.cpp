/*If the sum of factors of a number is greater than twice that number, it is
considered to be abundant
(EASY) Write a program to verify whether a given number is abundant.
(MEDIUM) Write a program to find all the abundant numbers in a range.
(HARD) Given a number, write a program to display its factors, their sum and
then verify whether it's abundant or not.*/
#include<iostream>
#include<cstdlib>
using namespace std;

#define max 30
typedef int vec[max];

int easy(int&, int&);
void insert(int&);
void hard(int&, int&);
void medium(int&, int&, vec&, int&);


int main() {
        int num, sum=0, s, start, end, flag=0;
        vec abundant;
        cout<<"\nPick: ";
        cout<<"\n1 for easy.";
        cout<<"\n2 for medium.";
        cout<<"\n3 for hard.";
        cout<<"\nGive me the difficulty: "<<endl;
        cin>>s;
        switch (s) {
                case 1:
                        insert(num);
                        if (easy(num,sum)>(2*num))
                                cout<<"\n"<<num<<" is abundant.";
                        else
                                cout<<"\n"<<num<<" isn't abundant";
                break;
                case 2:
                        cout<<"\nGive the first number of the range: ";
                        cin>>start;
                        cout<<"\nNow the end of the range: ";
                        cin>>end;
                        medium(start,end,abundant,flag);
                        cout<<"\nThe abundant numbers in the range are: ";
                        for (int i=0; i<flag; i++)
                                cout<<abundant[i]<<" ";
                break;
                case 3:
                        insert(num);
                        cout<<"\nThe factor of "<<num<<" is: ";
                        hard(num,sum);
                        cout<<"\nThe sum of factor is: "<<sum;
                        if (sum>(2*num))
                                cout<<"\n"<<num<<" is abundant.";
                        else
                                cout<<"\n"<<num<<" isn't abundant";
                break;
        }
        cout<<"\n\n";
}

void insert(int& a)
{
        cout<<"\nInsert the number: ";
        cin>>a;
}


int easy(int& a, int& sum)
{
        for (int i=1; i<=a; i++) {
                if (a%i==0) {
                        sum+=i;
                }
        }
        return sum;
}

void medium(int& a, int& b, vec& v, int& flag)
{
        int summ=0;
        for (int i=a; i<=b; i++) {
                if (easy(i,summ)>(2*i)) {
                        v[flag++]=i;
                }
                summ=0;
        }
}


void hard(int& a, int& sum)
{
        for (int i=1; i<=a; i++) {
                if (a%i==0) {
                        cout<<i<<" ";
                        sum+=i;
                }
        }
}
