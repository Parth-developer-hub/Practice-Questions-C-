#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

    int n; cin >> n;
    int a[n],b[n],c1=0,c2=0,s1=0,s2=0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        
        if(a[i]==-1)
        c1++;
        else
        s1+=a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        
        if(b[i]==-1)
        c2++;
        else
        s2+=b[i];
    }
    if(c1 && c2){ // if both arr have -1 
        cout << "Infinite";
    }else if((c1==1 && c2==0 && s1<s2) || (c2==1 && c1==0 && s2<s1)){  // if one arr have -1 and it's sum is also less
        cout << 1 ;
    }else if((c1>=1 && c2==0 && s1>s2) || (c2>=1 && c1==0 && s2>s1)){  // if the arr having -1 has sum larger than other one 
        cout << 0;
    }
    else{  
    
        cout << abs(s1-s2) + 1;
    }


	return 0;
}
