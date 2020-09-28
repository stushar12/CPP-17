#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack <int> s;
   int arr[]={15,10,18,12,4,6,2,8};
   cout<<"-1"<<" ";
   s.push(arr[0]);
   for(int i=1;i<8;i++)
   {
       if(arr[i]<=s.top())
       {

           cout<<s.top()<<" ";
           s.push(arr[i]);
       }
       else if(arr[i]>s.top())
       {
           while(s.empty()!=true && arr[i]>s.top())
           {
               s.pop();
           }
           if(s.empty()==true)
           cout<<"-1"<<" ";
           else
           cout<<s.top()<<" ";
           s.push(arr[i]);
           
       }

   } 

}