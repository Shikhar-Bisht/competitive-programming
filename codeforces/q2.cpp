#include<iostream>
using namespace std;
class complex_no{
private:
    int real,img;
public:
    friend ostream &operator<<(ostream &o,complex_no &c);
    friend istream &operator >> (istream &input,complex_no &c);
    complex_no(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex_no operator+(complex_no &c)
    {
        complex_no result;
        result.real=real+c.real;
        result.img=img+c.img;
        return result;
    }
};
ostream &operator<<(ostream &o,complex_no &c)
{
    o<<c.real<<"+ i"<<c.img<<endl;
    return o;
}
istream &operator >> (istream &input,complex_no &c)
    {
        input>>c.real>>c.img;
        return input;
    }
int main()
{
    complex_no c1,c2,c3;
    cin>>c1;
    cin>>c2;
    c3=c1+c2;
    cout<<c3;
}
