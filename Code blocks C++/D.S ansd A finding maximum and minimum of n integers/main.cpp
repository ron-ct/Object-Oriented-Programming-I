#include <iostream>
using namespace std;

/*
function to get maximum and minimum of is the array of numbers, n is the size of the array I.e number of numbers in the array.
*/

void max_min(int[] numbers, int n){
int p=0, k=0, max, min, i;
int winners[n/2], losers[n/2];

/* We carry out pair wise comparison placing the larger numbers in the set winners and the smaller in the set losers*/
for(int i=0; i<n; i+2){
    if(numbers[i] < numbers[i + 1]){
        losers[p] = numbers[i];
        winners[k] = numbers[i + 1];
    }
    else{
        losers[p] = numbers[i + 1];
        winners[k] = numbers[i];
    }
}
}

//output results by calling the functions for obtaining max and min

cout<<"Maximum: "<<getMaximum(winners, n/2);
cout<<"Minimum: "<<getMinimum(loosers, n/2);


//a function to obtain the maximum of n numbers given an array (called large of size n)


int getMaximum(int[] large, int n){
    int max=large[0];

    for(int i=0; i<n; i++){
    if(max<large[i])
    max = large[i];
    }
    return max;
}

// a function to get minimum of m numbers given an array(called small of size m)

int getMinimum(int[] small, int m){
int min = small[0];

for(int i = 0; i < n; i++){
    if(min < small[i])
        min=large[i];
}
return min;
}
/*main function that asks the user to enter numbers he wants, then calls the max-min function passing the array to it*/

void main(){
int n;
cout<<"THIS IS A PROGRAM THAT OBTAINS BOTH MAXIMUM AND MINIMUM"<<endl;
cout<<"________________________________________________________"<<endl;
cout<<"Enter the number of numbers n: "<<endl;
cin>>n;

int the_array[n]; //an array to hold the n integers

for(i=0; i<n; i++){
    cout<<"Enter a number ["<<i<<"of"<<n<<"] Already entered"<<endl;
    cin>>the_array[i];
}
}
