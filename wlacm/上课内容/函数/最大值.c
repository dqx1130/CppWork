int max(int a, int b , int c ,int d){
    int tmp ; 
    if (a > b ) { 
        tmp = a;
    }else{
        tmp = b;
    }
    if (c > tmp ) { 
        tmp = c;
    }
    if ( d > tmp){
        tmp = d;
    }
    return tmp;
}