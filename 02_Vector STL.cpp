#include<iostream>
#include<vector>
using namespace std;
int main(){
/*
vector<int>v1;
    for(int i=0;i<5;i++)
    v1.push_back(i);
    cout<<"Output of Begin and End:";
    for(auto i=v1.begin();i!=v1.end();++i)
    cout<<*i<<" ";
    cout<<"Output of cBegin and cEnd:\n";
    for(auto i=v1.cbegin();i!=v1.cend();++i)
    cout<<*i<<" ";
    cout<<"Output of rBegin and rEnd:";
    for(auto ir=v1.rbegin();ir!=v1.rend();++ir)
    cout<<*ir<<" ";
    cout<<"Output of crBegin and crEnd:";
    for(auto ir=v1.crbegin();ir!=v1.crend();++ir)
    cout<<*ir<<" ";

*/

    vector<int>v;
    for(int i=0;i<5;i++)
    v.push_back(i);
    
    //for(int i=0;i<5;i++)
    v.pop_back();
    
    v.insert(v.begin(),6);
    v.erase(v.begin());
    v.emplace(v.end(),3);
    v.emplace_back(20);
    v.clear();
    vector<int>v1,v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    
    v1.swap(v2);
   
    
    
   // for(int i=0;i<v.size();i++)
   // cout<<v[i]<<" ";
       for(auto i=v1.begin();i!=v1.end();++i)
       cout<<*i<<" ";
       for(auto i=v2.begin();i!=v2.end();++i)
       cout<<*i<<" ";
    
    
    
    return 0;
}