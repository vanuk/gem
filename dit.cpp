#include <iostream>

using namespace std;
class player {
private:
int  id, a, c, ball, bal;
string  name, rank, captain, general, mayor, prapor, leytenant, marshal, majorgeneral, polkovnuk, pidpolkovnuk, boets;

public:
void idq(int id) {
this->id = id;
}
void nameq() {
cout << type name player---;
cin >> name;
cout << name:: << name << endl;
}
void rankq() {
cout << type ball player---;

cin >> bal;
switch (bal) {
case 1:
ball = 0;
if (ball <= 0) {
rank = boets;
cout << rank:: << rank << endl;
}
break;
case 2:
ball = 25;
if (ball == 25) {
rank = leytenant;
cout << rank:: << rank << endl;
}
break;
case 3:
ball = 50;
if (ball == 50) {
rank = captain;
cout << rank:: << rank << endl;
}
break;
case 4:
ball = 75;
if (ball == 75) {
rank = polkovnik;
cout << rank:: << rank << endl;
}
break;
case 5:
ball = 100;
if (ball >= 100) {
rank = general;
cout << rank:: << rank << endl;
}
break;
}
}
void info() {
cout << ******************** << endl;
cout << * id-- << id << endl << * name-- << name << endl << * rank-- << rank << endl;
cout << ******************** << endl;
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
void infoh() {
cout << ********************* << endl;
cout << * id hero-- << id << endl << * hp hero-- << hp << endl << * name hero-- << name << endl << * damage hero-- << damage << endl;
cout << ********************* << endl;
}
};


int main() {

player a, b, c, d, f, g, h, j, p, t;
heroes q, w, e, r, l, y, u, i, o, s;
a.idq(1);
a.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
a.rankq();
cout << player1 << endl;
a.info();
cout << endl << endl << endl;

b.idq(2);
b.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
b.rankq();
cout << player2 << endl;
b.info();
cout << endl << endl << endl;

c.idq(3);
c.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
c.rankq();
cout << player3 << endl;
c.info();
cout << endl << endl << endl;

d.idq(4);
d.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
d.rankq();
cout << player4 << endl;
d.info();
cout << endl << endl << endl;

f.idq(5);
f.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
f.rankq();
cout << player5 << endl;
f.info();
cout << endl << endl << endl;

g.idq(6);
g.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
g.rankq();
cout << player6 << endl;
g.info();
cout << endl << endl << endl;

h.idq(7);
h.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
h.rankq();
cout << player7 << endl;
h.info();
cout << endl << endl << endl;

j.idq(8);
j.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
j.rankq();
cout << player8 << endl;
j.info();
cout << endl << endl << endl;

p.idq(9);
p.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
p.rankq();
cout << player9 << endl;
p.info();
cout << endl << endl << endl;

t.idq(10);
t.nameq();
cout << ***************** << endl;
cout << * please type number << endl << * 1. boets have 0 ball << endl << * 2.leytenant have 25 ball << endl << * 3.captain have 50 ball << endl << * 4.polkovnic have 75 ball << endl << * 5.general have 100 ball << endl;
cout << ***************** << endl;
t.rankq();
cout << player10 << endl;
t.info();
cout << endl << endl;

q.hero(1, 1000, varwar, 25);
q.infoh();
cout << endl;
w.hero(2, 390, gigant, 25);
w.infoh();
cout << endl;
e.hero(3, 800, rembo, 25);
e.infoh();
cout << endl;
r.hero(4, 450, rembo2, 25);
r.infoh();
cout << endl;
y.hero(5, 750, terminator, 25);
y.infoh();
cout << endl;
u.hero(6, 100, goblin, 25);
u.infoh();
cout << endl;
i.hero(7, 50, cat, 25);
i.infoh();
cout << endl;
o.hero(8, 999, robot, 25);
o.infoh();
cout << endl;
l.hero(9, 600, bull, 25);
l.infoh();
cout << endl;
s.hero(10, 500, demon, 25);
s.infoh();
cout << endl;

const int id = 5;
int m[id];

for (int i = 0; i < id; i++)
{
a: m[i] = 1 + rand() % id;
for (int j = 0; j < i; j++)
if (m[j] == m[i]) goto a;
}
for (int i = 0; i < id; i++)
cout << m[i] <<  ;

return 0;
}
