// CPP program to print count of 
// vowels using pointers 

#include <iostream> 

using namespace std; 

int vowelCount(char *sptr) 
{ 
	// Create a counter 
	int count = 0; 

	// Iterate the loop until null character encounter 
	while ((*sptr) != '\0') { 

		// Check whether character pointer finds any vowels 
		if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'
			|| *sptr == 'o' || *sptr == 'u') { 

			// If vowel found increment the count 
			count++; 
		} 

		// Increment the pointer to next location 
		// of address 
		sptr++; 
	} 

	return count; 
} 

// Driver Code 
int main() 
{ 
	// Initialize the string 
	char str[] ={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten",
   "eleven", "twelve", "thirteen", "fourteen","fifteen","sixteen", "seventeen","eighteen","nineteen","twenty",
   "twentyone","twentytwo","twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty",
   "thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","twentyeight","twentynine","fifty",
   "fiftyone","fiftytwo","fiftythree","fiftyfour","fiftyfive","fiftysix","fiftyseven","fiftyeight","fiftynine","sixty",
   "sixtyone","sixtytwo","sixtythree","sixtyfour","sixtyfive","sixtysix","sixtyseven","sixtyeight","sixtynine","seventy",
   "seventyone","seventytwo","seventthree","seventyfour","seventyfive","seventysix","seventyseven","seventyeight","seventynine","eighty"
   "eightyone","eightytwo","eightythree","eightyfour","eightyfive","eightysix","eightyseven","eightyyeight","eightynine","ninety",
   "ninetyone","ninetytwo","ninetythree","ninetyfour","ninetyfive","ninetysix","ninetyseven","ninetyeight","ninetynine","hundred"};; 

	// Display the count 
	cout << "Vowels in above string: " << vowelCount(str); 

	return 0; 
} 
