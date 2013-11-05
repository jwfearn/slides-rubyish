#run.rb  #TODO: test on Windows

require 'tmpdir'

src = ARGF.filename
puts "about to compile and run #{src}"
Dir.mktmpdir do |tmp|
	exe = "#{tmp}/#{src}.exe"
	opts = '-W -Wall -Werror -pedantic'
	system("g++ #{opts} -o #{exe} #{src}") && system(exe)
end
