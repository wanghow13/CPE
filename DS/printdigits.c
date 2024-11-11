void printdigits( int n ){
    int n1=n/10;
    if(n1!=0){
    printdigits(n1);
        if(n1%10==0){
        printf("%d\n",n1);
        }
    }