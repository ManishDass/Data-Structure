class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *head = new node();
    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->data = 5;
    second->data = 23;
    third->data = 76;

    first->next = second;
    second->next = third;
    head->next = first;
}