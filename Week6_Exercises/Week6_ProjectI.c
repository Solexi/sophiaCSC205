#include <stdio.h>

int main()
{
     int p, f, a, e, w, c, ew, eb, eg, r, s;
     const int P=1, F=2, A=3, E=4, W=5;
     int priceP, priceF, priceA, priceE, priceW, priceC, priceEw, priceEb, priceEg, priceR, priceS;
     int noOfOrders, choice;
     switch (choice)
     {
     	case P:
     		printf ("How many portions of Poundo Yam/ Edinkaiko Soup would you like to purchase?");
     		scanf ("%d", &p);
     		priceP = 3200*p;
     		printf ("Total amount is #%d", priceP);
     		break;
     	case F:
     		printf ("How many portions of Fried Rice would you like to purchase?");
     		scanf ("%d", &f);
     		priceF = 300*f;
     		printf("Total price of Fried rice is #%d", priceF);
     		printf ("How many portions of Chicken would you like to purchase?");
     		scanf ("%d", &c);
     		priceC = 900*c;
     		printf("Total price of Chicken is #%d", priceC);
     		int priceFC= priceC + priceF;
     		printf ("Total amount is #%d", priceFC);
     		break;
     	case A:
     		printf ("How many portions of Amala would you like to purchase?");
     		scanf ("%d", &a);
     		priceA = 150*a;
     		printf("Total price of Amala is #%d", priceA);
     		printf ("How many portions of Ewedu would you like to purchase?");
     		scanf ("%d", &ew);
     		priceEw = 200*ew;
     		printf("Total price of Ewedu is #%d", priceEw);
     		int priceAEw = priceA + priceEw;
     		printf ("Total amount is #%d", priceAEw);
     		break;
     	case E: 
     		printf ("How many portions of Eba would you like to purchase?");
     		scanf ("%d", &e);
     		priceA = 100*e;
     		printf("Total price of Eba is #%d", priceEb);
     		printf ("How many portions of Egusi would you like to purchase?");
     		scanf ("%d", &eg);
     		priceEw = 300*eg;
     		printf("Total price of Egusi is #%d", priceEg);
     		int priceEEb = priceE + priceEb;
     		printf ("Total amount is #%d", priceEEb);
     		break;
     	case W:
     		printf ("How many portions of White Rice would you like to purchase?");
     		scanf ("%d", &r);
     		priceA = 150*r;
     		printf("Total price of Amala is #%d", priceR);
     		printf ("How many portions of Stew would you like to purchase?");
     		scanf ("%d", &s);
     		priceEw = 200*s;
     		printf("Total price of Ewedu is #%d", priceS);
     		int priceRS = priceR + priceS;
     		printf ("Total amount is #%d", priceRS);
     		break;
     }
     return 0;
 }
