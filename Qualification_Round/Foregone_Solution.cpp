#include<bits/stdc++.h>
using namespace std;

#define ll int_64


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T,k=1;
    cin>>T;
    
    while(T--)
    {
        string n;
        cin>>n;
        int len=n.size();
        vector<int> num(len,0);
        
        for(int i=0;i<len;i++)
        {
            if(n[i]=='4')
            {
                n[i]='2';
                num[i]=2;
            }
        }
        
        int ind;
        for(int i=0;i<len;i++)
        {
            if(num[i]!=0)
            {
                ind=i;
                break;
            }
        }
        
        cout<<"Case #"<<k<<": "<<n<<" ";
        
        for(int i=ind;i<len;i++)
        {
            cout<<num[i];
        }
        cout<<"\n";
        k++;
    }
    return 0;
    
}