#include <iostream>

using namespace std;
class player {
private:
int  id, a;
string  name, rank, captain, general, mayor, prapor, leytenant, marshal, majorgeneral, polkovnuk, pidpolkovnuk, boets;

public:
void idq(int id) {
this->id = id;
}
void nameq() {
cout << type name payer---;
cin >> name;
cout << name:: << name << endl;
}
void rankq() {
cout << type rank payer---;
cin >> a;
int value = a;

switch (value) {
case 1:
rank = captain;
break;
case 2:
rank = general;
break;
case 3:
rank = mayor;
break;
case 4:
rank = prapor;
break;
case 5:
rank = leytenant;
break;
case 6:
rank = majorgeneral;
break;
case 7:
rank = marshal;
break;
case 8:
rank = polkovnuk;
break;
case 9:
rank = pidpolkovnuk;
break;
case 10:
rank = boets;
break;
}
cout << endl << endl;
}
void info() {
cout << id-- << id << endl << name-- << name << endl << rank-- << rank << endl;
}
};
class heroes {
private:
int id, hp, damage;
string name;
public:
void hero(int id, int hp, string name, int damage) {
this->id = id;
this ->hp = hp;
this->name = name;
this->damage = damage;

}
};


int main() {

player a, b, c, d, f, g, h, j, p, t;
heroes q, w, e, r, l, y, u, i, o, s;
a.idq(1);
a.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
a.rankq();
cout << player1 << endl;
a.info();
cout << endl << endl << endl;

b.idq(2);
b.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
b.rankq();
cout << player2 << endl;
b.info();
cout << endl << endl << endl;

c.idq(3);
c.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
c.rankq();
cout << player3 << endl;
c.info();
cout << endl << endl << endl;

d.idq(4);
d.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
d.rankq();
cout << player4 << endl;
d.info();
cout << endl << endl << endl;

f.idq(5);
f.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
f.rankq();
cout << player5 << endl;
f.info();
cout << endl << endl << endl;

g.idq(6);
g.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
g.rankq();
cout << player6 << endl;
g.info();
cout << endl << endl << endl;

h.idq(7);
h.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
h.rankq();
cout << player7 << endl;
h.info();
cout << endl << endl << endl;

j.idq(8);
j.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
j.rankq();
cout << player8 << endl;
j.info();
cout << endl << endl << endl;

p.idq(9);
p.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
p.rankq();
cout << player9 << endl;
p.info();
cout << endl << endl << endl;

t.idq(10);
t.nameq();
cout << 1-captain << endl << 2-general << endl << 3-mayor << endl << 4-prapor << endl << 5-leytenant << endl << 6-majorgeneral << endl << 7-marshal << endl << 8-polkovnuk << endl << 9-pidpolkovnuk << endl << 10-boets << endl;
t.rankq();
cout << player10 << endl;
t.info();


q.hero(1, 1000, varwar, 25);
w.hero(2, 390, gigant, 25);
e.hero(3, 800, rembo, 25);
r.hero(4, 450, rembo2, 25);
y.hero(5, 750, terminator, 25);
u.hero(6, 100, goblin, 25);
i.hero(7, 50, cat, 25);
o.hero(8, 999, robot, 25);
l.hero(9, 600, bull, 25);
s.hero(10, 500, demon, 25);

return 0;
}
