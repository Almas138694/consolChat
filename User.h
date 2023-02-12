#pragma once
#include <iostream>
class User
{
private:
	const std::string _login;
	std::string _password;
	std::string _name;

public:
	User(const std::string& login, const std::string& name, const std::string& password) :_login(login), _name(name), _password(password) {}
	
	const std::string GetLogin()const { return _login; }

	const std::string GetPassword()const { return _password; }
	void SetPassword(const std::string& password) { _password = password; }

	const std::string GetName()const { return _name; }
	void setName(const std::string& name) { _name = name; }
};

