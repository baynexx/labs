#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    float A[10], *p=A;
    srand(time(0));
    cout<<"Результаты соревнований : ";
    for (int i=0; i<10; i++){
        *(p+i)=(rand()%100+50)*2.9;
        cout<<*(p+i)<<" ";
    }
    float q = 10000;
    for (int i=0; i<10; i++){
        if (*(p+i)<q){
            q=*(p+i);
        }
    }
    cout<<"\n";
    cout<<"Лучший результат : "<<q;
    return 0;
}