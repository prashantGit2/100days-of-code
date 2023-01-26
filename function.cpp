#include<iostream>
#include<cmath>
using namespace std;

int sum(int n){
    return ((n*(n+1))/2);
}

int max(int n1, int n2) {
    if ( n1 > n2){
        return n1;
    }
    else {
        return n2;
    }
}

// recursive function
long int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return factorial(num - 1) * num;
    }
}



bool checkPT(int x, int y, int z){
    int h = max(x, max (y,z));
    int b,p;
    if (h == x){
        b = y;
        p = z;
    }
    else if (h == y){
        b = x;
        p = z;
    }
    else {
        b = x;
        p = y;
    }
    return h*h == b*b + p*p;
}

int binaryToDecimal(int n){
    int ans = 0;
    int pow = 1;
    while(n> 0){
        int y = n % 10;
        ans += y * pow;
        pow *= 2;
        n /= 10;
    }
    return ans;
}

int decimalToBinary(int decimal){
    int ans = 0;

    while(decimal > 0){
        int remainder = decimal % 2;
        ans = ans*10 + remainder;
        decimal /= 2;
    }
    return ans;
}


int main(){
    int num;
    cin>>num;
    // cout<<sum(num)<<endl;

    // int a,b,c;
    // cin>>a>>b>>c;
    // if (checkPT(a,b,c)){
    //     cout<<"Pythagorean Triplet"<<endl;
    // }
    // else{
    //     cout<<"Not Pythagorean Triplet"<<endl;
    // }

    // cout<<binaryToDecimal(num)<<endl;
    cout << decimalToBinary(num)<<endl;

    return 0;

}