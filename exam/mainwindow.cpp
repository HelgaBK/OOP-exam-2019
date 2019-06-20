#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    books.push_back(Book(ui->comboBox->currentText(),
                         ui->lineEdit_2->text(),
                         ui->spinBox->value(),
                         ui->lineEdit->text()));
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(books.size());
    ui->tableWidget->setColumnCount(COLUMNS);
    ui->tableWidget->setHorizontalHeaderLabels({"Назва", "Автор", "Рік", "Жанр"});
    for (auto i = 0; i < books.size(); i++) {
              ui->tableWidget->setItem(i, 0, new QTableWidgetItem(books[i].getName()));
              ui->tableWidget->setItem(i, 1, new QTableWidgetItem(books[i].getAuthor()));
              ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(books[i].getYear())));
              ui->tableWidget->setItem(i, 3, new QTableWidgetItem(books[i].getGenre()));
    }
    ui->tableWidget->horizontalHeader()->resizeSections(QHeaderView::Stretch);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString name[] = {"Повість минулих літ", "Місто", "Кобзар", "Корона", "Чорна рада"};
    QString author[] = {"Шевченко", "Франко", "Орвелл", "Коцюбинський", "Ван"};
    QString genre[] = {"Комедія", "Трагедія", "Новела", "Повість", "Роман", "Драма"};
    int count = ui->spinBox_2->value();
    for (int i = 0; i < count; ++i) {
        books.push_back(Book(name[rand() % 5],
                            author[rand() % 5],
                            1900 + rand() % (2020 - 1900),
                            genre[rand() % 6]));
    }
}
