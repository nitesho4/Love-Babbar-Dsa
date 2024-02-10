#include<iostream>
using namespace std;

class TrieNode{
 public:
  char data;
  TrieNode* children[26];
  bool isTerminal;

  TrieNode(char ch){
   data=ch;
   for(int i=0;i<26;i++){
    children[i]=NULL;
   }
   isTerminal=false;
  }
};

class Trie{
  public:
  TrieNode* root;

  Trie(){
    root = new TrieNode('\0');
  }

//Insertion in Tries
  void insertUtil(TrieNode* root,string word){
    if(word.length()==0){
      root->isTerminal=true;
      return ;
    }

    int index=word[0]-'A';
    TrieNode* child;

    if(root->children[index]!=NULL){
      child=root->children[index];
    }
    else{
      child = new TrieNode(word[0]);
      root->children[index]=child; 
    }

    insertUtil(child,word.substr(1));
  }

  void insertWord(string word){
    insertUtil(root,word);
  }

//Searching in Tries
  bool searchUtil(TrieNode *root, string word)
  {
    // cout<<"hey";
    if (word.length() == 0)
    {
      return root->isTerminal;
    }

    int index = word[0] - 'A';
    TrieNode *child;

    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    else
    {
      return false;
    }

    return searchUtil(child, word.substr(1));
  }

  bool searchWord(string word)
  {
    return searchUtil(root, word);
  }

//Deletion in Tries
  void deleteUtil(TrieNode *root, string word)
  {
    if (word.length() == 0)
    {
      root->isTerminal = false;
      return;
    }

    int index = word[0] - 'A';
    TrieNode *child;

    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    else
    {
      cout<<"This word is not present"<<endl;
    }

    deleteUtil(child, word.substr(1));
  }

  void deleteWord(string word)
  {
    deleteUtil(root, word);
  }
};

int main(){
  Trie* t=new Trie();
  t->insertWord("NITESH");
  t->insertWord("DO");
  t->insertWord("TIME");
  t->insertWord("ARM");

  cout<<"Present or Not "<<t->searchWord("TIME")<<endl;
  t->deleteWord("TIME");
  cout<<"Present or Not "<<t->searchWord("TIME")<<endl;

 return 0;
}

class TrieNode
{
 public:
 char data;
 TrieNode *children[26];
 bool isTerminal;

 TrieNode(char ch)
 {
    data = ch;
    for (int i = 0; i < 26; i++)
    {
      children[i] = NULL;
    }
    isTerminal = false;
 }
};

class Trie
{
 public:
 TrieNode *root;

 Trie()
 {
    root = new TrieNode('\0');
 }

 // Insertion in Tries
 void insertUtil(TrieNode *root, string word)
 {
    if (word.length() == 0)
    {
      root->isTerminal = true;
      return;
    }

    int index = word[0] - 'a';
    TrieNode *child;

    if (root->children[index] != NULL)
    {
      child = root->children[index];
    }
    else
    {
      child = new TrieNode(word[0]);
      root->children[index] = child;
    }

    insertUtil(child, word.substr(1));
 }

 void insertWord(string word)
 {
    insertUtil(root, word);
 }

 void printSuggestions(TrieNode *curr, vector<string> &temp, string prefix)
 {
    if (curr->isTerminal)
    {
      temp.push_back(prefix);
    }

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
      TrieNode *next = curr->children[ch - 'a'];

      if (next != NULL)
      {
        prefix.push_back(ch);
        printSuggestions(next, temp, prefix);
        prefix.pop_back();
      }
    }
 }

 vector<vector<string>> getSuggestions(string str)
 {
    TrieNode *prev = root;
    vector<vector<string>> output;
    string prefix = "";

    for (int i = 0; i < str.length(); i++)
    {
      char lastch = str[i];
      prefix.push_back(lastch);

      TrieNode *curr = prev->children[lastch - 'a'];

      if (curr == NULL)
      {
        break;
      }

      vector<string> temp;
      printSuggestions(curr, temp, prefix);

      output.push_back(temp);
      temp.clear();
      prev = curr;
    }
    return output;
 }
};

vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr)
{
 //    Write your code here.
 Trie *t = new Trie();
 for (int i = 0; i < contactList.size(); i++)
 {
    string str = contactList[i];
    t->insertWord(str);
 }

 return t->getSuggestions(queryStr);
}