 bool isPowerOfTwo(int n) {
        bool h= false;
        for(int i=0;pow(2,i)<=n;i++){
        if(pow(2,i)==n){
            h=true;
            break;
        }
        
    }
    if(h){
        printf("True");
        }
    else{
        printf("False");
    }
  return h;
}
