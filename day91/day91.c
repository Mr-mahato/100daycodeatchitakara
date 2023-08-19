// Alter the string according to specifications above
// questions solved from codeQuotient (chitkara platform)
void capitalizeFirstChar(string &str)
{
  str[0] = str[0]-32;
 for(int i = 0;i<str.length();i++)
 {
   if(str[i]==' ')
   {
     if(str[i+1]>=97 && str[i+1]<=122)
     str[i+1] = str[i+1]-32;
   }
 }
}