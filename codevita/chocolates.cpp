#include<bits/stdc++.h>
using namespace std;
int initial_points = 1;
int maxPoints = 0;
int max_points(vector<int> &bag, int &k){
     int n = bag.size();
     if(n==1){
        if(bag[0]>k){
            return initial_points-1;
        }
        else if(bag[0]<k){
             return initial_points+1;
        }
     }
    sort(bag.begin(), bag.end());
     for(int i=0; i<bag.size()/2; i++){ 
        if(bag[i]<=k){
             k-= bag[i];
             initial_points++;
             if(initial_points>maxPoints)
             maxPoints=initial_points;
        }
        if(bag[n-1-i]>k){
                k += bag[n-1-i];      
                initial_points--;
        }
     }
     return maxPoints;
}
int main(){  
     vector<int> bag;
    int chocolate_value;

    string input_line;
    getline(cin, input_line); 

    istringstream iss(input_line);
    while (iss >> chocolate_value) {
        bag.push_back(chocolate_value);
    }

    int k;
    cin>>k;
   
    int result= max_points(bag,k);
    cout<<result<<endl;
    return 0;
}