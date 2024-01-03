#!/usr/bin/env ruby
puts ARGV[0].scan(/hb?tn/).join
# the question mark makes the preceding token in the reguler
# expression optionl