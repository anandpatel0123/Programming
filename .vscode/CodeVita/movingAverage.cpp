#include <iostream>
using namespace std;

int movingAverage(int X,int Y,int n,double cost[]){
  double *movingAv1 = new double[n-X+1];
  double *movingAv2 = new double[n-Y+1];
  double sum_X = 0.0, sum_Y = 0.0;
  
  for (int i = 0; i < X; ++i)
    sum_X = sum_X+cost[i];
  for (int i = 0; i < Y; ++i)
    sum_Y = sum_Y+cost[i];

  movingAv1[0] = sum_X/X;
  movingAv2[0] = sum_Y/Y;
  int j = 1;
  for (int i = X; i < n; ++i)
  {
    sum_X = sum_X + (-cost[i-X] + cost[i]);
    movingAv1[j++] = sum_X/X;
  }
  j = 1;
  for (int i = Y; i < n; ++i)
  {
    sum_Y = sum_Y + (-cost[i-Y] + cost[i]);
    movingAv2[j++] = sum_Y/Y;
  }
  
  int over = 0, count = 0;
   if(movingAv1[Y-X] < movingAv2[0]) over = -1;

  if(movingAv1[Y-X] > movingAv2[0]) over = 1;


 

  for (int i = 1; i < n-Y+1; ++i)
  {
    if(movingAv1[Y-X+i] > movingAv2[i] && over == -1)
    {
      count++;
      over = 1;
    }
    else if(movingAv1[Y-X+i] < movingAv2[i] && over == 1)
    {
      count++;
      over = -1;
    }
  }
  return count;
}

int main()
{
  int X, Y, n;
  cin>>X>>Y>>n;
  double cost[n];
  for (int i = 0; i < n; ++i)
    cin>>cost[i];

    cout<<movingAverage(X,Y,n,cost);

}  
