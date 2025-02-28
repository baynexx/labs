#include<iostream>
#include<ctime>

using namespace std;

int main(){
    float Q[10], *p=Q;
    srand(time(0));
    cout <<"massiv: ";
    for (int i = 0 ; i < 10; i++ ){
        *(p+i) = (rand()%100)*2.8;
        cout<<*(p+i)<<" ";
    }
    cout<<"\n";
    float A, B;
    cout << "vvedite na4alo diapazona A: ";
    cin>>A;
    cout << "vvedite konec diapazona B: ";
    cin >> B;
    int s4et = 0;
    for (int i = 0; i < 10; i++){
        if (*(p+i)>= A && *(p + i) <= B){
            s4et++;
        }
    }    
    cout <<"kolvo elmnt v diapozone "<<s4et<<endl;
    return 0;
}