#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton7_clicked()
{
    ui->label->setText(ui->label->text()+"7");
}


void MainWindow::on_pushButton8_clicked()
{
 ui->label->setText(ui->label->text()+"8");
}


void MainWindow::on_pushButton9_clicked()
{
 ui->label->setText(ui->label->text()+"9");
}


void MainWindow::on_pushButton4_clicked()
{
   ui->label->setText(ui->label->text()+"4");
}


void MainWindow::on_pushButton_plus_clicked()
{
    ui->label->setText(ui->label->text()+"+");
}


void MainWindow::on_pushButton_paran1_clicked()
{
    ui->label->setText(ui->label->text()+"(");
}


void MainWindow::on_pushButton5_clicked()
{
    ui->label->setText(ui->label->text()+"5");
}


void MainWindow::on_pushButton6_clicked()
{
   ui->label->setText(ui->label->text()+"6");
}


void MainWindow::on_pushButton_minus_clicked()
{
    ui->label->setText(ui->label->text()+"-");
}


void MainWindow::on_pushButton_paran2_clicked()
{
    ui->label->setText(ui->label->text()+")");
}


void MainWindow::on_pushButton1_clicked()
{
    ui->label->setText(ui->label->text()+"1");
}


void MainWindow::on_pushButton2_clicked()
{
    ui->label->setText(ui->label->text()+"2");
}


void MainWindow::on_pushButton3_clicked()
{
    ui->label->setText(ui->label->text()+"3");
}


void MainWindow::on_pushButton_time_clicked()
{
    ui->label->setText(ui->label->text()+"*");
}


void MainWindow::on_pushButton_power_clicked()
{
    ui->label->setText(ui->label->text()+"^");
}


void MainWindow::on_pushButton0_clicked()
{
    ui->label->setText(ui->label->text()+"0");
}


void MainWindow::on_pushButton_dot_clicked()
{
    ui->label->setText(ui->label->text()+".");
}


void MainWindow::on_pushButton_div_clicked()
{
    ui->label->setText(ui->label->text()+"/");
}


void MainWindow::on_pushButton_ac_clicked()
{
    ui->label->setText("");
}


void MainWindow::on_pushButton_off_clicked()
{
    MainWindow::close();
}




#include<iostream>
#include<stack>
#include<queue>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
stack<string>S;
queue<string>Q;
char Precedent[256];

float Cal(string input)
{
    Precedent['^']=3;
    Precedent['*']=2;     Precedent['/']=2;
    Precedent['+']=1;     Precedent['-']=1;
   // string input="1+2+3*4+5*6";
    string token,token_op;
    unsigned int i;
    for(i=0;i<input.length();i++){
        if( (input[i]=='+') ||  (input[i]=='-') || (input[i]=='*') || (input[i]=='/') || (input[i]=='^') || (input[i]=='(') ||  (input[i]==')')){
            if(token.length()>0)Q.push(token);
            token_op=input[i];
            if( (input[i]=='(') || (input[i]==')')){
                if(input[i]=='('){S.push(token_op);}else{
                    while(S.top()[0] !='('){
                        Q.push(S.top());S.pop();
                    } S.pop();
                }
            }else{
                if(S.empty()){
                    S.push(token_op);
                }else if(Precedent[S.top()[0]] <= Precedent[input[i]]){
                    S.push(token_op);}
                else if(Precedent[S.top()[0]] == Precedent[input[i]]){
                    Q.push(S.top());S.pop();
                    Q.push(token_op);
                }else if(Precedent[S.top()[0]] > Precedent[input[i]]){
                    while(Precedent[S.top()[0]] >=Precedent[input[i]]){
                        Q.push(S.top());S.pop();
                        if(S.empty())break;
                    } S.push(token_op);
                }
            }
            token="";
        }else{
            token=token+input[i];
        }
    }
    Q.push(token);
    while(!S.empty()){
        Q.push(S.top());S.pop();
    }

   // cout<<"input:"<<input<<endl;  cout<<"Postfix: "<<endl; printQ(Q);
    //--------- EVALuation
    float a,b,c;
    while(!Q.empty()){
        if((Q.front()[0]=='+') || (Q.front()[0]=='-') ||(Q.front()[0]=='*') ||(Q.front()[0]=='/') ||(Q.front()[0]=='^')){
            b= atof( S.top().c_str()); S.pop();
            a= atof(S.top().c_str()); S.pop();
            if(Q.front()[0]=='+')c=a+b;
            if(Q.front()[0]=='-')c=a-b;
            if(Q.front()[0]=='*')c=a*b;
            if(Q.front()[0]=='/')c=a/b;
            if(Q.front()[0]=='^')c=pow(a,b);
            S.push(to_string(c));
        }else{
            S.push(Q.front());
        }
        Q.pop();
    }
    cout<<" Evaluation result:"<<S.top()<<endl;
    float ans= stof(S.top());
    S.pop();
    return ans;
}

void MainWindow::on_pushButton_exe_clicked()
{
    ui->label->setText( QString::fromStdString(to_string( Cal(ui->label->text().toStdString()))));
}
