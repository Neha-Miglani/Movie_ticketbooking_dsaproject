#ifndef PROJECT_H
#define PROJECT_H
#include<iostream>
using namespace std;

struct T_icket
{
    int SrNo;
    string movie;
    string name;
    string mobNo;
    int slot;
    int pincode;
    int sbp[4],sbg[4];
     T_icket *next=NULL;
};

struct node{
   int key;
   struct node *left, *right;
};
struct theatre
{
    char arr[9][11];
    int Arr[10];
    int m_ovie;
    int s_lot;
    theatre *next;
};

class Movie
{

    public:
        T_icket *h=NULL;
        theatre *head=NULL;
        int  g,tn=11;
        int a,b,x0,x1,x2,x3,x4;
        int row[4],G[4], col[4];
        int ar;
        void home();
        int disp();
        int ticket();
        void ad();
        void price();
        void show();
        void print_time();
        void seat_matrix(int x1,int x2,int ar,int x0);
        void insertticket(int sn,string m,string n,string mn,int s,int p,int sbp_d[4],int sbg_d[4]);
};

class Ticket : public Movie
{

public:
    string l,mbno;
    int timings();
    int membership(int total);
    int num_ticket();
    int seat();
    int total_cost(int x1, int x2);
    int area();
    void details();
    void display(int x1,int x4,int a,int x0,int ar,int x2, int row[4], int col[4], int G[4],int g);
};

class String
{
public:
    node* binarytree(node* root,int key);
    node* newNode(int item);
    node* insert(node* node,int key);
    void traversetree(node *root);
};

#endif // PROJECT_H
