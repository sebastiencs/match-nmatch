/*
** match.c for match in /home/chapui_s/travaux-perso/nmatch
**
** Made by chapui_s
** Login   <chapui_s@epitech.net>
**
** Started on  Thu Oct  3 20:24:20 2013 chapui_s
** Last update Thu Dec 12 18:58:42 2013 chapui_s
*/

int	match(char *s1, char *s2)
{
  if (*s1 != '\0' && *s2 == '*')
    return (match(s1 + 1, s2) || match(s1, s2 + 1));
  if (*s1 == '\0' && *s2 == '*')
    return (match(s1, s2 + 1));
  if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    return (match(s1 + 1, s2 + 1));
  if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
    return (1);
  return (0);
}
