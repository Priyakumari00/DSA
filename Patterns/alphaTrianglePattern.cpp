#include <bits/stdc++.h>
using namespace std;

void pattern18(int N)
{
      for(int i=0;i<N;i++){
          
      
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
              cout<<ch<<" ";
          }
          
          cout<<endl;
      }
}

int main()
{   
    
    int N = 5;
    
    pattern18(N);

    return 0;
}
