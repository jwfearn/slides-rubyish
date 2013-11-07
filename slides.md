## Rubyish C++11

John Fearnside

john@moz.com

[github.com/jwfearn/rubyish](https://github.com/jwfearn/rubyish)



## C++ isn't much like Ruby
...and never will be
...but it's getting a little closer



## History
C++98 First ISO standard

C++03 Bug fix

C++11 First major revision (13 years later)



## C++11
Approved xxx, 2011

Many features have been available in major compilers for a while



## C++11 Available Now
- Apple LLVM 5.0
- clang 3.3
- gcc 4.8.1 (mostly)
- Visual C++ 2013



## What's new
<ul>
	<li class="fragment">Language features</li>
	<li class="fragment">Library features</li>
	<li class="fragment">Usability features</li>
</ul>



## Adoption
<p class="fragment">Existing code still works</p>
<p class="fragment">Compiler support relatively new</p>
<p class="fragment">New programmers leary</p>



Not your father's C++



Old guidance doesn't necessarily apply



## Blink example
<blockquote cite="http://dev.chromium.org/blink/coding-style#TOC-Other-Punctuation">
&ldquo;Prefer index over iterator in Vector iterations for a terse, easier-to-read code.&rdquo;
</blockquote>
<br/>
<br/>
Right:
```cpp
size_t frameViewsCount = frameViews.size();
for (size_t i = 0; i < frameViewsCount; ++i)
  frameViews[i]->updateLayoutAndStyleIfNeededRecursive();
```
<br/>
Wrong:
```cpp
const Vector<RefPtr<FrameView> >::iterator end = frameViews.end();
for (Vector<RefPtr<FrameView> >::iterator it = frameViews.begin(); it != end; ++it)
  (*it)->updateLayoutAndStyleIfNeededRecursive();
```
<br/>
<br/>
  -- [Blink style guide](http://dev.chromium.org/blink/coding-style#TOC-Other-Punctuation)



we'll come back to this



C++ *can* be simpler, like Ruby



## Dynamic Arrays
<p class="fragment">Array in Ruby</p>
<p class="fragment">std::vector in C++</p>



## Array Example in Ruby
`v.rb`
```rb
v = [-99, 0, 42, 3, -1, 6]
v.each do |iter|
  print "#{iter} "
end
print "\n"
```
<br/>
```
$ ruby v.rb
-99 0 42 3 -1 6
```



## Vector Example in C++98
`v0.cpp`
```cpp
#include <iostream>
#include <vector>

int main() {
  int arr[] = {-99, 0, 42, 3, -1, 6};
  std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
  std::vector<int>::iterator end = v.end();
  std::vector<int>::iterator iter = v.begin();
  for (; iter != end; ++iter) {
    *iter = 0
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
  return 0;
}
```
<br/>
```
$ ./run v0.cpp
-99 0 42 3 -1 6
```



## Vector Example in C++11




## Blink example (reprise)



## Other Rubish features
optional garbage collection

lambdas



## Coming soon (C++14, C++17)
modules

optionals

file system library



## Resources



## Books
<img width="300" src="img/tour.jpg">
<img width="300" src="img/ppp.jpg">
<img width="300" src="img/cpl4.jpg">
