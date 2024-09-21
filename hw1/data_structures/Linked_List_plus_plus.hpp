class Linked_List_plus_plus {
    public:
        Linked_List_plus_plus(): head(nullptr){}
        ~Linked_List_plus_plus() {
            if (head == nullptr)
                return;
            Node* prev = head;
            Node* now = prev->next;
            while (now != nullptr){
                delete prev;
                prev = now;
                now = now->next;
            }
            delete prev;
        }
        void insert(int x){
            if (head == nullptr){
                head = new Node;
                head->data = x;
                head->next = nullptr;
            }
            else {
                Node* newnode = new Node;
                newnode->data = x;

                if (newnode < head){
                    newnode->next = head;
                    head = newnode;
                }
                else{
                    Node* now = head;
                    while (now->next != nullptr && now->next < newnode){
                        now = now->next;
                    }
                    newnode->next = now->next;
                    now->next = newnode;
                }
            }
            return;
        }
        long long getSum(){
            long long sum = 0;
            Node* now = head;
            while (now != nullptr){
                sum += now->data;
                now = now->next;
            }
            return sum;
        }

    private:
        typedef struct Node{
            int data;
            Node* next;
        } Node;
        Node *head;
};