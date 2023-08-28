#include <iostream>
#include <array>
using namespace std;

// Array
//  #include<array>
//  int main(){
//      int basic[3]={1,2,3};
//      array<int,4>a={1,2,3,4};
//      int size=a.size();
//      cout<<size<<endl;
//      for(int i=0;i<size;i++){
//          cout<<a[i]<<endl;
//      }
//      cout<<a.empty()<<endl;
//      cout<<a.at(1)<<endl;
//      cout<<a.front()<<endl;
//      cout<<a.back()<<endl;
//  }

// Vector
//  #include<vector>
//  int main(){
//      vector<int>v;
//      cout<<"Capacity->"<<v.capacity()<<endl;
//      v.push_back(1);
//      cout<<"Capacity->"<<v.capacity()<<endl;
//      v.push_back(2);
//      cout<<"Capacity->"<<v.capacity()<<endl;
//      v.push_back(3);
//      cout<<"Capacity->"<<v.capacity()<<endl;

//     cout<<"Size->"<<v.size()<<endl;

//     cout<<"Element at 2nd Index:"<<v.at(2)<<endl;

//     cout<<"front:"<<v.front()<<endl;
//     cout<<"back:"<<v.back()<<endl;

//     cout<<"before pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();

//     cout<<"after pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"before clear size"<<v.size()<<endl;
//     v.clear();
//     cout<<"after clear size"<<v.size()<<endl;

//     //another way of vector
//     vector<int>a(5,1);

//     vector<int>last(a);

//     for(int i:last){
//         cout<<i<<" ";
//     }
// }



// Deque
//  #include<deque>
//  int main(){
//      deque<int>d;
//      d.push_back(1);
//      d.push_front(2);
//      for(int i:d){
//          cout<<i<<" ";
//      }
//      //d.pop_front();
//      //d.pop_back();
//      cout<<endl;
//      for(int i:d){
//          cout<<i<<" ";
//      }
//      cout<<"Print first index element->"<<d.at(1)<<endl;
//      cout<<"Front "<<d.front()<<endl;
//      cout<<"back "<<d.back()<<endl;
//      cout<<"empty or not "<<d.empty()<<endl;

//     cout<<"before erase "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);//delete the first element | It is defining the range.
//     cout<<"after erase "<<d.size()<<endl;
//     for(int i:d){
//         cout<<i<<endl;
//     }
// }

// List
//  #include<list>
//  int main(){
//      list<int>l;
//      list<int>n(5,100);

//     l.push_back(1);
//     l.push_front(2);

//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     l.erase(l.begin());
//     cout<<"after erase"<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<"size of list"<<l.size()<<endl;

// }

// Stack
//  #include<stack>
//  int main(){
//      stack<string>s;
//      s.push("Kumar");
//      s.push("Nalin");
//      s.push("Singh");

//     cout<<"Top Element->"<<s.top()<<endl;
//     s.pop();
//     cout<<"Top Element-> "<<s.top()<<endl;
//     cout<<"Size of stack "<<s.size()<<endl;
//     cout<<"Empty or not"<<s.empty()<<endl;

// }

// Queue
//  #include<queue>
//  int main(){
//      queue<string>q;
//      q.push("Kumar");
//      q.push("Nalin");
//      q.push("Singh");
//      cout<<"Size before pop"<<q.size()<<endl;
//      cout<<"First Element "<<q.front()<<endl;
//      q.pop();
//      cout<<"First Element "<<q.front()<<endl;
//      cout<<"Size after pop"<<q.size()<<endl;
//  }

// Priority Queue
//  #include<queue>
//  int main(){
//      //max heap
//      priority_queue<int>maxi;

//     //min heap
//     priority_queue<int,vector<int>,greater<int> >mini;
//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;
//     mini.push(5);
//     mini.push(1);
//     mini.push(0);
//     mini.push(4);
//     mini.push(3);

//     n=mini.size();
//     for(int i=0;i<n;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
// }


// //SET
// #include<set>//No redundancy and it will order by self
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(5);
//     s.insert(0);
//     s.insert(1);
//     s.insert(5);
//     s.insert(0);
//     s.insert(0);
//     s.insert(6);
//     s.insert(6);
//     s.insert(1);
//     int n=s.size();
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
//     set<int>::iterator it=s.begin();
//     it++;
//     s.erase(it);
//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<s.count(1)<<endl;//Check whether the element is present or not
//     set<int>::iterator itr=s.find(5);
//     for(auto it=itr;it!=s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;
// }


// // Map
// #include <map> //sorted
// int main()
// {
//     map<int, string> m;
//     m[1] = "Kumar";
//     m[13] = "Singh";
//     m[2] = "Nalin";
//     m.insert({5,"Bheem"});
//     //before clearing
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout << "finding 13->" << m.count(13) << endl;
//     //after clearing
//     m.erase(13);
//     for (auto i : m)
//     {
//         cout << i.first << " " << i.second << endl;
//     }
// }




//////ALGORITHM
#include<algorithm>
#include<vector>
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(),6);
    cout<<"Lower Bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=5,b=6;
    cout<<"max"<<max(a,b)<<endl;
    cout<<"min"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a->"<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String-> "<<abcd<<endl; 

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());//By using quick sort,intro sort
    cout<<"After sorting:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    


}