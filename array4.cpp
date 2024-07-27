#include <iostream>
using namespace std;

int main() {
    // Initialize the array of numbers
   int  array1[] = {1,2};
   int array2[] = {3,4};
   int i = 0,j = 0, total, tem1, tem2;
   float finalans;
   int count1 = sizeof(array1) / sizeof(array1[0]);
   int count2 = sizeof(array2) / sizeof(array2[0]);
   total = count1 + count2;
   int margearray[total];
   // copy first array
   for(i = 0; i < count1; i++){
        margearray[i] = array1[i];
   }
   // copy second arra
   for(i = 0; i < count2; i++){
        margearray[count1 + i] = array2[i];
   }
   for(i = 0; i < total; i++){
       cout << margearray[i] << " ";
   }
   cout<<endl;
   // for even size 
   if(total % 2 == 0){
       tem1 = total / 2;
       tem2 = tem1 - 1;
       finalans = (margearray[tem1] + margearray[tem2]) / 2.0;
   }
   // for odd size
   else{
       finalans = total/2;
   }
   cout << finalans;
}
