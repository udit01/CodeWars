#include <bits/stdc++.h>
#define lli long long int
// using namespace std;

lli zeroCount(char a[],lli l,lli r){
    lli i,count=0;
    for(i=l;i<=r;i++){
        if (a[i]=='0')
        {
            count++;
        }
    }
    return count;
}

lli distCount(char a[],lli l,lli r){
    std::set<char> set1;
    int i;
    for (i = l; i <= r; ++i){
        set1.insert(a[i]);
    }
    return set1.size();
}
int main(int argc, char* argv[])
{
    lli l,r,n,num0=0,numdist=0,hstrings=0;
    char a[100000];
    l=0;
    scanf("%s",a);
    n=strlen(a);
    // r=n-1;
    r=l;
    while (l<n)
    {   r=l;

        while ((r<n))
        {
            num0=zeroCount(a,l,r);
            numdist=distCount(a,l,r);
            if (((r-l)<2)&&(num0==1))
            {
                r++;
                continue;
            }
            if ((num0*numdist<r-l+1)){
            hstrings++;
            }

            r++;
        }
        l++;
    }
    printf("%lld\n",hstrings);
    return 0;
}
