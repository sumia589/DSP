#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s_size,origin;
    cout<<"enter the number of sambles: ";
    cin>>s_size;
    if(s_size<=0)
        return 0;
    int x[s_size];
    cout<<"Enter samples: ";
    for(int i=0;i<s_size;i++)
    {
        cin>>x[i];
    }
    cout<<"enter origin position (1 to"<<s_size<<"):";
    cin>>origin;
    if (origin < 1 || origin > s_size)
{
    cout << "Invalid origin!" << endl;
    return 0;
}
    int left=origin-1;
    int right=s_size-origin;
    int l=max(left,right);//distance
    cout<<fixed<<setprecision(2);
    cout<<"\nn\tEven\todd\n";
    for(int n=-l;n<=l;n++)
    {
        float xn=0,reverse_n=0;
        int i=n+left;
        int j=-n+left;
        if(i>=0 && i<s_size)
        {
            xn=x[i];
        }
        if(j>=0 && j<s_size)
        {
            reverse_n=x[j];
        }
        float even=(xn+reverse_n)/2;
        float odd=(xn-reverse_n)/2;
        cout<<n<<"\t"<<even<<"\t"<<odd<<endl;


    }
    return 0;
}