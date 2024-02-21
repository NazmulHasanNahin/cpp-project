#include<bits/stdc++.h>
using namespace std;
string password(int length)
{
    string pass;
    string random="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789!@#$%&";
    int sz=random.size();
    srand(time(0));
    int gen;
    for(int i=0;i<length;i++)
    {
        gen=rand()%sz;
        pass+=random[gen];
    }
    return pass;
}
int main()
{
    int length;
    cout<<"Enter the length of your password: ";
    cin>>length;
    string pass=password(length);
    cout<<"Genarated Password : "<<pass;
    return 0;
}