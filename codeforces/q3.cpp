#include<iostream>
#include<string>
using namespace std;
class complex_no{
private:
    int real,img;
public:
    friend istream &operator >> (istream &input,complex_no &c);
    complex_no(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    string operator==(complex_no &c)
    {
        if (real==c.real)
            return "Equal\n";
        else
            return "Not equal\n";
    }
    string operator!=(complex_no &c)
    {
        if (real!=c.real)
            return "Not equal\n";
        else
            return "Equal\n";
    }
};
istream &operator >> (istream &input,complex_no &c)
    {
        input>>c.real>>c.img;
        return input;
    }
int main()
{
    complex_no c1,c2;
    bool m;
    cin>>c1;
    cin>>c2;
    cout<<(c1==c2);
    cout<<(c1!=c2);
}

