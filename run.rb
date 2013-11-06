#run.rb  #TODO: test on Windows

require 'tmpdir'

src = ARGF.filename
Dir.mktmpdir do |tmp|
	exe = "#{tmp}/#{src}.exe"
	opts = '-std=c++11 -stdlib=libc++ -Werror -pedantic -Wall -Wno-c++98-compat'
	system("clang++ #{opts} -o #{exe} #{src}") && system(exe)
end
