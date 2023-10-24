int lcm(int a,int b){
    int c;
    for(int i=2;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            c=i;
            break;
        }
    }
    return c;
}