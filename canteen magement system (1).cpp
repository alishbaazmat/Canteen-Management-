#include<iostream>
#include<string>
using namespace std;
int main(){
string name;
int choice,quantity;
float total=0;
bool continueordering=true;	
	//items and their prices
	string items[] = {"Burger", "Pizza", "Samosa", "Loaded Fries", "Chicken Biryani", "Tea", "Coffee", "Pasta", "Spaghetti", "Chocolates", "Lays", "Biscuits", "Cold Drink"};
    float price[] = {120, 565, 40, 150, 500, 60, 90, 250, 350, 100, 120, 40, 120};

	//ask from user name
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"***************************************************"<<endl;
	cout<<"Welcome to Canteen System   "<<name<<endl;
	cout<<"**********************************************************"<<endl;
	
	//using loop
	do{
		for(int i=0; i<13;i++){
			
			cout<<(i+1)<<" ."<<items[i]<<"-Rs"<<price[i]<<endl;
			
		}
		cout<<"enter the number of item you want to order"<<endl;
		cin>>choice;
		if(choice==0){
			break;
		}
		if(choice<1||choice>13){
			cout<<"Invalid choice. please try again"<<endl;
		}
		else{
			cout<<"enter the quantity"<<endl;
			cin>>quantity;
			//calculate total prise
			total+=price[choice-1]*quantity;
			cout<<quantity<<" "<<items[choice-1]<<endl;
		}
		cout<<"Do you want to order more items? 1 for yes,0 for no"<<endl;
		cin>>continueordering;}
		while(continueordering);    //user add 1 then keep ordering
		cout<<"toatm amount : Rs"<<total<<endl;
		int paymentmethod;
		cout<<"Select payment method "<<" "<<"1 for online payment,"<<" "<<"2 for cash payment"<<endl;
		cin>>paymentmethod;
		if(paymentmethod==1){
			cout<<"you selected online payment,processing............"<<endl;
		}
		else if(paymentmethod==2){
			cout<<"you selected cash payment,please pay at the counter."<<endl;
		}
		else{
			cout<<"Invalid opition,defaulting to cash payment"<<endl;
		}
		cout<<"--------------------------------------------------"<<endl;
	//ask if user want delivery
	char deliverychoice;
	cout<<"do you want delivery?(Y,N):"	<<endl;
	cin>>deliverychoice;
	if(deliverychoice=='Y'||deliverychoice=='y'){
		cout<<"your order will be diliver soon   Add dilivery charges of Rs 120"<<endl;
		total+=120;
	}
	else{
		cout<<"you can pick up your order from the canteen"<<endl;
	}
	cout<<"-------------------------------------------------------------"<<endl;
	//final message
	cout<<"thank you for visiting a canteen"<<" including dilivery charges total price Rs:"<<" "<<total	<<" "<<name<<endl;
		return 0;
		cout<<"-----------------------------------------------------------"<<endl;
	}
	
	
	
	
	
