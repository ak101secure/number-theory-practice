#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){

     if(n<=1) return false ;
     else if(n % 2 ==0 && n % 3 ==0) return false;
     for(int i = 2 ;i<=sqrt(n);i++){
          if(n%2 ==0)return false;
     }
     return true;
}
int main(){

   int n;cin>>n;

   if(isPrime(n)){
     cout<<"Prime"<<endl;
   }
   else{
     cout<<"Prime Not"<<endl;
   }


 return 0;
}
