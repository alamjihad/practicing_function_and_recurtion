#include<iostream>
using namespace std;

int prime(int num)
{
    int i;
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}
int main()
{
    int num,f;
    cin>>num;
    f=prime(num);
    if(f==1)
    {
        cout<<num<<" is not prime number"<<endl;
    }
    else
    {
        cout<<num<<" is prime number"<<endl;
    }
    return 0;
}