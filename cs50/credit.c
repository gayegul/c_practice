#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define VISA 0
#define AMEX 1
#define MASTERCARD 2
#define INVALID 3

char* VISA_NAME = "VISA";
char* AMEX_NAME = "AMEX";
char* MASTERCARD_NAME = "MASTERCARD";
char* INVALID_NAME = "INVALID";

int get_card_type(long long);
char* get_card_name(int number);

int main(void)
{
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;

    long long card_number = GetLongLong();
    int card_type = get_card_type(card_number);
    char* name = get_card_name(card_type);

    while(card_number > 0)
    {
        if(i % 2 == 0) {
            sum1 += card_number % 10;
            card_number /= 10;
        }
        else {
            int temp = 0;
            temp += (card_number % 10) * 2;
            if(temp > 9)
            {
                sum2 += temp % 10;
                sum2 += temp / 10;
            }
            else
            {
                sum2 += temp;
            }
            card_number /= 10;
        }
        i++;
    }
    if((sum1 + sum2) % 10 == 0)
    {
        printf("%s\n", name);
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

int get_card_type(long long card_number)
{
  int card = INVALID;

  if((int)(card_number / pow(10, 16)) != 0)
  {
    card = INVALID;
  }
  else if((int)(card_number / pow(10, 15)) != 0)
  {
    if(card_number / pow(10, 14) >= 51 && card_number / pow(10, 14) <= 55)
        card = MASTERCARD;
    else if((int)(card_number / pow(10, 15)) == 4)
        card = VISA;
  }
  else if((int)(card_number / pow(10, 14)) != 0)
  {
    printf("%f\n", card_number / pow(10, 13));
    if(card_number / pow(10, 13) >= 34 && card_number / pow(10, 13) >= 37)
        card = AMEX;
  }
  else if((int)(card_number / pow(10, 12)) != 0)
  {
     if((int)(card_number / pow(10, 11)) == 4)
        card = VISA;
  }
  return card;
}

char* get_card_name(int number)
{
  switch(number)
  {
    case AMEX:
      return AMEX_NAME;
    case MASTERCARD:
      return MASTERCARD_NAME;
    case VISA:
      return VISA_NAME;
    default:
      return INVALID_NAME;
  }
}
