#include<iostream>
using namespace std;
// int sumofdigits(int n)
// {
//     int sum=0;
//     while(n>0)
//     {
//         sum=sum+n%10;
//         n=n/10;
//     }
//     return sum;
// }
int digit(int n)
{
    if(n>0)
    {
        return n%10 + digit(n/10); 
    }else{
        return 0;
    }
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    // sum=sumofdigits(n);
    do{
        // n=sumofdigits(n);
        n=digit(n);
    }while(n>9);
    cout<<n;  
}