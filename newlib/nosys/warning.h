#ifndef __WARNING_H__
#define __WARNING_H__

#define link_warning(symbol, msg)                     \
  static const char __evoke_link_warning_##symbol[]     \
    __attribute__ ((section (".gnu.warning." #symbol), \
		   __used__)) = msg;
/* A canned warning for sysdeps/stub functions.
   The GNU linker prepends a "warning: " string.  */
#define stub_warning(name) \
  link_warning (name, \
                #name " is not implemented and will always fail")

#endif /* __WARNING_H__ */
