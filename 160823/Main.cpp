#include<iostream>
#include<set>
#include<iterator>
#include<ctime>


class Cards {
public:
	int numbersOfCards = 36;
	std::set<int> sCards;
	
	void showCards() {
		srand(time(NULL));
		while(sCards.size() != 36)
			sCards.emplace(rand()%37);
	}
};

class Logic {
public:

};

class Plaer {
public:

};

class Distribute:public Cards {
public:
	void distr() {
		Cards tmp;
		tmp.sCards;
		tmp.showCards();
		std::set<int> plaer;
		for (int i = 0; i < 6; ++i) {
			plaer.emplace(*(sCards.begin()));
			tmp.sCards.erase(sCards.begin());
			std::cout << *(plaer.begin());
			if (sCards.empty())
				return;
		}
	}
};

int main() {
	/*Cards card;
	card.showCards();
	Distribute dis;
	dis.distr();
	for (auto it = dis.sCards.begin(); it != dis.sCards.end(); ++it)
		std::cout << *it << std::endl;
*/
	Distribute dis;
	dis.distr();
	return 0;
}