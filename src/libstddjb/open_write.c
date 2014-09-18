/* ISC license. */

#include <skalibs/nonposix.h>
#include <fcntl.h>
#include <skalibs/djbunix.h>

int open_write (char const *fn)
{
  return open2(fn, O_WRONLY | O_NONBLOCK) ;
}
