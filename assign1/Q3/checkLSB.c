iint reversed(int op){
    int i=0,num=0,opl=0;
    int countv=op;
    while(countv){
        opl++;
        countv= countv >>1;
    }
    int ar[op];
    while(op){
        if(op & 1){
            ar[i] =1;
            op = op>>1;
            i++;
        }
        else{
            ar[i]=0;
            op = op>>1;
            i++;
        }
    }
   
    int p =i-1;
    int l =0;
    while(p>=0){
        num = num + (ar[l]*pow(2,p));
       
        p--;
        l++;
    }
    return num;
}nt checkLsb(int a){
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