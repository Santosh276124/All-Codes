#include <iostream>
#include <set>
#include<vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	   int N;
	   cin>>N;
	   
	   
	   for(int i = 0; i <= N; i++)
	   {
	       int K;
	       cin>>K;
	       int arr[K];
	       
	       for(int j = 0;j<K;j++){
	           
	           cin>>arr[j];
	       }
	       set<int> ans;
	       for(int i = 0; i < K; i++)
	       {
	           ans.insert(arr[i]);
	       }
	       int sum = 0;
           vector<int> res;
	       for(auto i : ans)
           {
            res.push_back(i);
           }
           for(int i = 0; i < res.size(); i++)
           {
            sum += res[i];
           }
           if(sum == 15)
	       {
	           cout<<"yes"<<endl;
	       }
	      else
	       cout<<"no"<<endl;
	       
	   }
	   
	   
	}
	return 0;
}