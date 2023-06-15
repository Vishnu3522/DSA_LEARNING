
class Solution{
  public:
    //Function to check whether the list is palindrome.
   bool isPalindrome(Node *head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    Node *slow = head;
    stack<int> st;

  
    while (slow != NULL) {
        st.push(slow->data);
        slow = slow->next;
    }

   while(head!=NULL){
        int top = st.top();
        st.pop();

        if (head->data != top) {
            return false;
        }

        head = head->next;
    }

    return true; 
}

};