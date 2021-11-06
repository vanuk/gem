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
	int  idq(int iD) {
		id = iD;
		return id;
	}
	int gid() {
		return id;
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
	int idr(int iD) {
		id = iD;
		return id;
	}
	int gidr() {
		return id;
	}
	int damagee(int Damage) {
		damage = Damage;
		return damage;
	}
	void infoh() {
		cout << "*********************" << endl;
		cout << "* id hero--" << id << endl << "* hp hero--" << hp << endl << "* name hero--" << name << endl << "* damage hero--" << damage << endl;
		cout << "*********************" << endl;
	}
	int dem() {
		return damage;
	}
	int hepe() {
		return hp;
	}
};
class playerhero {
private:
	int id, hp, dm;
	player p;
	heroes h;
public:
	void tim(player a,heroes b, int id) {
		p = a;
		h = b;
		this->id = id;
		hp = b.hepe();
		dm = b.dem();
	}
	void vi(){
		p.info();
	    h.infoh();
	}
	int getid() {
		return id;
	}
	
	
	int hepe() {
		return hp;
	}
	int dem() {
		return dm;
	}
};

class team {
private :
	playerhero a[10], team1[5], team2[5];
	int comanda1hepe=0, comanda2hepe=0, comanda1dem=0, comanda2dem=0;
	int finalhp, finaldm;
public:
	void gplayerhero(playerhero z, int i) {
		a[i] = z;
	}
	void createteam() {
		for (int i = 0; i < 10; i++) {
			if (a[i].getid() == 1)  team1[0] = a[i];
			if (a[i].getid() == 2)  team1[1] = a[i];
			if (a[i].getid() == 3)  team1[2] = a[i];
			if (a[i].getid() == 4)  team1[3] = a[i];
			if (a[i].getid() == 5)  team1[4] = a[i];
			if (a[i].getid() == 6)  team2[0] = a[i];
			if (a[i].getid() == 7)  team2[1] = a[i];
			if (a[i].getid() == 8)  team2[2] = a[i];
			if (a[i].getid() == 9)  team2[3] = a[i];
			if (a[i].getid() == 10) team2[4] = a[i];

		}
	}
	void teminfo1() {
		cout << "######################" << "\nTeam1:\n"<<"######################" << endl;
		for (int i = 0; i < 5; i++) {
			team1[i].vi();
		}

	}
	void teaminfo2() {
		cout << "######################" << "\nTeam2:\n"<<"######################" << endl;
		for (int i = 0; i < 5; i++) {
			team2[i].vi();

		}

	}
	void team1first () {
		for (int i = 0; i < 5; i++) {
			cout << "..................." << endl;
			comanda1dem += team1[i].dem();
			comanda1hepe += team1[i].hepe();
			cout<< comanda1hepe <<endl;
			cout << comanda1dem << endl;
			
		}

	}
	void team2second() {
		for (int i = 0; i < 5; i++) {
			cout << "..................." << endl;
			comanda2dem += team2[i].dem();
			comanda2hepe += team2[i].hepe();
			cout << comanda2hepe<<endl;
			cout << comanda2dem << endl;
		}
	}
	void theend() {
		finalhp = comanda1hepe - comanda2dem;
		finaldm = comanda2hepe - comanda1dem;
		if (finalhp > finaldm) {
			cout << "won comand 1" << endl;
		}
		else{ 
			cout << "won comand 2" << endl;
		}
	}
};
class sesions {
private:
	playerhero team1[5], team2[5];
	
public:
	void final() {
		if (team1 > team2) {
			cout << "won match comand 1" << endl;
		}
		else {
			cout << "won match comand 2" << endl;
		}
	}
};

	int main() {
		srand(time(0));
		player p[10];
		heroes h[10];
		playerhero ph[10];
		team a,b,c;
		sesions x;
		bool a, b;
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
		h[0].hero(1, 1000, "varwar", 25);
		h[0].infoh();
		cout << endl;
		h[1].hero(2, 390, "gigant", 25);
		h[1].infoh();
		cout << endl;
		h[2].hero(3, 800, "rembo", 25);
		h[2].infoh();
		cout << endl;
		h[3].hero(4, 450, "rembo2", 25);
		h[3].infoh();
		cout << endl;
		h[4].hero(5, 750, "terminator", 25);
		h[4].infoh();
		cout << endl;
		h[5].hero(6, 100, "goblin", 25);
		h[5].infoh();
		cout << endl;
		h[6].hero(7, 50, "cat", 25);
		h[6].infoh();
		cout << endl;
		h[7].hero(8, 999, "robot", 25);
		h[7].infoh();
		cout << endl;
		h[8].hero(9, 600, "bull", 25);
		h[8].infoh();
		cout << endl;
		h[9].hero(10, 500, "demon", 25);
		h[9].infoh();
		cout << endl;

		
		
		const int k = 10;
		int m[k];

		for (int i = 0; i < k; i++)
		{
		a: m[i] = 1 + rand() % k;
			for (int j = 0; j < i; j++)
				if (m[j] == m[i]) goto a;
		}
		int v[k];

		for (int i = 0; i < k; i++)
		{
		b: v[i] = 1 + rand() % k;
			for (int j = 0; j < i; j++)
				if (v[j] == v[i]) goto b;
		}
		for (int i = 0; i < 10; i++) {
			p[i].idq(m[i]);
		}
		for (int i = 0; i < 10; i++) {
			h[i].idr(v[i]);
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (p[i].gid() == h[j].gidr()) {
					ph[i].tim (p[i], h[j], p[i].gid());
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			a.gplayerhero(ph[i],i);
		}
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@ raund 1" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		a.createteam();
		a.teminfo1();
		a.teaminfo2();
		cout << "team 1" << endl;
		a.team1first();
		cout << endl << endl;
		cout << "team 2" << endl;
		a.team2second();
		a.theend();

		const int t = 10;
		int g[t];

		for (int i = 0; i < t; i++)
		{
		w: g[i] = 1 + rand() % t;
			for (int j = 0; j < i; j++)
				if (g[j] == g[i]) goto w;
		}
		int o[t];

		for (int i = 0; i < t; i++)
		{
		q: o[i] = 1 + rand() % t;
			for (int j = 0; j < i; j++)
				if (o[j] == o[i]) goto q;
		}
		for (int i = 0; i < 10; i++) {
			p[i].idq(g[i]);
		}
		for (int i = 0; i < 10; i++) {
			h[i].idr(o[i]);
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (p[i].gid() == h[j].gidr()) {
					ph[i].tim(p[i], h[j], p[i].gid());
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			b.gplayerhero(ph[i], i);
		}

		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@ raund 2" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		b.createteam();
		b.teminfo1();
		b.teaminfo2();
		cout << "team 1" << endl;
		b.team1first();
		cout << endl << endl;
		cout << "team 2" << endl;
		b.team2second();
		b.theend();
		

		const int e = 10;
		int r[e];

		for (int i = 0; i < e; i++)
		{
		x: r[i] = 1 + rand() % e;
			for (int j = 0; j < i; j++)
				if (r[j] == r[i]) goto x;
		}
		int n[t];

		for (int i = 0; i < e; i++)
		{
		y: n[i] = 1 + rand() % e;
			for (int j = 0; j < i; j++)
				if (n[j] == n[i]) goto y;
		}
		for (int i = 0; i < 10; i++) {
			p[i].idq(r[i]);
		}
		for (int i = 0; i < 10; i++) {
			h[i].idr(n[i]);
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				if (p[i].gid() == h[j].gidr()) {
					ph[i].tim(p[i], h[j], p[i].gid());
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			c.gplayerhero(ph[i], i);
		}

		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "@ raund 3" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		c.createteam();
		c.teminfo1();
		c.teaminfo2();
		cout << "team 1" << endl;
		c.team1first();
		cout << endl << endl;
		cout << "team 2" << endl;
		c.team2second();
		c.theend();
		cout << endl << endl;
		cout << "won first raund " << endl;
		a.theend();
		cout << endl;
		cout << "won second raund " <<endl;
		b.theend();
		cout << endl;
		cout << "won three raund " <<endl;
		c.theend();
		cout << endl;
	
	}
