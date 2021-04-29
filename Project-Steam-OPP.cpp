#include <iostream>
using namespace std;
int main () {
	string credits;
	string Card;
	string Numbers;
	string ID;
	string confirm;
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"                          Welcome to Steam Wallet Credits Top Up System!"<<endl;
	cout<<"                                Please Enter Your Steam ID Below"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Enter your Steam ID : ";
	cin>>ID;
	cout<<"========================================================================================================"<<endl;
	cout<<"Welcome back " <<ID<< " !" <<endl;
	cout<<"Please select your funds that you want to purchase"<<endl;
	cout<<"Press[1] Add 150 Steam Credits [150 Baht] to your Steam Wallet"<<endl;
	cout<<"Press[2] Add 300 Steam Credits [300 Baht] to your Steam Wallet"<<endl;
	cout<<"Press[3] Add 750 Steam Credits [750 Baht] to your Steam Wallet"<<endl;
	cout<<"Press[4] Add 1,500 Steam Credits [1,500 Baht] to your Steam Wallet"<<endl;
	cout<<"Press[5] Add 3,000 Steam Credits [3,000 Baht] to your Steam Wallet"<<endl;
	cout<<"========================================================================================================"<<endl;

	do {
    cout<<"Enter a digit to select your funds : ";
    cin >> credits;
    } while (credits!="1" && credits!="2" && credits!="3" && credits!="4" && credits!="5");
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;  
    cout<<"Please select your payment method"<<endl;
    cout<<"Press[6] Paypal"<<endl;
	cout<<"Press[7] Visa"<<endl;
    do {
    cout<<"Enter a digit to select your payment method : ";
	cin>>Card; 
    }  
	while (Card!="6" && Card!="7");
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Please Enter your card numbers in xxxx-xxxx-xxxx-xxxx"<<endl;
	cin>>Numbers;
	cout<<"========================================================================================================"<<endl;
	cout<<"Please review your transaction before complete this purchase"<<endl;
	cout<<"Steam ID : "<<ID<<endl;
	if (Card=="6" || Card=="7")
	{
		if(Card=="6" && Card!="7" )
		cout<<"Payment method : Paypal"<<endl;
	}
	if (Card=="7" && Card!="6")
	{
		cout<<"Payment method : Visa"<<endl;
	}
	
	cout<<"Card Numbers : "<<Numbers<<endl;
	if (credits=="1" || credits=="2" || credits=="3" || credits=="4" || credits=="5")
	{
		if(credits=="1")
		cout<<"Please confirm to purchase 150 Steam Credits to your Steam Wallet"<<endl; 
	}
	if (credits=="2")
	{
		cout<<"Please confirm to purchase 300 Steam Credits to your Steam Wallet"<<endl;
	}
	if (credits=="3")
	{
		cout<<"Please confirm to purchase 750 Steam Credits to your Steam Wallet"<<endl;
	}
	if (credits=="4")
	{
		cout<<"Please confirm to purchase 1,500 Steam Credits to your Steam Wallet"<<endl;
	}
	if (credits=="5")
	{
		cout<<"Please confirm to purchase 3,000 Steam Credits to your Steam Wallet"<<endl;
	}
	cout<<"========================================================================================================"<<endl;
	cout<<"           Press [Y] to confirm this purchase or Press [N] to cancel this purchase : ";
	cin>>confirm;
	if (confirm=="Y" || confirm=="N" || confirm=="y" || confirm=="n")  
	{
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	if(confirm=="Y" || confirm=="y") {

	if(credits=="1" || credits=="2" || credits=="3" || credits=="4" || credits=="5") {		

		if(credits=="1"){
			cout<<"Your 150 Steam credits are successfully added to your Steam Wallet, Thank you! "<<ID<<endl;
		}
		if(credits=="2"){
			cout<<"Your 300 Steam credits are successfully added to your Steam Wallet, Thank you! "<<ID<<endl;
		}
		if(credits=="3"){
			cout<<"Your 750 Steam credits are successfully added to your Steam Wallet, Thank you! "<<ID<<endl;
	    }
	    if(credits=="4"){
			cout<<"Your 1,500 Steam credits are successfully added to your Steam Wallet, Thank you! "<<ID<<endl;
		}
		if(credits=="5"){
			cout<<"Your 3,000 Steam credits are successfully added to your Steam Wallet, Thank you! "<<ID<<endl;
		}
}
	cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
}
	if (confirm=="N" || confirm=="n")
	{
		cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"Successful exit Steam without any credits purchase"<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	}
}
	if (confirm!="Y" && confirm!="N" && confirm!="y" && confirm!="n")
	{
		cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"ERROR! Something did wrong PLEASE TRY AGAIN"<<endl;
		cout<<"--------------------------------------------------------------------------------------------------------"<<endl;
	}

	system ("pause");
	return 0;
}



