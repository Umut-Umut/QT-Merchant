#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "market.h"

#define buy 1
#define sell 0

// items
market_item clay("Clay", 10, 8);
market_item wood("Wood", 10, 8);
market_item tea("Tea", 10, 8);

QVector<market_item> market_items;

QString to_string(int num) {
    return QString::number(num);
}

// COIN UPDATE
int* coin = new int(100);
QString coin_text = "Coin: ";
int check_buy_sell(market_item item, int state) {
    if (state) {
        if (*coin >= *item.price_buy) {
            *item.amount += 1;
            return 1;
        }
    }
    else if (state == 0) {
        if (*item.amount > 0) {
            *item.amount -= 1;
            return 1;
        }
    }

    return 0;
}

void update_coin(QLabel* label, market_item item, int state=0) {
    coin_text.clear();
    coin_text = "Coin: ";

    if (state) {
        if (check_buy_sell(item, state)) {
            *coin -= *item.price_buy;
        }
    }
    else if (state == 0) {
        if (check_buy_sell(item, state)) *coin += *item.price_sell;
    }

    coin_text.append(to_string(*coin));
    label->setText(coin_text);

    for (market_item& i: market_items) {
        i.button_buy->setText(to_string(*(i.price_buy)));
        i.button_sell->setText(to_string(*(i.price_sell)));
    }
}

void update_coin(QLabel* label) {
    coin_text.clear();
    coin_text = "Coin: ";

    coin_text.append(to_string(*coin));
    label->setText(coin_text);

    // Update buy and sell button text
    for (market_item& i: market_items) {
        i.button_buy->setText(to_string(*(i.price_buy)));
        i.button_sell->setText(to_string(*(i.price_sell)));
    }
}

QString list_item_text;
int* count = new int(0);
void update_inventory(market_item item) {
    // Listeyi düzenleyecek. Aldığım itemlerin adetine 1, sattıklarıma -1 ekleyecek
    list_item_text.clear();
    list_item_text = item.name;

    list_item_text.append(" =");
    list_item_text.append(to_string(*item.amount));

    item.item->setText(list_item_text);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set first items
    clay.item = new QListWidgetItem(tr(clay.name_const), ui->listWidget);
    wood.item = new QListWidgetItem(tr(wood.name_const), ui->listWidget);
    tea.item  = new QListWidgetItem(tr(tea.name_const), ui->listWidget);

    clay.button_buy = ui->pushButton_1;
    clay.button_sell = ui->pushButton_4;
    wood.button_buy = ui->pushButton_2;
    wood.button_sell = ui->pushButton_5;
    tea.button_buy = ui->pushButton_3;
    tea.button_sell = ui->pushButton_6;

    market_items.append(clay);
    market_items.append(wood);
    market_items.append(tea);

    // Set Coin
    update_coin(ui->coin_label);

    // Inventory titles
    for (market_item i: market_items) {
        update_inventory(i);
    }

    ui->coin_label->setText(QString("Bu bir umut %1 %2 %3 %4 %5 %6 %7 %8 %9 %10 %11 %12").arg("aa", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin", "Denendin"));

    connect(this, SIGNAL(signal_market(market_item,int)), this, SLOT(slot_market(market_item,int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slot_market(market_item item, int state) {
    if (state) {
        update_coin(ui->coin_label, item, state);
    }
    else if (state == 0) {
        update_coin(ui->coin_label, item, state);
    }

    update_inventory(item);
}

void MainWindow::on_pushButton_1_clicked()
{
    emit signal_market(clay, buy);
}
void MainWindow::on_pushButton_2_clicked()
{
    emit signal_market(wood, buy);
}
void MainWindow::on_pushButton_3_clicked()
{
    emit signal_market(tea, buy);
}
void MainWindow::on_pushButton_4_clicked()
{
    emit signal_market(clay, sell);
}
void MainWindow::on_pushButton_5_clicked()
{
    emit signal_market(wood, sell);
}
void MainWindow::on_pushButton_6_clicked()
{
    emit signal_market(tea, sell);
}
