#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	  int res=1;
    
       while(n >0){
           // Odd
           if(n&1)                      
             res=(1LL*res*(x)%m )%m;//1LL means typecast into Long Long       
           x =(1LL*(x)%m*(x)%m)%m;
           n=n>>1;// divide power by 2
       }
       return res;
}
