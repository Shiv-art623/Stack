#include<bits/stdc++.h>
using namespace std;
//implement using array
class Stack{
    public:
    int *arr;
    int size;
    int top;
Stack(int s){
    size = s;
    top= -1;
    arr = new int [s];
}

void push(int value){
    if(top == size-1) {cout<<"stack overflow"<<endl;
    return;}
else{
    top++;
    arr[top] = value;
}
}
void pop(){
    if(top == -1) cout<<"Stack underflow"<<endl;
    else{
        cout<<"Pooped  "<<arr[top]<<"  from the stack\n";
        top--;
    }
}
int peek(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else{
        return arr[top];
    }
}
bool isEmpty(){
    return top == -1;
}
int isSize(){
    return top+1;
}
};
int main() {
    Stack st(5);   // Stack of size 5

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // This will cause overflow
    st.push(60);
    st.pop();
    // Printing stack elements
    cout << "Stack elements: ";
    for(int i = 0; i <= st.top; i++){
        cout<<st.arr[i] << " ";
    }
    cout<<"\nTop Element "<<st.peek()<<endl;;
    cout<<st.isEmpty()<<endl;
    cout<<st.isSize();
    return 0;
}