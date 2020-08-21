#include<bits/stdc++.h>
using namespace std;


int main()
{
    int q,i;
    stack<int> s1;
    stack<int> s2;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int input;
        cin>>input;

            if(input==1)
            {
                int num;
                cin>>num;
                s1.push(num);
                break;
            }
           if(input==2)
            {
                if(s2.empty())
                while(!s1.empty())
                {s2.push(s1.top());s1.pop();}
                s2.pop();
                break;
            }
           if(input==3)
            {
                if(s2.empty())
                while(!s1.empty())
                {
                s2.push(s1.top());
                s1.pop();
                }
                cout<<s2.top()<<endl;
                break;
            }
        }

    return 0;
}
