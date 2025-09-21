// *******************************************************************************/
// Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers. 

// After performing all the cut operations, your total number of cut segments must be maximum. 


int maximizeCut(int n, int a, int b, int c){
    //base case
    if(n<=0){
        return 0;
    }
    
    int op1=1+maximizeCut(n-a,a,b,c);
    int op2=1+maximizeCut(n-b,a,b,c);
    int op3=1+maximizeCut(n-c,a,b,c);
    
    int ret = max(op1,op2);
    ret = max(ret, op3);
    
    return ret;
}

int main()
{
    int n;
    int a,b,c;
    
    cin>>n;;
    cin>>a>>b>>c;
    
    cout<<"Answer:"<<maximizeCut(n,a,b,c)<<endl;
    
    
    

    return 0;
}