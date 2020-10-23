#include <iostream>
using namespace std;

pair<long long int,long long int> extendedeuclids(long long int a,long long int b){
if(a==0){
    pair<int,int> ans;
    ans.first=0;
    ans.second=1;
    return ans;
}
else if(b==0){
    pair<int,int> ans;
    ans.first=1;
    ans.second=0;
    return ans;
}
else{

    if(a>=b){
        pair<long long int,long long int> ref=extendedeuclids(a%b,b);
        long long int q=a/b;
        pair<long long int,long long int> ans;
        ans.first=ref.first;
        ans.second=ref.second-(ref.first*q);
        return ans;

    }
    else{
        pair<long long int,long long int> ref=extendedeuclids(a,b%a);
        long long int q=b/a;
        pair<long long int,long long int> ans;
        ans.second=ref.second;
        ans.first=ref.first-(ref.second*q);
        return ans;

    }

}


}



int main(){
long long int a,b;
cout<<"enter two numbers"<<endl;
cin>>a>>b;
pair<long long int,long long int> coeff=extendedeuclids(a,b);
cout<<"The coefficients of "<<a<<" and "<<b<<" are "<<coeff.first<<" and "<<coeff.second<<endl;
cout<<"The gcd of "<<a<<" and "<<b <<" is "<<(a*coeff.first)+(b*coeff.second)<<endl;



}


