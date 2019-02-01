#include<iostream>
using namespace std;
class Queue
{
    int item, i;
    int *arr;
    int r;
    int f;
    int sizeofelement;
public:
Queue(int capacity)
    {
        arr=new int[capacity];
        sizeofelement=capacity;
        r=0;
        f=0;
    }
void enqueue(int item)
    {
        if (r==sizeofelement)
            cout << "\n QUEUE IS FULL";
        else
            {
                arr[r++]=item;
        }
    }
int dequeue() {
        if (f == r)
            cout << "\nQUEUE IS EMPTY";
        else {
            return arr[f++];
        }
    }
void display() {
        for (i = f; i < r; i++)
            cout<< arr[i]<<"\n";
    }
};
int main() {
    int ch,e=1,item,capacity,c;
    cout<<"Enter the capacity of the queue ";
    cin>>capacity;
    Queue obj(capacity);
    do
        {
        cout << "\n\n Queue Main Menu";
        cout << "\n1.enqueue \n2.Remove \n3.Display \nOthers to exit";
        cout << "\nEnter Your Choice : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
                cout << "\nEnter The Value to be enqueue : ";
                cin>>item;
                obj.enqueue(item);
                break;
            case 2:
                c=obj.dequeue();
                cout<<"THE POPPED VALUE IS : "<<c;
                break;
            case 3:
                obj.display();
                break;
            default:
                e = 0;
                break;
        }
    } while (e);

    return 0;
}
