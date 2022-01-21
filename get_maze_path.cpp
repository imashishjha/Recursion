#include <bits/stdc++.h>

using namespace std;


vector<string> getMazePath(int tr, int tc, int cr, int cc){
    if(cr == tr and cc == tc){
       vector<string> ans;
       ans.push_back("");
       return ans; 
    }
    vector<string> path1;
    vector<string> path2;
    vector<string> path;
    if(cc < tc){
        path1= getMazePath(tr, tc, cr, cc+1);
        for(string ele: path1){
            path.push_back("h"+ele);           
        }

    }
    if(cr < tr){
        path2= getMazePath(tr, tc, cr+1, cc);
        for(string ele: path2){
            path.push_back("v"+ele);
        }

    }
    return path;
}

int main(){
     int tr;
     int tc;

     cin>>tr;
     cin>>tc;

    vector<string> finalPath = getMazePath(tr-1, tc-1, 0, 0 );

    for(string ele: finalPath){
        cout<<ele<<endl;
    }

}

