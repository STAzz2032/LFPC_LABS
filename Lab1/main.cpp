
#include "HashMap.h"
#include <string>

using namespace std;


int main()
{
    HashMap ht;
    int s = 0, d = 0, r = 0;
    string word;
    read(ht,s,d,r);
    cout<<"Grammar Rules:"<<endl;
    ht.get('S',s);
    ht.get('D',d);
    ht.get('R',r);
    cout<<"Input a word to check:   ";
    cin>>word;
    if (ht.check(word,s,r,d)) cout << word << " is accepted";
    else cout << word << " is not accepted";

}