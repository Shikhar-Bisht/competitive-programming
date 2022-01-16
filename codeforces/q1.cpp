#include<iostream>
#include<string>
using namespace std;
class complex_no{
private:
    int real,img;
public:
    complex_no(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend istream &operator >> (istream &input,complex_no &c);
    friend ostream &operator << (ostream &output,complex_no &c);
};
istream &operator >> (istream &input,complex_no &c)
    {
        input>>c.real>>c.img;
        return input;
    }
ostream &operator << (ostream &output,complex_no &c)
    {
        output<<c.real<<"+ i"<<c.img<<endl;
        return output;
    }
int main()
{
complex_no c1;
cin>>c1;
cout<<c1;
return 0;
}

