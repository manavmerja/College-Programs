#include<iostream>
#include<string>
using namespace std;
class  InventoryItem{
    private:
    int itemID;
    string itemName;
    int quantity;
    double price;
    public:
    InventoryItem();
    InventoryItem(int itemID,string itemName,int quantity,double price);
    void displaydata();
    void addstock(int quantity);
    void sellstock(int quantity);
};
InventoryItem::InventoryItem():itemID(0),itemName("NULL"),quantity(0),price(0.0){}
InventoryItem::InventoryItem(int itemID,string itemName,int quantity,double price):itemID(itemID),itemName(itemName),quantity(quantity),price(price){}
void InventoryItem::displaydata(){
    cout<<"Item ID: "<<itemID<<endl;
    cout<<"Item Name: "<<itemName<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Price: "<<price<<endl;
}
void InventoryItem::addstock(int quantity){
    if(quantity>0){
        quantity+=quantity;
    }
    else{
        cout<<"Invalid quantity"<<endl;
    }
}
void InventoryItem::sellstock(int quantity){
   if(quantity>0 && quantity<=quantity){
    quantity-=quantity;
   }
   else if (quantity<0){
    cout<<"Invalid quantity"<<endl;
   }
    else{
     cout<<"Insufficient quantity"<<endl;
    }
}

int main(){
    InventoryItem item[3];
    item[0]=  InventoryItem();
    item[1]=  InventoryItem(1,"Pen",100,10.0);
    item[2]=  InventoryItem(2,"Pencil",50,5.0);
    for(int i=0;i<3;i++){
        item[i].displaydata();
        item[i].addstock(50);
        item[i].sellstock(20);
    }
    return 0;
}