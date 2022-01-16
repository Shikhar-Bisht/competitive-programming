#include<iostream>
#include<string>
using namespace std;
int checkname(string p1,string p2,string &p)
{
    if (p==p1||p==p2)
    {
        return 1;
    }
    else
    {
        cout<<p<<" is not a registered player"<<endl;
        return 0;
    }
}
int checkrow(int r)
{
    if (r>=0&&r<=2)
    {
        return 1;
    }
    else
    {
        cout<<r<<" is not valid "<<endl;
        return 0;
    }
}
int checkcolumn(int c)
{
    if (c>=0&&c<=2)
    {
        return 1;
    }
    else
    {
        cout<<c<<" is not valid "<<endl;
        return 0;
    }
}
void printit(string arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printturn(int i,string p1,string p2,string &p)
{
    if(i==0)
    {
        p=p;
    }
    else if(p==p1)
    {
        p=p2;
    }
    else if(p==p2)
    {
        p=p1;
    }
    cout<<"Player with current turn is "<<p<<endl;
}
int checkv(string arr[3][3],int r,int c)
{
    if(arr[r][c]=="X"||arr[r][c]=="O")
    {
        cout<<"Place occupied"<<endl;
        return 0;
    }
    else
    {
        return 1;
    }
}
void showme(string arr[3][3],int a,int b,string p,string p1,string p2)
{
    if (p==p1)
    {
        arr[a][b]="X";
    }
    if(p==p2)
    {
        arr[a][b]="O";
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int check(string arr[3][3],string p1,string p2)
{
    int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]=="O"||arr[i][j]=="X")
            c++;
        }
    }
    if(((arr[0][0]=="X")&&(arr[0][1]=="X")&&(arr[0][2]=="X"))||((arr[0][0]=="X")&&(arr[1][0]=="X")&&(arr[2][0]=="X"))||((arr[0][0]=="X")&&(arr[1][1]=="X")&&(arr[2][2]=="X"))||((arr[1][0]=="X")&&(arr[1][1]=="X")&&(arr[1][2]=="X"))||((arr[2][0]=="X")&&(arr[2][1]=="X")&&(arr[2][2]=="X"))||((arr[0][1]=="X")&&(arr[1][1]=="X")&&(arr[2][1]=="X"))||((arr[0][2]=="X")&&(arr[1][2]=="X")&&(arr[2][2]=="X"))||((arr[0][2]=="X")&&(arr[1][1]=="X")&&(arr[2][0]=="X")))
    {
        cout<<"Game is over"<<endl;
        cout<<p1<<" wins"<<endl;
        return 1;
    }
    else if (((arr[0][0]=="O")&&(arr[0][1]=="O")&&(arr[0][2]=="O"))||((arr[0][0]=="O")&&(arr[1][0]=="O")&&(arr[2][0]=="O"))||((arr[0][0]=="O")&&(arr[1][1]=="O")&&(arr[2][2]=="O"))||((arr[1][0]=="O")&&(arr[1][1]=="O")&&(arr[1][2]=="O"))||((arr[2][0]=="O")&&(arr[2][1]=="O")&&(arr[2][2]=="O"))||((arr[0][1]=="O")&&(arr[1][1]=="O")&&(arr[2][1]=="O"))||((arr[0][2]=="O")&&(arr[1][2]=="O")&&(arr[2][2]=="O"))||((arr[0][2]=="O")&&(arr[1][1]=="O")&&(arr[2][0]=="O")))
    {
        cout<<"Game is over"<<endl;
        cout<<p2<<" wins"<<endl;
        return 1;
    }
    else if(c==9)
    {
        cout<<"It is a Tie!";
        return 1;
    }
}

int main()
{
    string player1,player2,player;
    int correct,r,c,Row,Column,i=0,valid,finish,running=0;
    char answer;
    string a[3][3]={};
    while(running==0)
    {
        if(i==0)
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    a[i][j]=".";
                }
            }
            cout<<"Enter a name for X player"<<endl;
            cin>>player1;
            cout<<"Enter a name for O player"<<endl;
            cin>>player2;
            while (correct!=1)
            {
                cout<<"Who plays First "<<player1<<" or "<<player2<<endl;
                cin>>player;
                correct=checkname(player1,player2,player);
            }
            printit(a);
        }
        printturn(i,player1,player2,player);
        while (valid!=1)
            {
            while (Row!=1)
            {
                cout<<"Chose a row number (0 to 2)"<<endl;
                cin>>r;
                Row=checkrow(r);
            }
            while (Column!=1)
            {
                cout<<"Chose a column number (0 to 2)"<<endl;
                cin>>c;
                Column=checkcolumn(c);
            }
            valid=checkv(a,r,c);
            if(valid==0)
            {
                Row=0;
                Column=0;
            }
            }
        showme(a,r,c,player,player1,player2);
        finish=check(a,player1,player2);
        i=i+1;
        valid=0;
        Row=0;
        Column=0;
        if(finish==1)
        {
               cout<<"Would you Like to play again? (Y/N)"<<endl;
               cin>>answer;
               if(answer=='Y')
               {
                  i=0;
                  Row=0;
                  Column=0;
                  correct=0;
               }
               else if(answer=='N')
               {
                   cout<<"Bye !";
                   running=1;
               }
               else
               {
                   cout<<answer<<" is not valid"<<endl;
               }
        }
    }
return 0;
}
