#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){

    // Deklarasi variabel
    int angka1, angka2, angka3;
    char operator1, operator2;

    float hasil;
    bool condition = false;

    // Input nilai dari pengguna
    printf("Masukkan ekspresi aritmatika: ");
    scanf("%d %c %d %c %d", &angka1, &operator1, &angka2, &operator2, &angka3);

    if (operator1 == '*' && operator2 == '/')
    {
      if (angka3 != 0)
      {
        hasil =  (angka1 * angka2) / angka3;
      }
      else
      {
        condition = true;
      }  
    }
    else if (operator1 == '*' && operator2 == '+')
    {
      hasil =  (angka1 * angka2) + angka3;
    }
    else if (operator1 == '*' && operator2 == '-')
    {
      hasil =  (angka1 * angka2) - angka3;
    }
    else if (operator1 == '*' && operator2 == '*')
    {
      hasil =  (angka1 * angka2) * angka3;
    }

    //---------------------------------------------------
    else if (operator1 == '/' && operator2 == '/')
    {
      if (angka1 != 0 && angka2 != 0 && angka3 != 0)
      {
        hasil =  (angka1 / angka2) / angka3;
      }
      else
      {
        condition = true;
      } 
    }
    else if (operator1 == '/' && operator2 == '*')
    {
      if (angka1 != 0 || angka2 != 0)
      {
        hasil =  (angka1 / angka2) * angka3;
      }
      else
      {
        condition = true;
      } 
    }
    else if (operator1 == '/' && operator2 == '+')
    {
      if (angka1 != 0 || angka2 != 0)
      {
        hasil =  (angka1 / angka2) + angka3;
      }
      else
      {
        condition = true;
      } 
    }
    else if (operator1 == '/' && operator2 == '-')
    {
      if (angka1 != 0 || angka2 != 0)
      {
        hasil =  (angka1 / angka2) - angka3;
      }
      else
      {
        condition = true;
      } 
    }

    //------------------------------------------------------
    else if (operator1 == '+' && operator2 == '*')
    {
      hasil =  angka1 + (angka2 * angka3);
    }
    else if (operator1 == '+' && operator2 == '/')
    {
      if (angka2 != 0 && angka3 != 0)
      {
        hasil =  angka1 + (angka2 / angka3);
      }
      else
      {
        condition = true;
      } 
    }
    else if (operator1 == '+' && operator2 == '+')
    {
      hasil =  angka1 + angka2 + angka3;
    }
    else if (operator1 == '+' && operator2 == '-')
    {
      hasil =  (angka1 + angka2) - angka3;
    }
    
    
    //------------------------------------------------------
    else if (operator1 == '-' && operator2 == '*')
    {
      hasil =  angka1 - (angka2 * angka3);
    }
    else if (operator1 == '-' && operator2 == '/')
    {
      if (angka2 != 0 && angka3 != 0)
      {
        hasil =  angka1 - (angka2 / angka3);
      }
      else
      {
        condition = true;
      } 
    }
    else if (operator1 == '-' && operator2 == '+')
    {
      hasil =  (angka1 - angka2) + angka3;
    }
    else if (operator1 == '-' && operator2 == '-')
    {
      hasil =  angka1 - angka2 - angka3;
    }
    

    
    if (condition == false)
    {
      printf("Hasil = %.2f", hasil);
    }
    else
    {
      printf("Hasil tidak dapat dihitung");
    }
}