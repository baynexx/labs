#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int A[10], *p=A;
    srand(time(0));
    cout <<"massiv: ";
    for (int i = 0 ; i < 10; i++ ){
        *(p+i) = rand()%100;
        cout<<*(p+i)<<" ";
    }
    int q,i,k,j; ;
    cout<<"\n";
    for (j=i-1, k=i+1, i = 0;i < 10; i++ , j++, k++){
        if (*(p+j)>*(p+i) && *(p+i)<*(p+k)){
            q=i;
            break;
        }
        
    }
    cout<<"nomer loc min : "<<q;
    return 0;
}