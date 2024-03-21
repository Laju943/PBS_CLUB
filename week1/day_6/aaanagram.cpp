class Solution{
public:
    bool check(map<char,int>&p,map<char,int>&t){
        for(auto it=p.begin();it!=p.end();it++){
            char ch=it->first;
            if(p[ch]!=t[ch]){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    int start=0,end=0,count=0;
	    map<char,int>p;
	    map<char,int>t;
	    //window set up
	    for(int i=0;i<pat.size();i++){
	        p[pat[i]]++;
	    } 
	    while(end<pat.size()){
	        t[txt[end]]++;
	        end++;
	    }
	    if(p.size()==t.size() && check(p,t)){
	        count++;
	    }
	    //sliding aproach
	    while(end<txt.size()){
	        t[txt[start]]--;
	        if(t[txt[start]]==0){
	            t.erase(txt[start]);
	        }
	        start++;
	        t[txt[end]]++;
	        if(p.size()==t.size() && check(p,t)){
	        count++;
	        }
	        end++;
	    }
	    return count;
	}

};