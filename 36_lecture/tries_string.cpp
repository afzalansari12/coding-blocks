#include<iostream>
#include<unordered_map>
using namespace std;
class node {
    puublic :
    char ch;
    bool terminal;
    unordered_map<char,node*> childmap;

    node(char ch){
        this->ch = ch;
        this->terminal;
    }
};

class trie {
public :
trie(){
    root = new node('#');
}
void insert(string str){
    node* cur = root;
    for(char ch : str){
        if(cur->childmap.find(ch)== cur->childmap.end()){
            node* n = new node(ch);
            cur->childmap[ch]= n;
        }
        cur = cur->childmap[ch];
    }
    cur->terminal = true ;

}
bool search(string str){
    node* cur = root;
    for(char ch :str){
        if(cur-> childmap.find(ch)== cur->childmap.end()){
            return false;
        }
       cur= cur->childmap[ch];
    }
    return cur->terminal;
}

};
int main(){
    string words[] = {"code","coder"};

    trie t;
    for(string word : words ){
        t.insert(word);
    }
    string queries[]={"code","coding"};
    for(string query : queries){
        t.search(query) ? cout << query << " is present " << endl : cout << query << " is absent " << endl;
    }

return 0;
}