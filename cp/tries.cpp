#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* links[26];
    bool flag=false;
    bool containsKey(char c)
    {
        return links[c-'a']!=NULL;
    }
    void putChar(char c,Node *node)
    {
        links[c-'a']=node;
    }
    Node *getNode(char c)
    {
        return links[c-'a'];
    }
    void setEnd()
    {
        flag=true;
    }
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{   
    private:
    Node *root;
    public:
    Trie()
    {
        root=new Node();
    }
    void insert(string s)
    {
        Node* ptr=root;
        for(int i=0;i<s.length();i++)
        {
            if(!ptr->containsKey(s[i]))
            {
                ptr->putChar(s[i],new Node());
            }
            ptr=ptr->getNode(s[i]);
        }
        ptr->setEnd();
    }
    bool search(string &word)
    {   
        Node *ptr=root;
        for(int i=0;i<word.length();i++)
        {
            if(!ptr->containsKey(word[i]))
            {
                return false;
            }
            ptr=ptr->getNode(word[i]);
        }
        return ptr->isEnd();
    }
    bool startsWith(string prefix)
    {   
        Node *ptr=root;
        for(int i=0;i<prefix.length();i++)
        {
            if(!ptr->containsKey(prefix[i]))
            {
                return false;
            }
            ptr=ptr->getNode(prefix[i]);
        }
        return true;
    }
};

int main()
{
    string s="apple";
    string prefix="app";
    Trie ds=Trie();
    ds.insert(s);
    if(ds.startsWith(prefix))
    {
        cout<<"Prefix "+prefix+" found in "+s<<endl;
    }
    else{
        cout<<"Prefix "+prefix+" not found in "+s<<endl;
    }
}