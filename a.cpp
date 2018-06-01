bool sim_mat(bool** A, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]!=A[j][i]){
                return false;
            }
        };
    };
    return true;
};


int ref_matriz(bool** A, int n, int m){
    int a=0;
    for(int i=0;i<n;i++){
        if(A[i][i]==1){
           a++;
        }
    }
    return a;
}

bool refle_matriz(bool** A, int n, int m){
    int a= ref_matriz(A, n, m);
    if(a==n){
        return true;
    }else{
        return false;
    }
}

bool trans_matriz(bool** A, int n, int m){
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==1){
                for(int k=0;k<n;k++){
                    if(A[j][k]==1 && A[i][k]!=1){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}



bool orden_matriz(bool** A,int n,int m){
    if(refle_matriz(A,n,m)==1 && sim_mat(A,n,m)==0 && trans_matriz(A,n,m)==1){
        return true;
    }else{
        return false;
    }
}

bool equiv_matriz(bool** A,int n,int m){
    if(refle_matriz(A,n,m)==1 && sim_mat(A,n,m)==1 && trans_matriz(A,n,m)==1){
        return true;
    }else{
        return false;
    }
}

bool func_matriz(bool** A,int n,int m){
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(A[i][j]==1){
                c++;
            }
        }
    if(c>1){
            return false;
        }
    }
    return true;
}

bool inyec_matriz(bool** A,int n,int m){
    for(int j=0;j<m;j++){
        int c=0;
        for(int i=0;i<n;i++){
            if(A[i][j]==1){
                c++;
            };
        };
        if(c>1){
            return false;
        };

    };
    return true;
};

bool sobreyec_matriz(bool** A,int n,int m){
    for(int j=0;j<m;j++){
        int c=0;
    for(int i=0;i<n;i++){
            if(A[i][j]==1){
                c++;
            }
        }
    if(c==0){
            return false;
    };
    };
    return true;
};
