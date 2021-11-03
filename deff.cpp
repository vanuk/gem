#include <iostream>
#include <random>
#include <algorithm>
#include <iterator>
using namespace std;
class player {
private:
	int  id, c, ball, bal;
	string  name, rank, captain, general, mayor, prapor, leytenant, marshal, majorgeneral, polkovnuk, pidpolkovnuk, boets;

public:
	void idq(int id) {
		this->id = id;
	}
	void nameq() {
		cout << "type name player---";
		cin >> name;
		cout << "name::" << name << endl;
	}
	void rankq() {
		cout << "type ball player---";

		cin >> bal;
		switch (bal) {
		case 1:
			ball = 0;
			if (ball <= 0) {
				rank = "boets";
				cout << "rank::" << rank << endl;
			}
			break;
		case 2:
			ball = 25;
			if (ball == 25) {
				rank = "leytenant";
				cout << "rank::" << rank << endl;
			}
			break;
		case 3:
			ball = 50;
			if (ball == 50) {
				rank = "captain";
				cout << "rank::" << rank << endl;
			}
			break;
		case 4:
			ball = 75;
			if (ball == 75) {
				rank = "polkovnik";
				cout << "rank::" << rank << endl;
			}
			break;
		case 5:
			ball = 100;
			if (ball >= 100) {
				rank = "general";
				cout << "rank::" << rank << endl;
			}
			break;
		}
	}
	void info() {
		cout << "********************" << endl;
		cout << "* id--" << id << endl << "* name--" << name << endl << "* rank--" << rank << endl;
		cout << "********************" << endl;
	}
};
class heroes {
private:
	int id, hp, damage;
	string name;
public:
	void hero(int id, int hp, string name, int damage) {
		this->id = id;
		this->hp = hp;
		this->name = name;
		this->damage = damage;
	}
	void idr(int id) {
		this ->id = id;
	}
	void infoh() {
		cout << "*********************" << endl;
		cout << "* id hero--" << id << endl << "* hp hero--" << hp << endl << "* name hero--" << name << endl << "* damage hero--" << damage << endl;
		cout << "*********************" << endl;
	}
};
class playerhero {
private:
	
	player p;
	heroes h;
public:
	void tim() {

		vector<int> p = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		random_device rd;
		mt19937 g(rd());

		shuffle(p.begin(), p.end(), g);

		copy(p.begin(), p.end(), ostream_iterator<int>(cout, " "));
		cout << "\n";

		vector<int> h = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		random_device rde;
		mt19937 e(rde());

		shuffle(h.begin(), h.end(), e);

		copy(h.begin(), h.end(), ostream_iterator<int>(cout, " "));
		cout << "\n";

		

	}
	void wer(){
		int p  ,h;

		

	}

};


	int main() {

		player p[10];
		heroes h[10];
		playerhero W;


		p[0].idq(1);
		p[0].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[0].rankq();
		cout << "player1" << endl;
		p[0].info();
		cout << endl << endl << endl;

		p[1].idq(2);
		p[1].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[1].rankq();
		cout << "player2" << endl;
		p[1].info();
		cout << endl << endl << endl;

		p[2].idq(3);
		p[2].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[2].rankq();
		cout << "player3" << endl;
		p[2].info();
		cout << endl << endl << endl;

		p[3].idq(4);
		p[3].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[3].rankq();
		cout << "player4" << endl;
		p[3].info();
		cout << endl << endl << endl;

		p[4].idq(5);
		p[4].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[4].rankq();
		cout << "player5" << endl;
		p[4].info();
		cout << endl << endl << endl;

		p[5].idq(6);
		p[5].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[5].rankq();
		cout << "player6" << endl;
		p[5].info();
		cout << endl << endl << endl;

		p[6].idq(7);
		p[6].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[6].rankq();
		cout << "player7" << endl;
		p[6].info();
		cout << endl << endl << endl;

		p[7].idq(8);
		p[7].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[7].rankq();
		cout << "player8" << endl;
		p[7].info();
		cout << endl << endl << endl;

		p[8].idq(9);
		p[8].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[8].rankq();
		cout << "player9" << endl;
		p[8].info();
		cout << endl << endl << endl;

		p[9].idq(10);
		p[9].nameq();
		cout << "*****************" << endl;
		cout << "* please type number" << endl << "* 1. boets have 0 ball" << endl << "* 2.leytenant have 25 ball" << endl << "* 3.captain have 50 ball" << endl << "* 4.polkovnic have 75 ball" << endl << "* 5.general have 100 ball" << endl;
		cout << "*****************" << endl;
		p[9].rankq();
		cout << "player10" << endl;
		p[9].info();
		cout << endl << endl;



		cout << "------------------------------" << endl;
		h[0].hero(11, 1000, "varwar", 25);
		h[0].infoh();
		cout << endl;
		h[1].hero(12, 390, "gigant", 25);
		h[1].infoh();
		cout << endl;
		h[2].hero(13, 800, "rembo", 25);
		h[2].infoh();
		cout << endl;
		h[3].hero(14, 450, "rembo2", 25);
		h[3].infoh();
		cout << endl;
		h[4].hero(15, 750, "terminator", 25);
		h[4].infoh();
		cout << endl;
		h[5].hero(16, 100, "goblin", 25);
		h[5].infoh();
		cout << endl;
		h[6].hero(17, 50, "cat", 25);
		h[6].infoh();
		cout << endl;
		h[7].hero(18, 999, "robot", 25);
		h[7].infoh();
		cout << endl;
		h[8].hero(19, 600, "bull", 25);
		h[8].infoh();
		cout << endl;
		h[9].hero(20, 500, "demon", 25);
		h[9].infoh();
		cout << endl;

		W.tim();
		

	}
