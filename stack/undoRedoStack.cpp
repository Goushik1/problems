#include <bits/stdc++.h>
using namespace std;
struct buff{
    string text = "";
	stack<string> undoStack;
	stack<string> redoStack;
    void type(char c){
        undoStack.push(text);
        text += c;
        while(!redoStack.empty()){redoStack.pop();}
    }
    void backspace(){
        if(text.empty()){
         return;
        }
        undoStack.push(text);
        while(!redoStack.empty()){redoStack.pop();}
        text.pop_back();
    }
    void undo(){
        if(undoStack.empty()){
         return;
        }
        redoStack.push(text);
        text = undoStack.top();
        undoStack.pop();
    }
    void redo(){
        if(redoStack.empty()){
         return;
        }
        undoStack.push(text);
        text = redoStack.top();
        redoStack.pop();
    }
    void print(){
        cout<<text<<endl;
    }
};
int main() {
	buff b;
	b.type('h');
	b.type('i');
	b.type('i');
	b.backspace();
	b.print();
	b.undo();
	b.print();
	b.redo();
	b.print();
}
