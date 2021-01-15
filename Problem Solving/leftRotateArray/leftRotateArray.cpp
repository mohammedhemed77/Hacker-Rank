#include <bits/stdc++.h>

using namespace std;

void leftRotationArr(int *arr,int size , int rotations ) 
{
    int temp = 0 ; 
    for(int i = 0 ; i < rotations ; i ++)
    {
      temp = arr[0];
      for (int j = 0 ; j < size -1 ; j++)
      {
          arr[j]= arr[j+1];
      }   
        /* store the first elemnt in the last position */
        arr[size -1 ] = temp;
    }

} 


int main()
{

    
    int arrSize = 0 ;
    int rotations = 0 ;
    cin >> arrSize;     cin >> rotations ;
    
    /* create array at the run time */
    int *arr = new int[arrSize];

    /* take elements from the user */
    for (int a = 0 ; a<arrSize ; a++) cin >> arr[a] ;  
    
    // display array before rotation 
    //cout << "array before rotation " << endl ;
    //for (int a = 0 ; a<arrSize ; a++) cout << arr[a] << " " ;  
    
    leftRotationArr(arr, arrSize, rotations);
    
    // display array after rotation 
    //cout << "array after " << rotations << " rotations : " << endl ;
    for (int a = 0 ; a<arrSize ;  a++) cout << arr[a] << " " ;  




    return 0;
}
