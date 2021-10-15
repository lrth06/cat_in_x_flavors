    #!/usr/bin/perl
    use strict;
    use warnings;
   
    my ($file) = @ARGV;
    if (not defined $file) {
      die "ERROR: No file name entered! Please input filename to read!\n";
      exit;

    }
    open my $fh, '<', $file or die "Error: Unable to read file ";
    my( $file_content) = do { local $/; <$fh> };
     
     
     
    print "'$file_content'\n";