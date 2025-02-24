#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int A[10];
    int *p=A;
    srand(time(0));
    cout<<"A : ";
    for (int i=0; i<10; i++){
        *(p+i)=rand()%41-20;
        cout<<*(p+i)<<" ";
    }
    
    int q=0;
    int j=0;
    for (int i=0; i<10; i++){
        if (*(p+i)>0){
            q=*(p+i);
            j=i;
            break;
        } 
    }   
    j+=1;
    for (; j<10; j++){
        if (*(p+j)>0){
            q-=*(p+j);
        }
    }
    cout<<"\n";
    cout<<"Разность положительных элементов : "<<q;
    return 0;
}