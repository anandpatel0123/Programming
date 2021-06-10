#include<iostream>
using namespace std;

int vowelCount(string str) 

{ 
    int v = 0;
	    for (int i = 0; str[i]!='\0'; ++i)

    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

            ++v;

    }

	return v; 
} 

int main(){
   string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten",
   "eleven", "twelve", "thirteen", "fourteen","fifteen","sixteen", "seventeen","eighteen","nineteen","twenty",
   "twentyone","twentytwo","twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty",
   "thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","thirtyeight","thirtynine","fourty",
    "fourtyone","fourtytwo","fourtythree","fourtyfour","fourtyfive","fourtysix","fourtyseven","fourtyeight","fourtynine","fifty",
   "fiftyone","fiftytwo","fiftythree","fiftyfour","fiftyfive","fiftysix","fiftyseven","fiftyeight","fiftynine","sixty",
   "sixtyone","sixtytwo","sixtythree","sixtyfour","sixtyfive","sixtysix","sixtyseven","sixtyeight","sixtynine","seventy",
   "seventyone","seventytwo","seventythree","seventyfour","seventyfive","seventysix","seventyseven","seventyeight","seventynine","eighty",
   "eightyone","eightytwo","eightythree","eightyfour","eightyfive","eightysix","eightyseven","eightyeight","eightynine","ninety",
   "ninetyone","ninetytwo","ninetythree","ninetyfour","ninetyfive","ninetysix","ninetyseven","ninetyeight","ninetynine","hundred"};
   
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    int total=0;
    int vovel;
   
    for(int i=0;i<n;i++){
        vovel=vowelCount(words[num[i]]);
        total+=vovel;
    }
    int temp,count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
            temp=num[i]+num[j];
        if(temp==total){
            count++;
        }
    }
        
    }

    if(count>100){
        cout<<"greater 100";
    }
    else{
        cout<<words[count];
    }

    
}