#include<iostream>
#include <iomanip>

using namespace std;
 
int main()
{
    int a[50],n,i,j,temp_a;
    string b[50], temp_b;
    cout<<"Enter the size of array: ";
    cin>>n;
     
    
    for(i=0;i<n;++i){
        
        cout<<"Enter numbers: " << endl;
        cin>>a[i];
        cout<<"Enter letters: " << endl;
        cin>>b[i];
    }    
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp_a=a[j];
                temp_b=b[j];
                a[j]=a[j+1];
                b[j]=b[j+1];
                a[j+1]=temp_a;
                b[j+1]=temp_b;
            }
    }
    
    cout<<"Array after bubble sort:"<< endl;
    cout << setw(10) << "Numero" << setw(10) << "Letra" << endl;
    for(i=0;i<n;++i)
        cout << setw(10) << a[i] << setw(10) << b[i] << endl;
        //cout<<" "<<b[i];
        //cout<<"asdf "<<b[i];
        
    return 0;
}

