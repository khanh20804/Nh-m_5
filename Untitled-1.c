#include <stdio.h>
#include <string.h>

int main ()
{
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "34";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) 
   {
      printf("Ky tu ket noi dau tien: %c\n", *ret);
   }
   else 
   {
      printf("Khong tim thay ky tu");
   }

   return(0);
}