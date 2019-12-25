#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number to be boundaried with\n";
  cin>>n;
  int v, s=0;
  int a[2*n-1][2*n-1];
  for (v=n;v>0;v--)
  {
    for (int i = 0;i < 2*n-1; i++)
    {
      for (int j = 0; j < 2*n-1; j++)
      {
        if ((i == s || i == 2*n-2-s)&&(j>=s && j<=2*n-2-s))
        a[i][j] = v;
        if ((j == s || j == 2*n-2-s)&&(i>s && i<2*n-2-s))
        a[i][j] = v;
      }
    }
    s++;
  }
  for (int i=0;i<2*n-1;i++)
  {
    for (int j=0;j<2*n-1;j++)
    cout<<a[i][j]<<" ";
    cout<<endl;
  }
}
