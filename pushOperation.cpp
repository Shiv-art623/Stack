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
        cout << st.arr[i] << " ";
    }

    return 0;
}