#include<iostream>
#include<string>
using namespace std;

class Name
{
private:
    string name;
    string cast;
public:
    friend void printname(Name &);
    Name(string a="no",string b="name")
    {
        name = a;
        cast = b;
    }
    Name addname(Name &n)
    {
        Name n1;
        n1.name=name+n.name;
        n1.cast=cast+n.cast;
        return n1;
    }
    Name operator+(Name &k)
    {
        Name n;
        n.name=name+" "+k.name;
        n.cast=cast+" "+k.cast;
        return n;
    }
    Name operator++()
    {
        name=name+name;
        cast=cast+cast;
        return *this;
    }
};
void printname(Name &n)
    {
        cout<<n.name<<" "<<n.cast;
    }

int main()
{
    string a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    Name n(a,b);
    Name n1(c,d);
    Name n2;
    n2=n.addname(n1);
    printname(n2);
    cout<<endl();
    n2=n+n1;
    printname(n2);
    ++n;
    cout<<endl;
    printname(n);
}
