#include<iostream>
using namespace std;
int main(){
    // if you are greater than equal to 60 then you get a helper which help you to get in room
     int age;
     cout<<"Enter you age: ";
     cin>>age;
     if(age>=18){
        cout<<"congratulations, You are eligible to vote."<<endl;
        if(age>=60){
            cout<<"You get a helper."<<endl;
        }
     }
     else{
        cout<<"You are not eligible to vote.";
     }
return 0;
}
