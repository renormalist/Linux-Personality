package Linux::Personality;

use 5.010001;
use strict;
use warnings;
use Carp;

require Exporter;
use AutoLoader;

our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use Linux::Personality ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.

our @EXPORT         = ();
our %EXPORT_TAGS    = (
                       'funcs'  => [ qw/ personality / ],
                       'consts' => [ qw/ ADDR_COMPAT_LAYOUT
                                         ADDR_LIMIT_32BIT
                                         ADDR_LIMIT_3GB
                                         ADDR_NO_RANDOMIZE
                                         MMAP_PAGE_ZERO
                                         PER_BSD
                                         PER_HPUX
                                         PER_IRIX32
                                         PER_IRIX64
                                         PER_IRIXN32
                                         PER_ISCR4
                                         PER_LINUX
                                         PER_LINUX32
                                         PER_LINUX32_3GB
                                         PER_LINUX_32BIT
                                         PER_MASK
                                         PER_OSF4
                                         PER_OSR5
                                         PER_RISCOS
                                         PER_SCOSVR3
                                         PER_SOLARIS
                                         PER_SUNOS
                                         PER_SVR3
                                         PER_SVR4
                                         PER_UW7
                                         PER_WYSEV386
                                         PER_XENIX
                                         READ_IMPLIES_EXEC
                                         SHORT_INODE
                                         STICKY_TIMEOUTS
                                         WHOLE_SECONDS
                                       / ]
                      );
our @EXPORT_OK      = map { @$_ } values %EXPORT_TAGS;
$EXPORT_TAGS{'all'} = [ @EXPORT_OK ];

our $VERSION = '0.01';

sub AUTOLOAD {
    # This AUTOLOAD is used to 'autoload' constants from the constant()
    # XS function.

    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&Linux::Personality::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
	# Fixed between 5.005_53 and 5.005_61
#XXX	if ($] >= 5.00561) {
#XXX	    *$AUTOLOAD = sub () { $val };
#XXX	}
#XXX	else {
	    *$AUTOLOAD = sub { $val };
#XXX	}
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('Linux::Personality', $VERSION);

# Preloaded methods go here.

# Autoload methods go after =cut, and are processed by the autosplit program.

1;
__END__
# Below is stub documentation for your module. You'd better edit it!

=head1 NAME

Linux::Personality - Perl extension for blah blah blah

=head1 SYNOPSIS

  use Linux::Personality;
  blah blah blah

=head1 DESCRIPTION

Stub documentation for Linux::Personality, created by h2xs. It looks like the
author of the extension was negligent enough to leave the stub
unedited.

Blah blah blah.

=head2 EXPORT

None by default.

=head2 Exportable constants

  ADDR_COMPAT_LAYOUT
  ADDR_LIMIT_32BIT
  ADDR_LIMIT_3GB
  ADDR_NO_RANDOMIZE
  MMAP_PAGE_ZERO
  PER_BSD
  PER_HPUX
  PER_IRIX32
  PER_IRIX64
  PER_IRIXN32
  PER_ISCR4
  PER_LINUX
  PER_LINUX32
  PER_LINUX32_3GB
  PER_LINUX_32BIT
  PER_MASK
  PER_OSF4
  PER_OSR5
  PER_RISCOS
  PER_SCOSVR3
  PER_SOLARIS
  PER_SUNOS
  PER_SVR3
  PER_SVR4
  PER_UW7
  PER_WYSEV386
  PER_XENIX
  READ_IMPLIES_EXEC
  SHORT_INODE
  STICKY_TIMEOUTS
  WHOLE_SECONDS



=head1 SEE ALSO

 man 2 personality

=head1 AUTHOR

Steffen Schwigon, C<< <ss5@renormalist.net> >>

=head1 CREDITS

Maik Hentsche C<< <maik.hentsche@amd.com> >> for having the problem in
the first place and digging the according manual pages.

Florian Ragwitz C<< <rafl@debian.org> >> for the usual Perl low-level
support.

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2010 by Steffen Schwigon

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.10.1 or,
at your option, any later version of Perl 5 you may have available.

=cut
