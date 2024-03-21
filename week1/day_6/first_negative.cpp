vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
     
       vector<long long>ans;
       queue<long long>q;
       int i=0,j=0;
       while(j<n){
           if(a[j]<0) q.push(a[j]);
           if((j-i+1)<k){
               j++;
           }
           else{
               if(!q.empty()){
                   ans.push_back(q.front());
                   if(a[i]<0) q.pop();
                   
               }
               else ans.push_back(0);
               i++;
               j++;
           }
       }
       return ans;
 }