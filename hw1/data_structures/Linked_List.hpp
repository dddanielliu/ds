class Linked_List {
    public:
        Linked_List(): head(nullptr){}
        ~Linked_List() {
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
                Node* now = head;
                while (now->next != nullptr){
                    now = now->next;
                }
                now->next = new Node;
                now = now->next;
                now->data = x;
                now->next = nullptr;
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
        struct Node{
            int data;
            Node* next;
        };
        struct Node *head;
};