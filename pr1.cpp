#include<iostream>
#include<map>
using namespace std;

int main()
{

    map< char, int > mp;

    // declaring iterators
    map<char, int>::iterator it ;
    map<char, int>::iterator it1 ;
    map<char, int>::iterator it2 ;
    mp['a']=5;
    mp['b']=10;
    mp['c']=15;
    mp['h']=20;
    mp['k']=30;
    it = mp.lower_bound('b');

    if(it == mp.end())
        cout << "Key-value pair not present in map" ;
    else
        cout << "Key-value pair returned : "
            << it->first << "->" << it->second ;

    cout << endl ;
    it1 = mp.lower_bound('d');

    if(it1 == mp.end())
        cout << "Key-value pair not present in map" ;
    else
        cout << "Key-value pair returned : "
            << it1->first << "->" << it1->second ;

    cout << endl;


    it2 = mp.lower_bound('p');

    if(it2 == mp.end())
        cout << "Key-value pair not present in map" ;
    else
        cout << "Key-value pair returned : "
            << it2->first << "->" << it2->second ;

}
