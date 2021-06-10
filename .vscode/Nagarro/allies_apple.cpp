/* 

In a garden, there are several apples trees planted in a grid format. Each point (i,j) in the grid has |i| + |j| apples.

Allie can buy a square plot centred at (0,0). Find the minimum perimeter of the plot (1 unit having length = 1) 
such that she can collect at
least X apples. All plants on the perimeter of the plot are also included.

Sample:

Input = 1 Output = 8
input = 11 Output = 8
Input = 13 Output = 16

*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    int k;
    cin>>k;

    double total=0;
    int unit=0;
    while(k>total){
        unit++;
        total+=12*(pow(unit,2));
    }

    cout<<unit*8;



}