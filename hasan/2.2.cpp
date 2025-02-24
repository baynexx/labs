#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    float A[10], *p=A;
    srand(time(0));
    cout<<"A : ";
    for (int i=0; i<10; i++){
        *(p+i)=(rand()%41-20)*4.9;
        cout<<*(p+i)<<" ";
    }
    float q = 0;
    for (int i=0; i<10; i++){
        if (*(p+i)>q){
            q=*(p+i);
        }
    }
    cout<<"\n";
    cout<<"Максимальный элемент массива : "<<q;
    return 0;
}