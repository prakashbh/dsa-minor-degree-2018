#include<stdio.h>

struct page
{
  int no_of_chars;
  int length;
  int width;
  char header[20];
  char footer[20];
};

struct total_pages
{
    int count;
    struct page p[300];
};

struct cover
{
  char title[30];
  char author[30];
  int edition;
};

struct publisher
{
  char name[30];
  char year[30];
};

struct book
{
    struct total_pages tp;
    struct cover c;
    struct publisher pb;
    float price;
};

    struct book b1;
    struct book *b2;
    b2 = (struct book *) malloc(sizeof(struct book));

    /// To access price of the book:


    /// To access publisher name:


    /// To access book title


    /// To access total page count


    /// To access number of characters in 10th page
    /// Page number starts from 1
