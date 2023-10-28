void factorniikaldunga(vector<int> &fact,int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact.push_back(i);
        }
    }
}