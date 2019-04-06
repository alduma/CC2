#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,11};
    for(int *p=a;p<a+10;p++){
        cout<<*p<<endl;
    }
    return 0;
}
