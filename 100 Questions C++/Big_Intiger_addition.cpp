#include<iostream>
#include<algorithm>
using namespace std;


char IntToChar(int digit){
    return digit+'0';
}

int charToInt(char ch){

    // ascii of '5' = 45 and '0' = 40 
    return ch-'0';
}


string addNumbers(string n1,string n2){
        //make sure n2 is larger
        if(n1.length()>n2.length()){
            swap(n1,n2);
        }

        string result = "";

        //reverse
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());

        // add upto n1.length()

        int carry = 0;
        for(int i=0;i<n1.length();i++){
            int d1 = charToInt(n1[i]);
            int d2 = charToInt(n2[i]);

            int sum = d1+d2 + carry;
            int output_digit = sum%10;

            carry = sum/10;

            result.push_back(IntToChar(output_digit));


        }

        for(int i = n1.length();i<n2.length();i++){
            int d2 = charToInt(n2[i]);
            int sum = d2+carry;
            int output_digit = sum%10;
            carry = sum/10;

            result.push_back(IntToChar(output_digit));
        }


        //finally if a carry is generated
        if(carry){
            result.push_back('1');
        }

        //reverse the final result
        reverse(result.begin(),result.end());
        return result;



}


int main(){
    string s1,s2;
    cin>>s1>>s2;

    string result = addNumbers(s1,s2);
    cout<<result;
}