#include<bits/stdc++.h>
using namespace std;
vector <string> database;
string cheak(string name){
    int unique = 1;
        for(int i = 0; i<database.size(); i++){
            if(database[i]==name){
                name += to_string(unique);
               database.push_back(name);
               unique++;
               return name;
            }
        }
        database.push_back(name);
        return "OK";
}
int main(){
    vector<string> temp;
    string name;
    string ans;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>name;
        temp.push_back(name);
    }
    for(int i=0; i<n; i++){
         ans =  cheak(temp[i]);
      cout<<ans<<endl;
    }

    return 0;
}