#include<iostream>
#include<iomanip>
int main(){
    int c,r,s,q;
    long int n;
    double c1,c2,c3;
    char E;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>q>>E;
        switch (E)
        {
        case 'C':
            c = c+q;
            break;
        case 'R':
            r = r+q;
            break;
        case 'S':
            s = s+q;
            break;
        }
    }
    long int quan_total = c+r+s;


    std::cout<<"Total: "<<quan_total<<" cobaias"<<std::endl;
    std::cout<<std::setprecision(2)<<std::fixed;
    std::cout<<"Total de coelhos: "<<c<<std::endl;
    std::cout<<"Total de ratos: "<<r<<std::endl;
    std::cout<<"Total de sapos: "<<s<<std::endl;
    c1 = (double) (c*100)/quan_total;
    c2 = (double)(r*100)/quan_total;
    c3 = (double)(s*100)/quan_total;
    std::cout<<"Percentual de coelhos: "<<c1<<" %"<<std::endl;
    std::cout<<"Percentual de ratos: "<<c2<<" %"<<std::endl;
    std::cout<<"Percentual de sapos: "<<c3<<" %"<<std::endl;

    return 0;
}