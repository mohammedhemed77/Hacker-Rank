#include <bits/stdc++.h>
using namespace std;

int main ()
{
int length ; 

// scann array length  
cin  >> length ; 

// static cast 
int* arr = static_cast<int*> (malloc (sizeof(int) * length)) ;

// scan array elements 
for (int index = 0 ; index < length ; index ++ ) cin >> arr[index];

// Reverse display array elements 
for (int index = length -1 ; index >=0 ; index-- ) cout<<  arr[index];

}
