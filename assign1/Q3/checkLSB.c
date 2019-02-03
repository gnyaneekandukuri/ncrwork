
int checkLsb(int a){
    int i=0;
    int  k=0;
    while(i < 3){
        if(a & 1){
          
           i++;
         }
        else{
            k=1;
            break;
        } 
        a=a>>1;
        
        
    }
    if(k==1){
        return 1;
    }
    return 0;
}
