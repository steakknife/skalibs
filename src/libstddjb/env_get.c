/* ISC license. */

#include <skalibs/env.h>
#include <skalibs/environ.h>

char const *env_get (char const *s)
{
  return env_get2((char const **)environ, s) ;
}
