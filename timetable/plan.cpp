#include "plan.h"
#include "ui_plan.h"
#include<QComboBox>

plan::plan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::plan)
{
    ui->setupUi(this);
    setWindowTitle(tr("TableWidget"));//设置对话框的标题
        ui->qTableWidget->setColumnCount(3);//设置列数
        ui->qTableWidget->setRowCount(10);//设置行数
        ui->qTableWidget->setWindowTitle("QTableWidget");

        QStringList m_Header;
        m_Header<<QString("计划")<<QString("时间")<<QString("状态");
        ui->qTableWidget->setHorizontalHeaderLabels(m_Header);//添加横向表头
        ui->qTableWidget->verticalHeader()->setVisible(true);//纵向表头可视化
        ui->qTableWidget->horizontalHeader()->setVisible(true);//横向表头可视化

        //ui->tableWidget->setShowGrid(false);//隐藏栅格
//        ui->qTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//设置编辑方式：禁止编辑表格

        ui->qTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//设置表格选择方式：设置表格为整行选中
        //ui->qTableWidget->setSelectionBehavior(QAbstractItemView::SelectColumns);//设置表格选择方式：设置表格为整列选中
        ui->qTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);//选择目标方式
        ui->qTableWidget->setStyleSheet("selection-background-color:pink");//设置选中颜色：粉色
        ui->qTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



}

plan::~plan()
{
    delete ui;
}
