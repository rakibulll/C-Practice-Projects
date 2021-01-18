#include<stdio.h>

int chc, sum_of_order, s;
int quantity1, quantity2, quantity3, quantity4, quantity5, o, i, quantity10, quantity11, quantity12, quantity13, quantity14, quantity15;
int pizza, chicken, shawarma, pasta, wedges, qpizza, qchicken, qshawarma, qpasta, qwedges, qnachos, qwings, qlasagna, qchowmein;
int pizza1, chicken1, shawarma1, pasta1, wedges1, espresso, cappuccino, americano, oreo, strawberry, chocomilk;
int qhcoffee, qcappuccino, qamericano, qoreo, qstrawberry, qchocomilk, espresso1, cappuccino1, americano1, oreo1, strawberry1, chocomilk1;

char s1[] = "Pizza\t\t\t\t 200 Taka";
char s2[] = "Chicken Sandwich\t\t  50 Taka";
char s3[] = "Shawarma\t\t\t 100 Taka";
char s4[] = "Pasta\t\t\t\t 100 Taka";
char s5[] = "Wedges\t\t\t\t  40 Taka";

char b1[] = "Espresso\t\t\t  30 Taka";
char b2[] = "Cappuccino \t\t\t  50 Taka";
char b3[] = "Americano\t\t\t  20 Taka";
char b4[] = "Oreo Crush Shake\t\t 100 Taka";
char b5[] = "Strawberry Shake\t\t 130 Taka";
char b6[] = "Chocolate Milk Shake\t\t 150 Taka";
char ch = 'y', r;

int sum();
void opening();
void order();
void payment();
void desire();
void more_desire();
void cash();
void credit();
void list();
void menu1();
void menu2();

struct cust {
  char fname[50];
  char lname[50];
  char add[100];
  int mob[14];
  int crno[16];
}
q;

void main() {

  void opening();
  opening();
  pizza1 = chicken1 = shawarma1 = pasta1 = wedges1 = 0;
  espresso1 = cappuccino1 = americano1 = oreo1 = strawberry1 = chocomilk1 = 0;

  printf("\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
  printf("\t\t\t\t\t\t\t\t\t     CC         A A          \n");
  printf("\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
  printf("\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
  printf("\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
  printf("\t\t\t\t\t\t\t\t\t\t Cafe Arius\n");
  printf("\t\t\t\t\t\t\t\t\t         SINCE 2018\n\n\n");

  printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
  printf("\t\t\t\t\t\t\t_______________________ FOOD MENU _______________________\n\n");
  printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t    Price\n\n");
  printf("\t\t\t\t\t\t\t01\t\t");
  for (i = 0; s1[i]; i++)
    printf("%c", s1[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t02\t\t");
  for (i = 0; s2[i]; i++)
    printf("%c", s2[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t03\t\t");
  for (i = 0; s3[i]; i++)
    printf("%c", s3[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t04\t\t");
  for (i = 0; s4[i]; i++)
    printf("%c", s4[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t05\t\t");
  for (i = 0; s5[i]; i++)
    printf("%c", s5[i]);
  printf("\n");

  printf("\n");
  printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
  printf("\t\t\t\t\t\t\t_______________________ BEVARAGES _______________________\n\n");
  printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t    Price\n\n");
  printf("\t\t\t\t\t\t\t06\t\t");
  for (i = 0; b1[i]; i++)
    printf("%c", b1[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t07\t\t");
  for (i = 0; b2[i]; i++)
    printf("%c", b2[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t08\t\t");
  for (i = 0; b3[i]; i++)
    printf("%c", b3[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t09\t\t");
  for (i = 0; b4[i]; i++)
    printf("%c", b4[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t10\t\t");
  for (i = 0; b5[i]; i++)
    printf("%c", b5[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t11\t\t");
  for (i = 0; b6[i]; i++)
    printf("%c", b6[i]);
  printf("\n");
  printf("\n\t\t\t\t\t\t\tIf you want to order then please press 1.\n\t\t\t\t\t\t\tTo cancel please press 0\n\t\t\t\t\t\t\t ");
  desire();
  sum_of_order = sum();
  list();

}

void order() {
  printf("\t\t\t\t\t\t\tPlease input your item's code:  ");
  scanf("%d", & o);
  fflush(stdin);
  switch (o) {
  case 1:
    printf("\t\t\t\t\t\t\tHow many Pizzas do you desire?");
    scanf("%d", & quantity1);
    pizza = (200 * quantity1) + pizza;
    printf("\t\t\t\t\t\t\t%d Pizza(s) has been added to the list", quantity1);
    pizza1 = 1;
    qpizza = qpizza + quantity1;
    break;
  case 2:
    printf("\t\t\t\t\t\t\tHow many Chicken Sandwiches do you desire?");
    scanf("%d", & quantity2);
    chicken = (50 * quantity2) + chicken;
    printf("\t\t\t\t\t\t\t%d Chicken Sandwiche(s) has been added to the list", quantity2);
    chicken1 = 1;
    qchicken = qchicken + quantity2;
    break;
  case 3:
    printf("\t\t\t\t\t\t\tHow many Shawarmas do you desire?");
    scanf("%d", & quantity3);
    shawarma = (100 * quantity3);
    printf("\t\t\t\t\t\t\t%d Shawarma(s) has been added to the list", quantity3);
    shawarma1 = 1;
    qshawarma = qshawarma + quantity3;
    break;
  case 4:
    printf("\t\t\t\t\t\t\tHow many servings of Pastas do you desire?");
    scanf("%d", & quantity4);
    pasta = (100 * quantity4) + pasta;
    printf("\t\t\t\t\t\t\t%d servings of Pastas has been added to the list", quantity4);
    pasta1 = 1;
    qpasta = qpasta + quantity4;
    break;
  case 5:
    printf("\t\t\t\t\t\t\tHow many servings of Wedges do you desire?");
    scanf("%d", & quantity5);
    wedges = (40 * quantity5) + wedges;
    printf("\t\t\t\t\t\t\t%d servings Wedges has been added to the list", quantity5);
    wedges1 = 1;
    qwedges = qwedges + quantity5;
    break;

  case 6:
    printf("\t\t\t\t\t\t\tHow many servings of Hot coffee do you desire?");
    scanf("%d", & quantity10);
    espresso = (30 * quantity10) + espresso;
    printf("\t\t\t\t\t\t\t%d servings of Espresso has been added to the list", quantity10);
    espresso1 = 1;
    qhcoffee = qhcoffee + quantity10;
    break;
  case 7:
    printf("\t\t\t\t\t\t\tHow many servings of Cappuccino do you desire?");
    scanf("%d", & quantity11);
    cappuccino = (50 * quantity11) + cappuccino;
    printf("\t\t\t\t\t\t\t%d servings of Cold Coffee has been added to the list", quantity11);
    cappuccino1 = 1;
    qcappuccino = qcappuccino + quantity11;
    break;
  case 8:
    printf("\t\t\t\t\t\t\tHow many servings of Americano do you desire?");
    scanf("%d", & quantity12);
    americano = (20 * quantity12) + americano;
    printf("\t\t\t\t\t\t\t%d Servings of Americano has been added to the list", quantity12);
    americano1 = 1;
    qamericano = qamericano + quantity12;
    break;
  case 9:
    printf("\t\t\t\t\t\t\tHow many servings of Oreo Crush Shake do you desire?");
    scanf("%d", & quantity13);
    oreo = (100 * quantity13) + oreo;
    printf("\t\t\t\t\t\t\t%d servings of Oreo Crush Shake has been added to the list", quantity13);
    oreo1 = 1;
    qoreo = qoreo + quantity13;
    break;
  case 10:
    printf("\t\t\t\t\t\t\tHow many servings of Strawberry Milk Shake do you desire?");
    scanf("%d", & quantity14);
    strawberry = (130 * quantity14) + strawberry;
    printf("\t\t\t\t\t\t\t%d servings of Strawberry Milk Shake has been added to the list", quantity14);
    strawberry1 = 1;
    qstrawberry = qstrawberry + quantity14;
    break;
  case 11:
    printf("\t\t\t\t\t\t\tHow many servings of Chocolate Milk Shake do you desire?");
    scanf("%d", & quantity15);
    chocomilk = (150 * quantity15) + chocomilk;
    printf("\t\t\t\t\t\t\t%d servings of Chocolate Milk Shake has been added to the list", quantity15);
    chocomilk1 = 1;
    qchocomilk = qchocomilk + quantity15;
    break;
  default:
    printf("\n\t\t\t\t\t\t\tYou pressed the wrong button.\n\n");
    printf("\t\t\t\t\t\t\tTry again.");
    order();
  }
}

void payment() {
  printf("\n\t\t\t\t\t\t\tGot it.\n");
  printf("\t\t\t\t\t\t\tHow would you like to quench your orders?\n\t\t\t\t\t\t\tCash Or by Credit Card?\n");
  printf("\t\t\t\t\t\t\tFor Cash payment, Type 'M'\n");
  printf("\t\t\t\t\t\t\tFor Credit Card payment, Type 'C':  ");

  char r;
  fflush(stdin);
  scanf("%c", & r);

  if (r == 'm' || r == 'M') {
    cash();
  } else if (r == 'c' || r == 'C') {
    credit();
  } else {
    printf("\n\t\t\t\t\t\t\tYou pressed the wrong button.\n\n");
    printf("\t\t\t\t\t\t\tTry again.");
    payment();
  }
}

void desire(int q) {
  scanf("%d", & chc);
  fflush(stdin);
  switch (chc) {
  case 1:
    order();
    more_desire();
    break;
  case 0:
    exit(0);
  default:
    printf("\n\t\t\t\t\t\t\tWRONG CHOICE!\n\n");
    printf("\t\t\t\t\t\t\tTry again.");
    printf("\n\t\t\t\t\t\t\tIf you want to order then please press 1.\n\t\t\t\t\t\t\tTo cancel please press 0\n\t\t\t\t\t\t\t ");
    desire(chc);
  }

}

void more_desire() {
  printf("\n\t\t\t\t\t\t\tDo you have the desire for more(Y/N)?");
  fflush(stdin);
  scanf("%c", & ch);
  if (ch == 'y' || ch == 'Y') {
    system("cls");
    menu2();
    order();
    more_desire();
  } else if (ch == 'n' || ch == 'N') {
    system("cls");
    menu1();
    payment();
  } else {
    printf("\n\t\t\t\t\t\t\tYou pressed the wrong button.\n\n");
    printf("\t\t\t\t\t\t\tTry again.");
    more_desire();
  }
}

void cash() {
  printf("\n\t\t\t\t\t\t\tCongratulations, You have chosen cash on delivery.\n");
  printf("\t\t\t\t\t\t\tPlease input your name, address\n\t\t\t\t\t\t\tand mobile no. below.\n");
  printf("\n\t\t\t\t\t\t\tFirst name please: ");
  fflush(stdin);
  scanf("%s", & q.fname);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tLast name please: ");
  scanf("%s", & q.lname);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tAddress please: ");
  scanf("%s", & q.add);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tMobile Number please: ");
  scanf("%d", & q.mob);
}

void credit() {
  printf("\n\t\t\t\t\t\t\tCongratulations, You have Chosen Credit Card Payment.\n");
  printf("\t\t\t\t\t\t\tPlease input your name, address, mobile number and \n\t\t\t\t\t\t\tcredit card number below.\n");
  printf("\n\t\t\t\t\t\t\tFirst name please: ");
  fflush(stdin);
  scanf("%s", & q.fname);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tLast name please: ");
  scanf("%s", & q.lname);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tAddress please: ");
  scanf("%s", & q.add);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tMobile Number please: ");
  scanf("%d", & q.mob);
  fflush(stdin);
  printf("\t\t\t\t\t\t\tCredit card number please: ");
  scanf("%d", & q.crno);

}

int sum() {
  s = pizza + chicken + shawarma + pasta + wedges + espresso + cappuccino + americano + oreo + strawberry + chocomilk;
  return s;
}

void list() {
  system("cls");
  printf("\n\t\t\t\t\t\t\t  Thank you for your desired purchase %s. We hope you enjoy it.\n\t\t\t\t\t\t\t\t Your order will be delivered to you shortly.", q.lname);
  printf("\n\t\t\t\t\t\t\t\t     Visit us again whenever you want.\n");
  printf("\t\t\t\t\t\t\t\t    Your detailed bill is presented below.\n\n");
  printf("\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
  printf("\t\t\t\t\t\t\t\t\t     CC         A A          \n");
  printf("\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
  printf("\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
  printf("\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
  printf("\t\t\t\t\t\t\t\t\tCafe Arius\n");
  printf("\t\t\t\t\t\t\t\t\t\t       SINCE 2018\n\n\n");

  printf("\t\t\t\t\t\t_______________________________                 ________________________________\n");
  printf("\t\t\t\t\t\t_______________________________ Bill of Desires ________________________________\n\n");
  printf("\t\t\t\t\t\tItem name\t\t\t Item price\t\tQuantity\tAmount\n\n");

  FILE * fp;
  fp = fopen("Bill.txt", "w");

  fprintf(fp, "\n\t\t\t\t\t\t\t  Thank you for your desired purchase %s. We hope you enjoy it.\n\t\t\t\t\t\t\t\t Your order will be delivered to you shortly.", q.lname);
  fprintf(fp, "\n\t\t\t\t\t\t\t\t     Visit us again whenever you want.\n");
  fprintf(fp, "\t\t\t\t\t\t\t\t    Your detailed bill is presented below.\n\n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t     CC         A A          \n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t\t Cafe Arius\n");
  fprintf(fp, "\t\t\t\t\t\t\t\t\t         SINCE 2018\n\n\n");
  fprintf(fp, "\t\t\t\t\t\t_______________________________                 ________________________________\n");
  fprintf(fp, "\t\t\t\t\t\t_______________________________ Bill of Desires ________________________________\n\n");
  fprintf(fp, "\t\t\t\t\t\tItem name\t\t\t Item price\t\tQuantity\tAmount\n\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", s1);
  fprintf(fp, "\t\t%d\t\t%d Taka", qpizza, pizza);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", s2);
  fprintf(fp, "\t\t%d\t\t%d Taka", qchicken, chicken);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", s3);
  fprintf(fp, "\t\t%d\t\t%d Taka", qshawarma, shawarma);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", s4);
  fprintf(fp, "\t\t%d\t\t%d Taka", qpasta, pasta);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", s5);
  fprintf(fp, "\t\t%d\t\t%d Taka", qwedges, wedges);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b1);
  fprintf(fp, "\t\t%d\t\t%d Taka", qhcoffee, espresso1);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b2);
  fprintf(fp, "\t\t%d\t\t%d Taka", qcappuccino, cappuccino);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b3);
  fprintf(fp, "\t\t%d\t\t%d Taka", qamericano, americano);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b4);
  fprintf(fp, "\t\t%d\t\t%d Taka", qoreo, oreo);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b5);
  fprintf(fp, "\t\t%d\t\t%d Taka", qstrawberry, strawberry);
  fprintf(fp, "\n");

  fprintf(fp, "\t\t\t\t\t\t");
  fprintf(fp, "%s", b6);
  fprintf(fp, "\t\t%d\t\t%d Taka", qchocomilk, chocomilk);
  fprintf(fp, "\n");

  fprintf(fp, "\n\t\t\t\t\t\tSub Total= %d Taka", s);
  fprintf(fp, "\n\t\t\t\t\t\tOnce again, thank you for desiring us to quench your desires.");
  fclose(fp);

  while (pizza1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", s1);
    printf("\t\t%d\t\t%d Taka", qpizza, pizza);
    printf("\n");

    break;
  }
  while (chicken1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", s2);
    printf("\t\t%d\t\t%d Taka", qchicken, chicken);
    printf("\n");
    break;
  }
  while (shawarma1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", s3);
    printf("\t\t%d\t\t%d Taka", qshawarma, shawarma);
    printf("\n");
    break;
  }
  while (pasta1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", s4);
    printf("\t\t%d\t\t%d Taka", qpasta, pasta);
    printf("\n");
    break;
  }
  while (wedges1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", s5);
    printf("\t\t%d\t\t%d Taka", qwedges, wedges);
    printf("\n");
    break;

  }
  while (espresso1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b1);
    printf("\t\t%d\t\t%d Taka", qhcoffee, espresso1);
    printf("\n");
    break;
  }
  while (cappuccino1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b2);
    printf("\t\t%d\t\t%d Taka", qcappuccino, cappuccino);
    printf("\n");
    break;
  }
  while (americano1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b3);
    printf("\t\t%d\t\t%d Taka", qamericano, americano);
    printf("\n");
    break;
  }
  while (oreo1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b4);
    printf("\t\t%d\t\t%d Taka", qoreo, oreo);
    printf("\n");
    break;
  }
  while (strawberry1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b5);
    printf("\t\t%d\t\t%d Taka", qstrawberry, strawberry);
    printf("\n");
    break;
  }
  while (chocomilk1 == 1) {
    printf("\t\t\t\t\t\t");
    printf("%s", b6);
    printf("\t\t%d\t\t%d Taka", qchocomilk, chocomilk);
    printf("\n");
    break;
  }
  printf("\n\t\t\t\t\t\tSub Total= %d Taka", s);
  printf("\n\t\t\t\t\t\tOnce again, thank you for desiring us to quench your desires.");

}
void menu1() {
  printf("\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
  printf("\t\t\t\t\t\t\t\t\t     CC         A A          \n");
  printf("\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
  printf("\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
  printf("\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
  printf("\t\t\t\t\t\t\t\t\tCafe Arius\n");
  printf("\t\t\t\t\t\t\t\t\t\t       SINCE 2018\n\n\n");

}
void menu2() {
  printf("\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
  printf("\t\t\t\t\t\t\t\t\t     CC         A A          \n");
  printf("\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
  printf("\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
  printf("\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
  printf("\t\t\t\t\t\t\t\t\tCafe Arius\n");
  printf("\t\t\t\t\t\t\t\t\t\t       SINCE 2018\n\n\n");

  printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
  printf("\t\t\t\t\t\t\t_______________________ FOOD MENU _______________________\n\n");
  printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
  printf("\t\t\t\t\t\t\t01\t\t");
  for (i = 0; s1[i]; i++) {
    printf("%c", s1[i]);
  }
  printf("\n");
  printf("\t\t\t\t\t\t\t02\t\t");
  for (i = 0; s2[i]; i++)
    printf("%c", s2[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t03\t\t");
  for (i = 0; s3[i]; i++)
    printf("%c", s3[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t04\t\t");
  for (i = 0; s4[i]; i++)
    printf("%c", s4[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t05\t\t");
  for (i = 0; s5[i]; i++)
    printf("%c", s5[i]);
  printf("\n");

  printf("\n");
  printf("\n");
  printf("\t\t\t\t\t\t\t_______________________           _______________________\n");
  printf("\t\t\t\t\t\t\t_______________________ BEVARAGES _______________________\n\n");
  printf("\t\t\t\t\t\t\tItem Code\tItem Name\t\t\t\t Price\n\n");
  printf("\t\t\t\t\t\t\t06\t\t");
  for (i = 0; b1[i]; i++)
    printf("%c", b1[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t07\t\t");
  for (i = 0; b2[i]; i++)
    printf("%c", b2[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t08\t\t");
  for (i = 0; b3[i]; i++)
    printf("%c", b3[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t09\t\t");
  for (i = 0; b4[i]; i++)
    printf("%c", b4[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t10\t\t");
  for (i = 0; b5[i]; i++)
    printf("%c", b5[i]);
  printf("\n");
  printf("\t\t\t\t\t\t\t11\t\t");
  for (i = 0; b6[i]; i++)
    printf("%c", b6[i]);
  printf("\n");

}

void opening() {

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t\t                                                                     \n");
  printf("\t\t\t\t\t\t      #####    ##   ###### ######      ##   #####  ##: #:   #  ####  \n");
  printf("\t\t\t\t\t\t     #:::::#  #::#  #::::# #::::#     #::#  #::: # ##: #:   # #::::# \n");
  printf("\t\t\t\t\t\t     #:      #::  # #:     ######    #::  # #::: # ##: #:   # #      \n");
  printf("\t\t\t\t\t\t     #:      ###### #####  ##        ###### #####  ##: #:   #  ####  \n");
  printf("\t\t\t\t\t\t     #:      #:   # #::::  ######    #:   # #::#   ##: #:   #      # \n");
  printf("\t\t\t\t\t\t     #:::::# #:   # #:     ##        #:   # #: :#  ##: #::::# #::::# \n");
  printf("\t\t\t\t\t\t      #####  #:   # #:     ######    #:   # #:  :# ##: ######  ####  \n");

  printf("\n\n\n\n\n\n\n\n");
  printf("\t\t\t\t\t\t\t              Press any key to enter!  ");

  getch();

  system("cls");

  int a = 0, i = 0;
  char uname[10], c = ' ';
  char pword[10], code[10];
  char user[10] = "user";
  char pass[10] = "pass";

  do {

    printf("\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t       CCCCC     A           \n");
    printf("\t\t\t\t\t\t\t\t\t     CC         A A          \n");
    printf("\t\t\t\t\t\t\t\t\t     CC        A   A         \n");
    printf("\t\t\t\t\t\t\t\t\t     CC       AAAAAAA        \n");
    printf("\t\t\t\t\t\t\t\t\t       CCCCC A       A     \n\n");
    printf("\t\t\t\t\t\t\t\t\t       Cafe Arius\n");
    printf("\t\t\t\t\t\t\t\t\t       SINCE 2018\n\n\n");
    printf("\n\n  \t\t\t\t\t++++++++++++++++++++++++++++++  LOGIN TO ADMIN ACCOUNT  ++++++++++++++++++++++++++++++  ");
    printf(" \n\n");
    printf("\t\t\t\t\t\t\t\t\tENTER USERNAME: ");
    scanf("%s", & uname);
    printf("\t\t\t\t\t\t\t\t\tENTER PASSWORD: ");
    while (i < 10) {
      pword[i] = getch();
      c = pword[i];
      if (c == 13) break;
      else printf("*");
      i++;
    }
    pword[i] = '\0';

    i = 0;

    if (strcmp(uname, "user") == 0 && strcmp(pword, "pass") == 0) {
      printf("  \n\n\n  \t\t\t\t\t\t\t\t\t     WELCOME\n\t\t\t\t\t\t\t                LOGIN IS SUCCESSFUL");
      printf("\n\n\n\t\t\t\t\t\t\t\t     Press any key to continue!");
      getch();
      break;
    } else {
      printf("  \n\n\n  \t\t\t\t\t\t\t\t     SORRY !!!!  LOGIN IS UNSUCESSFUL");
      a++;
      printf("\n\n\n\t\t\t\t\t\t\t\t\t\tEnter any key to try again........ ");
      getch();
      system("cls");

    }
  }

  while (a <= 2);
  if (a > 2) {
    printf("\nSorry you have entered the wrong username and password for four times!!!");

    getch();

  }
  system("cls");

}
