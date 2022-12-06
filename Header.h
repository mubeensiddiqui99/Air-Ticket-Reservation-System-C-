#ifndef HEADER_H
#define HEADER_H


#include<iostream>
using namespace std;
class flight
{
private:
	string travel_type;
	string airline;
	string dep_date;
	string arr_date;
	string dep_time;
	string price;
	string category;
	string flightnum;
	string dep_city;
	string arr_city;
	string class_type;
public:
	void setflight(string travel_type, string class_type, string dep_city, string arr_city, string dep_date, string arr_date, string category)
	{
		this->travel_type = travel_type;
		this->class_type = class_type;
		this->dep_date = dep_date;
		this->arr_date = arr_date;
		this->category = category;
		this->dep_city = dep_city;
		this->arr_city = arr_city;
	}
	void setflight(string airline, string price, string flightnum)
	{
		this->airline = airline;
		this->price = price;
		this->flightnum = flightnum;
	}
	flight() {}
	string get_airline()
	{
		return airline;
	}
	string get_dep_date()
	{
		return dep_date;
	}
	string get_arr_date()
	{
		return arr_date;
	}
	string get_arr_city()
	{
		return arr_city;
	}
	string get_dep_city()
	{
		return dep_city;
	}
	string get_price()
	{
		return price;
	}
	string get_category()
	{
		return category;
	}
	string get_flightnum()
	{
		return flightnum;
	}
	string get_traveltype()
	{
		return travel_type;
	}
	string get_classtype()
	{
		return class_type;
	}
};
class user
{
protected:
	string username;
	string password;
	string name;
	string contact;
	string email;
	string age;
	string gender;
	string cnic;
public:	flight Flight;
public:
	user(string username, string password, string name, string contact, string email, string age, string gender, string cnic)
	{
		this->username = username;
		this->password = password;
		this->name = name;
		this->contact = contact;
		this->email = email;
		this->age = age;
		this->gender = gender;
		this->cnic = cnic;
	}
	user() {}
};
class netBanking :public user
{
private:
	string bankusername;
	string bankpassword;
public:
	netBanking(string username, string password, string name, string contact, string email, string age, string gender, string cnic, string bankusername, string bankpassword) :user(username, password, name, contact, email, age, gender, cnic)
	{
		this->bankusername = bankusername;
		this->bankpassword = bankpassword;
	}
	netBanking() {}
};
class debit :public user
{
private:
	string cardnum;
	string expiry;
	string cvv;
public:
	debit(string username, string password, string name, string contact, string email, string age, string gender, string cnic, string cardnum, string expiry, string cvv) :user(username, password, name, contact, email, age, gender, cnic)
	{
		this->cardnum = cardnum;
		this->expiry = expiry;
		this->cvv = cvv;
	}
	debit() {}
};
class credit :public user
{
private:
	string pin;
	string cvv;
public:
	credit(string username, string password, string name, string contact, string email, string age, string gender, string cnic, string pin,string cvv) :user(username, password, name, contact, email, age, gender, cnic)
	{
		this->pin = pin;
		this->cvv = cvv;
	}
	credit(){}
};
#endif