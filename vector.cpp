#include<iostream>
#include<vector>
using namespace std;
 main(){
    vector<int> v;
    
      for(int i=0;i<20;i++)
      {
      v.push_back(i);
      cout<<v[i]<<endl;
      }
    
      cout<<endl <<" ";
      for (int i = 0; i<15; i++)
      {
        // v.pop_back(i);
        v.pop_back();
        cout<<v[i]<<endl;
      }
    }
      

    
