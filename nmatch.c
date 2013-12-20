/*
** nmatch.c for nmatch in /home/chapui_s/travaux-perso/nmatch
**
** Made by chapui_s
** Login   <chapui_s@epitech.net>
**
** Started on  Fri Oct 11 21:40:38 2013 chapui_s
** Last update Thu Dec 12 18:58:52 2013 chapui_s
*/

int	nmatch(char *s1, char *s2)
{
  if (*s1 != '\0' && *s2 == '*')
    return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
  if (*s1 == '\0' && *s2 == '*')
    return (nmatch(s1, s2 + 1));
  if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    return (nmatch(s1 + 1, s2 + 1));
  if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
    return (1);
  return (0);
}
