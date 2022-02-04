#include<iostream>
using namespace std;
class Item
{
    protected:
                float price;
                string name;
    public:
                void clothing()
                {
                    if(name=="dress"||name=="hoodie")
                    {
                        price=980;
                    }
                    else if(name=="shirt"||name=="jeans"||name=="t-shirt")
                    {
                        price=540;
                    }
                    else if(name=="coat")
                    {
                        price=1020;
                    }
                    else
                    {    
                        cout<<"Incorrect Input"<<endl;
                    }
                }
                void clothes()
                {
                    cout<<"*****************FLAT 10% OFF***************** "<<endl;
                    cout<<"Enter the cloth purchased: (dress,shirt,t-shirt,jeans,hoodie,coat)"<<endl;
                    getline(cin,name);
                    clothing();
                }
     
};
class Discounted_item:public Item
{
    protected:
                float dis,disc_price,total;
    public:
                void disc()
                {
                    dis=(price/10);
                    disc_price=price-dis;
                    total=total+disc_price;
                }
                void display()
                {
                    cout<<"name: "<<name<<endl;
                    cout<<"price: "<<price<<endl;
                    cout<<"Discounted price: "<<disc_price<<endl;
                    cout<<"Total: "<<total<<endl;
                }
};
int main()
{
    Discounted_item ob;
    int ch,it=1;
    do
    {
        ob.clothes();
        ob.disc();
        cout<<"item no. : "<<it<<endl;
        ob.display();
        it++;
        cout<<"Want to continue then press 1, to exit press 0"<<endl;
        cin>>ch;
        cin.ignore();
    } while (ch==1);
    return 0;
}