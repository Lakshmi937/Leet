bool isPowerOfThree(int n) {
     bool h= false;
        for(int i=0;pow(3,i)<=n;i++){
        if(pow(3,i)==n){
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
