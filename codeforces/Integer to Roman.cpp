#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string s="",temp="";
        while(num/1000>0)
        {

            temp=temp+"M";
            num=num-1000;
        }
        s=s+temp;
        temp="";
        while(num/100>0)
        {
            if(num/100==9)
            {
                temp="CM";
                num=num-900;
                continue;
            }
            if(num/100>=5)
            {
                temp=temp+"D";
                num=num-500;
                continue;
            }
            if(num/100==4)
            {
                temp=temp+"CD";
                num=num-400;
                continue;
            }
            temp=temp+"C";
            num=num-100;
        }
        s=s+temp;
        temp="";
        while(num/10>0)
        {
            if(num/10==9)
            {
                temp="XC";
                num=num-90;
                continue;
            }
            if(num/10>=5)
            {
                temp=temp+"L";
                num=num-50;
                continue;
            }
            if(num/10==4)
            {
                temp=temp+"XL";
                num=num-40;
                continue;
            }
            temp=temp+"X";
            num=num-10;
        }
        s=s+temp;
        temp="";
        while(num!=0)
        {
            if(num==9)
            {
                temp="IX";
                num=num-9;
                continue;
            }
            if(num>=5)
            {
                temp=temp+"V";
                num=num-5;
                continue;
            }
            if(num==4)
            {
                temp=temp+"IV";
                num=num-4;
                continue;
            }
            temp=temp+"I";
            num=num-1;
        }
        s=s+temp;
        cout<<s;
}
