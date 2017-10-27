#include <iostream>
#include <sstream>
using namespace std;
void selection_sort(int *mas, unsigned int k){  
 for( int i=0; i<k-1; i++){ 
     int a=i+1;
     int min= mas[i+1];
     for (int j=i+1; j<k;j++) 
     {
         if (mas[j]<min) 
         {
             a = j;
             min = mas[j];
         }
     }
     if(min<mas[i]) {
         swap(mas[i], mas[a])
     }
 }
 }

int main()
{
    unsigned int k;                            
    cin>> k;
    cin.get();                                  
    int *mas = new int [k];
    string stroka;
    getline (cin, stroka);
    istringstream stream (stroka);
    for (unsigned int i=0; i<k;i++){
        stream>> mas[i];
    }
 
    selection_sort (mas,k);
    for(int i=0; i<k; i++){
        cout << mas[i] << " ";
    }

    return 0;
