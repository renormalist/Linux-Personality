#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_8 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PER_HPUX PER_MASK PER_OSF4 PER_OSR5 PER_SVR3 PER_SVR4 */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case '3':
    if (memEQ(name, "PER_SVR", 7)) {
    /*                      3     */
      *iv_return = PER_SVR3;
      return PERL_constant_ISIV;
    }
    break;
  case '4':
    if (memEQ(name, "PER_OSF", 7)) {
    /*                      4     */
      *iv_return = PER_OSF4;
      return PERL_constant_ISIV;
    }
    if (memEQ(name, "PER_SVR", 7)) {
    /*                      4     */
      *iv_return = PER_SVR4;
      return PERL_constant_ISIV;
    }
    break;
  case '5':
    if (memEQ(name, "PER_OSR", 7)) {
    /*                      5     */
      *iv_return = PER_OSR5;
      return PERL_constant_ISIV;
    }
    break;
  case 'K':
    if (memEQ(name, "PER_MAS", 7)) {
    /*                      K     */
      *iv_return = PER_MASK;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "PER_HPU", 7)) {
    /*                      X     */
      *iv_return = PER_HPUX;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_9 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PER_ISCR4 PER_LINUX PER_SUNOS PER_XENIX */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case 'I':
    if (memEQ(name, "PER_XENIX", 9)) {
    /*                      ^       */
      *iv_return = PER_XENIX;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "PER_SUNOS", 9)) {
    /*                      ^       */
      *iv_return = PER_SUNOS;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "PER_ISCR4", 9)) {
    /*                      ^       */
      *iv_return = PER_ISCR4;
      return PERL_constant_ISIV;
    }
    break;
  case 'U':
    if (memEQ(name, "PER_LINUX", 9)) {
    /*                      ^       */
      *iv_return = PER_LINUX;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PER_IRIX32 PER_IRIX64 PER_RISCOS */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '3':
    if (memEQ(name, "PER_IRIX32", 10)) {
    /*                       ^        */
      *iv_return = PER_IRIX32;
      return PERL_constant_ISIV;
    }
    break;
  case '6':
    if (memEQ(name, "PER_IRIX64", 10)) {
    /*                       ^        */
      *iv_return = PER_IRIX64;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "PER_RISCOS", 10)) {
    /*                       ^        */
      *iv_return = PER_RISCOS;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PER_IRIXN32 PER_LINUX32 PER_SCOSVR3 PER_SOLARIS SHORT_INODE */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case 'N':
    if (memEQ(name, "PER_IRIXN32", 11)) {
    /*                       ^         */
      *iv_return = PER_IRIXN32;
      return PERL_constant_ISIV;
    }
    break;
  case 'O':
    if (memEQ(name, "SHORT_INODE", 11)) {
    /*                       ^         */
      *iv_return = SHORT_INODE;
      return PERL_constant_ISIV;
    }
    break;
  case 'R':
    if (memEQ(name, "PER_SOLARIS", 11)) {
    /*                       ^         */
      *iv_return = PER_SOLARIS;
      return PERL_constant_ISIV;
    }
    break;
  case 'V':
    if (memEQ(name, "PER_SCOSVR3", 11)) {
    /*                       ^         */
      *iv_return = PER_SCOSVR3;
      return PERL_constant_ISIV;
    }
    break;
  case 'X':
    if (memEQ(name, "PER_LINUX32", 11)) {
    /*                       ^         */
      *iv_return = PER_LINUX32;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_15 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     PER_LINUX32_3GB PER_LINUX_32BIT STICKY_TIMEOUTS */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'G':
    if (memEQ(name, "PER_LINUX32_3GB", 15)) {
    /*                            ^        */
      *iv_return = PER_LINUX32_3GB;
      return PERL_constant_ISIV;
    }
    break;
  case 'I':
    if (memEQ(name, "PER_LINUX_32BIT", 15)) {
    /*                            ^        */
      *iv_return = PER_LINUX_32BIT;
      return PERL_constant_ISIV;
    }
    break;
  case 'T':
    if (memEQ(name, "STICKY_TIMEOUTS", 15)) {
    /*                            ^        */
      *iv_return = STICKY_TIMEOUTS;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/home/ss5/perl-v5.12.0/bin/perl5.12.0 -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(),
            {name=>"ADDR_LIMIT_32BIT", type=>"IV", macro=>"1"},
            {name=>"ADDR_LIMIT_3GB", type=>"IV", macro=>"1"},
            {name=>"ADDR_NO_RANDOMIZE", type=>"IV", macro=>"1"},
            {name=>"MMAP_PAGE_ZERO", type=>"IV", macro=>"1"},
            {name=>"PER_BSD", type=>"IV", macro=>"1"},
            {name=>"PER_HPUX", type=>"IV", macro=>"1"},
            {name=>"PER_IRIX32", type=>"IV", macro=>"1"},
            {name=>"PER_IRIX64", type=>"IV", macro=>"1"},
            {name=>"PER_IRIXN32", type=>"IV", macro=>"1"},
            {name=>"PER_ISCR4", type=>"IV", macro=>"1"},
            {name=>"PER_LINUX", type=>"IV", macro=>"1"},
            {name=>"PER_LINUX32", type=>"IV", macro=>"1"},
            {name=>"PER_LINUX32_3GB", type=>"IV", macro=>"1"},
            {name=>"PER_LINUX_32BIT", type=>"IV", macro=>"1"},
            {name=>"PER_MASK", type=>"IV", macro=>"1"},
            {name=>"PER_OSF4", type=>"IV", macro=>"1"},
            {name=>"PER_OSR5", type=>"IV", macro=>"1"},
            {name=>"PER_RISCOS", type=>"IV", macro=>"1"},
            {name=>"PER_SCOSVR3", type=>"IV", macro=>"1"},
            {name=>"PER_SOLARIS", type=>"IV", macro=>"1"},
            {name=>"PER_SUNOS", type=>"IV", macro=>"1"},
            {name=>"PER_SVR3", type=>"IV", macro=>"1"},
            {name=>"PER_SVR4", type=>"IV", macro=>"1"},
            {name=>"PER_UW7", type=>"IV", macro=>"1"},
            {name=>"PER_WYSEV386", type=>"IV", macro=>"1"},
            {name=>"PER_XENIX", type=>"IV", macro=>"1"},
            {name=>"SHORT_INODE", type=>"IV", macro=>"1"},
            {name=>"STICKY_TIMEOUTS", type=>"IV", macro=>"1"},
            {name=>"WHOLE_SECONDS", type=>"IV", macro=>"1"});

print constant_types(), "\n"; # macro defs
foreach (C_constant ("Linux::Personality", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("Linux::Personality", $types);
__END__
   */

  switch (len) {
  case 7:
    /* Names all of length 7.  */
    /* PER_BSD PER_UW7 */
    /* Offset 5 gives the best switch position.  */
    switch (name[5]) {
    case 'S':
      if (memEQ(name, "PER_BSD", 7)) {
      /*                    ^       */
        *iv_return = PER_BSD;
        return PERL_constant_ISIV;
      }
      break;
    case 'W':
      if (memEQ(name, "PER_UW7", 7)) {
      /*                    ^       */
        *iv_return = PER_UW7;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 8:
    return constant_8 (aTHX_ name, iv_return);
    break;
  case 9:
    return constant_9 (aTHX_ name, iv_return);
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    if (memEQ(name, "PER_WYSEV386", 12)) {
      *iv_return = PER_WYSEV386;
      return PERL_constant_ISIV;
    }
    break;
  case 13:
    if (memEQ(name, "WHOLE_SECONDS", 13)) {
      *iv_return = WHOLE_SECONDS;
      return PERL_constant_ISIV;
    }
    break;
  case 14:
    /* Names all of length 14.  */
    /* ADDR_LIMIT_3GB MMAP_PAGE_ZERO */
    /* Offset 3 gives the best switch position.  */
    switch (name[3]) {
    case 'P':
      if (memEQ(name, "MMAP_PAGE_ZERO", 14)) {
      /*                  ^                 */
        *iv_return = MMAP_PAGE_ZERO;
        return PERL_constant_ISIV;
      }
      break;
    case 'R':
      if (memEQ(name, "ADDR_LIMIT_3GB", 14)) {
      /*                  ^                 */
        *iv_return = ADDR_LIMIT_3GB;
        return PERL_constant_ISIV;
      }
      break;
    }
    break;
  case 15:
    return constant_15 (aTHX_ name, iv_return);
    break;
  case 16:
    if (memEQ(name, "ADDR_LIMIT_32BIT", 16)) {
      *iv_return = ADDR_LIMIT_32BIT;
      return PERL_constant_ISIV;
    }
    break;
  case 17:
    if (memEQ(name, "ADDR_NO_RANDOMIZE", 17)) {
      *iv_return = ADDR_NO_RANDOMIZE;
      return PERL_constant_ISIV;
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

