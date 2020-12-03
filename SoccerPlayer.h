#pragma once
//описываем интерфейс класса
#include <string>
class SoccerPlayer {
private:
	std::string name;
	std::string surname;
	unsigned int goal;
	unsigned int assist;
public:
	SoccerPlayer();
	SoccerPlayer(std::string, std::string, unsigned int, unsigned int);

	void setName(std::string);
	void setSurname(std::string);
	void setGols(unsigned int);
	void setAssists(unsigned int);
	std::string getName();
	std::string getSurname();
	unsigned int getGals();
	unsigned int getAssist();
	void print();
	void addGoals(unsigned int);
	void addAssists(unsigned int);
};