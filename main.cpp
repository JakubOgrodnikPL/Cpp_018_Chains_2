#include <iostream>

using namespace std;

int main()
{
    cout<<"This program reverses given phrase;"<<endl;

    string word;
    cout<<"Give a word to reverse:";
    getline(cin,word); //it makes space char not breaking the string

    int len = word.length();

    for(int i=len-1; i>=0; i--)
    {
        cout<<word[i];
    }

    cout<<endl<<"Press any key to exit";
    getchar(); getchar();
    return 0;
}
