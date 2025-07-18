#include "stack.h"

int main() {
    Stack st;
    st.push(30);
    st.push(15);
    st.push(30);
    st.Pop();
    st.push(9);
    int p=st.peek();
    cout << p<<endl;
    st.Display(); 
   
}