

#include "pony.hpp"

Pony::Pony() {}
//Constructor 
Pony::Pony(const Pony& copy)
:
	_name(copy._name),
	_color(copy._color),
	_size_of_horn(copy._size_of_horn),
	_weight(copy._weight),
	_favorite_anime(copy._favorite_anime)
{}

//Destructor
Pony::~Pony() {}

Pony & Pony::operator=(const Pony& op)
{
	if (this == &op)
		return (*this); 
	this->_name = op._name;
	this->_color = op._color;
	this->_size_of_horn = op._size_of_horn;
	this->_weight = op._weight;
	this->_favorite_anime = op._favorite_anime;
	return (*this);
}
// GETTER - SETTER
std::string Pony::get_Color()                               { return (this->_color);}
std::string Pony::get_Name()                                { return (this->_name);}
std::string Pony::get_Size_Of_Horn()                        { return (this->_size_of_horn);}
std::string Pony::get_Weight()                              { return (this->_weight);}
std::string Pony::get_Favorite_Anime()                      { return (this->_favorite_anime);}

void Pony::set_Name(std::string name)                       {this->_name = name;}
void Pony::set_Color(std::string color)                     {this->_color = color;}
void Pony::set_Size_Of_Horn(std::string _size_of_horn)      {this->_size_of_horn = _size_of_horn;}
void Pony::set_Weight(std::string _weight)                  {this->_weight = _weight;}
void Pony::set_Favorite_Anime(std::string _favorite_anime)  {this->_favorite_anime = _favorite_anime;}