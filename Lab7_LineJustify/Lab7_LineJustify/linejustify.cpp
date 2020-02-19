#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void splitText(string text, vector<string> &words) // Splits a string into words
{
	string oneWord;
	stringstream ss(text);
	while (ss >> oneWord) words.push_back(oneWord);
}

string combineText(vector<string> words) // Concatenates words to a string
{
	string text = "";
	for (int i = 0; i < words.size(); i++) text = text + words[i];
	return text;
}

bool isPunctuation(string s) // Ends in punctuation?
{
	string punc = ",.;:!?";
	return (punc.find(s[s.size() - 1]) != string::npos);
}

string justified(string message, int linelength) // Justifies a supplied message
{
	vector<string> words;
	int numWords;
	int i, w;
	int tempLength = 0, remain;

	splitText(message, words); // Split into words
	numWords = words.size();

	for (i = 0; i < numWords - 1; i++) // Except last word on line ...
	{
		if (isPunctuation(words[i])) words[i] = words[i] + " "; // Add blank for any punctuation
		words[i] = words[i] + " "; // Add normal blank after a word
	}

	for (i = 0; i < words.size(); i++) tempLength += words[i].size(); // Find current length and number of extra blanks needed
	remain = linelength - tempLength;

	srand(time(NULL));
	if (remain >= 0) // Add blanks to remain random words
		for (i = 1; i <= remain; i++)
		{
			w = rand() % (numWords - 1);
			words[w] = words[w] + " ";
		}
	else
		cout << "Too many characters in the string" << endl;

	return combineText(words); // Recombine
}


int main()
{
	string message = "Contrary to popular belief, Lorem Ipsum is not simply random text.";
	cout << "Original: " + message << endl;
	cout << "Justified: " + justified(message, 75) << endl;
}