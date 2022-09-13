

#include <iostream>

using namespace std;

template <typename T>

class Q
{
private:
    T q[20];
    int maxSize;
    int items = 0;
public:
    Q(int maxSize)
    {
        this -> maxSize = maxSize;
    }
    void Enqueue( T item)
    {
    if (items < maxSize)
        {
        q[items] = item; 
        items++;
        }
    }

    T Dequeue()
    {
        T t;
    if(  items > 0)
        {
            t = q[0];
        for(int i = 0; i < items; i++)
            {
                q[i] = q[i + 1];
            }
        items--;
        q[maxSize - 1] = t; 
        }
        return t; 
    }

    int Count()
    {
    return items;
    }

    bool isEmpty()
    {
    return items == 0;
    }
    void Retrieve(int i)
    {
       q[i].toString() ; 
            // set to 1   
    }
    void retrieveall()
    {
       cout << items << endl;
        for (int i = 0; i < items; i++)
        {
           q[i].toString();
        }
    }
};

class Pizza
{
    private:
        std :: string Toppings;
        std :: string Address;
    public:
        Pizza() : Pizza("None" , "None") {}  // default
        Pizza(string T, string A)
        {
            Toppings = T;
            Address = A;
        
        }
        void toString()
        {
            cout << Toppings << " " << Address << endl;
            
        }
};
int main()
{
   Q <Pizza> PizzaQueue(7);
   
   
    Pizza p1("pepperoni", "123 Lane"), p2("cheese", "456 Lane")
        ,p3("sauage" , "789 Ave"), p4("veggie" , "901 Ave")
        ,p5("supreme", " 109 Craddock"), p6("beef", "Bocat Lane");
   
    
    
   
   PizzaQueue.Enqueue(p1 );
   PizzaQueue.Enqueue(p2 ); 
   PizzaQueue.Enqueue(p3 );
   PizzaQueue.Enqueue(p4 );
   PizzaQueue.Enqueue(p5 );
   PizzaQueue.Enqueue(p6 );
   
   PizzaQueue.Retrieve(2);
  
   //PizzaQueue.retrieveall();
   PizzaQueue.Dequeue();
   //PizzaQueue.Retrieve(0);
   cout << "The amount of Pizza in the Queue is: " << PizzaQueue.Count() << endl;
   PizzaQueue.Dequeue(); 
   
   cout << "The amount of Pizza in the Queue is: " << PizzaQueue.Count() << endl;
   
   //cout << PizzaQueue.isEmpty();
   
    //PizzaQueue.retrieveall();
   
  
  
  
  

}







