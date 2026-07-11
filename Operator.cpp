#include<iostream>
using namespace std;

int main(){
    
    // Bit wise operator
    // int a = 2;
    // int b = 3;

    // cout<<"a&b "<< (a&b)<<endl;
    // cout<<"a|b "<< (a|b)<<endl;
    // cout<<"~a "<< (~a)<<endl;
    // cout<<" a^b "<<(a^b)<<endl;
    
    // Left and Right shift operator
    // cout<< (17>>1)<<endl;
    // cout<<(5<<1)<<endl;
    // cout<<(5>>2)<<endl;

    // Inc Dec operator
    // int i = 3;
    // cout<<(i++)<<endl;
    // // 3-Print then 3+1 = 4 
    // cout<<(++i)<<endl;
    // // 5
    // cout<<(i--)<<endl;
    // // 5
    // cout<<(--i)<<endl;
    // // 3

    // int a = 1;
    // int b = 2;

    // if(a-->0 && ++b>2){
    //     cout<<"Stage1 - Inside If"<<endl;
    // }
    // else{
    //     cout<<"Stage2 - Inside else"<<endl;
    // }
    // cout<<a<<" "<<b<<endl;

    // int no = 3;
    // cout<<(25 * (++no))<<endl;

    // int x = 1;
    // int y = x++;
    // int z = ++x;
    // cout<<y;
    // cout<<z;

    //  For loop


    // Fibonacci series

    // int n = 10;

    // int a = 0;
    // int b = 1;
    // cout<<a<<" "<<b<<" ";

    // for(int i = 1;i<=n;i++){

    //     int nextno = a + b;
    //     cout<<nextno<<" ";

    //     a = b;
    //     b = nextno;

    // }

    // Prime or not using for loop

    // int n;
    // cin>>n;

    // bool isPrime = 1;

    // for(int i = 2;i<n;i++){

    //     // rem = 0 --> not a prime
    //     if(n%i == 0){

    //         isPrime = 0;
    //         // cout<<"It is not a prime ";
    //         break;
    //     }
    //     // else{
    //     //     cout<<"It is a prime ";  --> No need as yha prime prove krne ke liye sare no se devide krke rem = 0 ana chahiye isiliye
    //     //     break;
    //     // }

    // }

    // if(isPrime == 0){
    //     cout<<"Not a prime "<<endl;
    // }
    // else{
    //     cout<<"It is a prime "<<endl;
    // }

    // for(int i = 0;i<5;i++){
    //     for(int j = i;j<=5;j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
        


    // }

    // Ques - 1:

    
    // int n;
    // cin>>n;

    // int prod = 1;
    // int sum = 0;

    // while(n != 0){

    //     int digits = n%10;
    //     prod = prod*digits;
    //     sum = sum + digits;

    //     n = n/10;
    // }
    // int ans = prod - sum;
    // cout<<ans<<endl;

    // Ques - 2

    int n;
    cin>>n;

    int count = 0;
    while(n != 0){

        // checking last bit
        if(n&1){

            count = count + 1;
        }
        n = n>>1;
    }
    cout<<count;
    
    return 0;
}