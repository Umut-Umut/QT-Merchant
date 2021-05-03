#pragma once

#include <QPushButton>
#include <string>

class market_item {
public:
	const char* name_const;
	QString name;
	QListWidgetItem* item;
	QPushButton* button_buy;
	QPushButton* button_sell;
	int* price_buy;
	int* price_sell;
	int* amount;
	
        market_item(const char* name_="", int price_buy_=0, int price_sell_=0, int amount_=0) {
            price_buy   = new int(price_buy_);
            price_sell  = new int(price_sell_);
            amount 	= new int(amount_);
            name 	= name_;
            name_const	= name_;
        }
private:
};
