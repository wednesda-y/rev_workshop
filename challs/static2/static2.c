int func(int a, int b){
    if(a < b){
        for (int i = 0; i < (b-a); i++){
            a += b;
            b += a;
        }
    }
    else if (a == b){
        return a*a;
    }
    else{
        for(int i = 0; i < b; i++){
            b -= i;
        }
    }

    return a + b;
}

