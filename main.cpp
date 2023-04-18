#include <iostream>
#include <cmath>
using  namespace std;
double calEquation(int n, int x){// q1
    double total=1;
    for(int k=1;k<= x;k ++){
        total+=  pow(n,k)/ tgamma(k+1);
    }
    return total;
}
double calSum(int n ){//q2
    double sum=0;
    for(int k=1; k<=n; k++){
        sum+=pow(-1, k+1)/k;
        cout<<"The result:"<<sum << endl;

    }
    return sum;
}
double calSumRecursion(int n){//q3
    int k=1;
    double sum=0;
    if(n==1){
        return 1;

    }else{
        double sum= calSumRecursion(n-1);
        double term= pow(-1, k+1)/k;
        sum+=term;
        cout<<"The result:"<<sum<<endl;
        return sum;}


}
double calSum2(){//q4
    int n;
    cout<< "Enter the value for n:";
    cin>> n;
    double sum=0;
    for (int k=1;k<=n;k++){
        sum += pow(-1, k+1)/k;
        cout<< "The Result:"<<sum<<endl;
    }
    return sum;
}
double calSumRecursion2(){
    int n; cout<<"Enter a value for n:";
    cin>>n;
    if(n==1){
        return 1.0;
    }
    else{
        double sum=calSumRecursion(n-1);
        sum+=pow(-1,n+1)/n;
        cout<<"The result:"<<sum<<endl;
        return sum;
    }
}


int main() {
    int n, x;
    cout<<"Enter the value for n:";
    cin>> n;
    cout<<"Enter the value for x:";
    cin>>x;
    double result= calEquation(n,x);
    cout<< "Result:"<< result<<endl;//q1
    cout<<"********";
    cout<<"Enter a value for n:";
    cin>>n;
    double sum= calSum(n);
    cout<<"Final result:"<<sum<<endl;//q2
    cout<<"********";
    cout<<"Enter the value for n: ";
    cin>>n;
    double resultRecursion= calSumRecursion(n);
    cout<<"Final recursion result:"<<result<<endl;//q3
    cout<<"********";
    double result4=calSum2();
    cout<<"Final result without recursive:"<<result4<<endl;//q4
    double result5=calSumRecursion2();
    cout<<"Final result with recursive:"<<result5<<endl;//q4





    return 0;



}
