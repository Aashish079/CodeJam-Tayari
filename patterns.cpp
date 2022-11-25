#include<iostream>
using namespace std;

// int main(){
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=5; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
//     for (int i = 1; i <=5 ; i++)
//     {
//         for(int j = 1; j <=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
    // return 0;
// }

// int main(){
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=5-i+1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=5-i+1; j++){
//         cout<<j;
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=4-i+1; j++){
//         cout<<"\t";
//     }
//     for(int k=1; k<=(2*i-1); k++){
//         cout<<"*\t";
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
// for (int i=5; i>=1; i--){
//     for (int j=1; j<=4-i+1; j++){
//         cout<<"\t";
//     }
//     for(int k=1; k<=(2*i-1); k++){
//         cout<<"*\t";
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){

// for (int i=1; i<=5; i++){
//     for (int j=1; j<=4-i+1; j++){
//         cout<<"\t";
//     }
//     for(int k=1; k<=(2*i-1); k++){
//         cout<<"*\t";
//     }
//     cout<<endl;
// }
// for (int i=5; i>=1; i--){
//     for (int j=1; j<=4-i+1; j++){
//         cout<<"\t";
//     }
//     for(int k=1; k<=(2*i-1); k++){
//         cout<<"*\t";
//     }
//     cout<<endl;
// }
// return 0;
// }
// int main(){
//  for (int i=1; i<=5; i++){
//     for (int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for (int i=1; i<=5; i++){
//     for (int j=1; j<=5-i+1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
//  for (int i=1; i<=5; i++){
//     for (int j=1; j<=i; j++){
//     if(i%2 != 0){
//         if(j%2==0)
//             cout<<"0\t";
//         else
//             cout<<"1\t";
//     }
//     else{
//         if(j%2==0)
//             cout<<"1\t";
//         else
//             cout<<"0\t";
//     }
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){
//  for (int i=1; i<=4; i++){
//     for (int j=1; j<=i; j++){
//         cout<<j;
//     }
//     for(int k=1; k<=2*(4-i); k++){
//         cout<<" ";
//     }
//     for (int j=i; j>=1; j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
// return 0;
// }



// int main(){ 
// int counter = 1;
//  for (int i=1; i<=5; i++){
//     for (int j=1; j<=i; j++){
//         cout<<counter;
//         counter++;
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){ 
//  for (int i=1; i<=5; i++){
//     for (int j=1; j<=i; j++){
//         cout<<char(65+j-1);
//     }
//     cout<<endl;
// }
// return 0;
// }

// int main(){ 
//  for (int i=1; i<=5; i++){
//     for (int j=1; j<=5-i+1; j++){
//         cout<<char(65+j-1);
//     }
//     cout<<endl;
// }
// return 0;
// }

int main(){ 
 for (int i=1; i<=5; i++){
    for (int j=1; j<=2*i-1; j++){
        cout<<char(65+j-1);
    }
    cout<<endl;
}
return 0;
}

