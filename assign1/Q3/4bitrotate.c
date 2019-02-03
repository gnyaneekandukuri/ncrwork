
void rotate(op){
    int i=0,num=0,opl=0;
    int countv=op;
    int copy =op;
     while(countv){
        opl++;
        countv= countv >>1;
    }
    int arr[opl];
    for(int i=0;i<4;i++){
        if(copy&1){
            arr[i] =1;
            copy = copy>>1;
           
        }
        else{
             arr[i] =0;
             copy =copy >>1;
           
        }
    }
   
    for(int i=opl-1;i>3;i--){
       if(copy&1){
            arr[i] =1;
            copy = copy>>1;
            
        }
        else{
             arr[i] =0;
             copy =copy >>1;
           
        }
    }
    
      
    for(int i=0;i<opl;i++){
    
         printf(" %d",arr[i]);
    }
    
}


