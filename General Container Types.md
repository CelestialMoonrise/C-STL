# C++ Containers

## What are Containers?

Containers are like boxes, in a sense, they hold objects within it (those we call elements) and these elements are arranged in different ways based on the type of ‘box’ (or container) they are in. Different containers require different methods to take out its contents (more on that in a different piece).

## The Basic Containers

These are some of the most simple and easy to use containers for beginners (like me) and pros (other people, or maybe it's you!).

## Sequence Containers

These are containers whose elements are placed in a sequence and are connected to one another by links. Most of these containers support indexing as the elements have a set position in the container. This can change, of course, if elements are erased or inserted. It is important to note, though, that positions of the elements have nothing to do with the element itself, rather, it is based on the sequence the element was inserted into the container (as the name suggests).

### Sequence Containers Include:

array: A container whose size cannot be changed. Its elements are 

vector: A container whose size can be changed. Its elements are stored in contiguous sections in storage.

list: A doubly-linked container. Roughly translated to human language, it means that the elements in a list are not stored in connected sections in storage, but rather a link is provided to point to the next element. ‘Doubly-linked’ means that the links go both forward and backward.

forward_list: A singly-linked container. It’s basically the same as ‘list’ except the links only go forwards, therefore iteration only goes in one direction: forward.

deque: Sort of like a vector in the sense that its size can be changed, but elements can be added and deleted easily from both its front and back (vectors only do things from its end, well, most of the time). Its elements are scattered in the storage rather than being connected together (I guess this makes it a hybrid of vector and list). 

string*: Very similar to the definition of sequence containers, but they aren’t classified as ‘containers’ which make them kind of and kind of not belong on this list. (It’s here because I feel like I should mention it, heh)

## Associative Containers

These containers do not have any particular way of storing their elements (like my room, it's a physical mess). BUT, you can find things really easily because you have magical phrases called keys. (apologies, but I HAVE to put in a HP reference) Mrs. Weasley lives in the messy Burrow but she can find everything she needs by a simple summoning charm: Accio [insert whatever_she_was_trying_to_find]!). That ‘whatever’ is basically a key in associative containers. Think of the Burrow as a container, it’s a mess, things are all over the place, but by simply calling out the key(‘whatever’) you can find the value (some random thing) quickly and efficiently. The key and value are tied together so that when you call the key, you get the value. Note that associative containers are typically binary search trees.

### Associative Containers Include:

set: ```#include<set>``` An associative container where no keys are repeated. Its keys are the same as the key’s values, so keys are not repeated either.

multiset: ```#include<set>```(yep, it is under <set>) Elements are automatically ordered and can be repeated. Its keys are the same as the key’s values.

map: Requires ```#include<map>```. An associative container where the keys may or may not be the same as its values depending on how you inserted the key-value pair.

multimap: key_value-mapped_value pairs. 

There is also the unordered version of those listed above, but we won’t delve into those.

## Container Adapters

These aren’t actually containers but they’re really useful, and they are built from containers so here they are. Container adapters are, to the extent of my knowledge, like adapters for electronics. They are hooked on to actual containers and they make elements of the containers ‘come out’ differently. (Not the best explanation, so try the annotated examples down below) Note that you will need to ```#include<stack>``` or ```#include<queue>``` or ```#include<priority_queue>``` if you want to use these adapters.

stack: Look at those pancakes, you can’t exactly pull out a pancake from the middle or bottom without the whole thing falling apart right? That’s exactly what stacks are: a stack of elements. The first element you put down would be the last to be taken out (and eaten, if you want) and the last element you place in there would be the first to be taken out (LIFO: last-in first-out). Stack is, by default, an adapter for deques, but you can specify what type of container you want in code.

![pancakes (1)](https://github.com/CelestialMoonrise/CPP-STL/assets/103975296/8804fec0-59a3-4636-ac3d-c2466e2d7af8)
Icon created by juicy_fish

queue: As the name suggests, a queue is basically like elements waiting in line. The first in, gets processed first (FIFO: first-in first-out). Just like stack, queues are, by default, an adapter for deques, but you can specify the container type you want.

priority_queue: Like choosing from a bowl of assorted candies (I always go for the biggest and tastiest. Hey! Don’t judge), priority_queue organizes its elements so that the element that is the ‘greatest’ gets out first (Which elements are ‘greater’ is determined by strict_weak_order, I will try my best to explain that in the Notes section).

## Notes

strict_weak_order: As promised, here it is. strict_weak_order<R, T, U> is basically relation<R, T, U>, and I quote: “The distinction between relation and strict_weak_order is purely semantic.” So what is relation<R, T, U> then? “The concept relation<R, T, U> specifies that R defines a binary relation over the set of expressions whose type and value category are those encoded by either T or U.” Yea, I still don’t really get it. I will update this piece as soon as I wrap my brain around this and translate it to something possible to understand. (Sorry about that!)

Nothing. Except: GO CHECK OUT THE CITATIONS! They’re great sources and more comprehensive than my notes(notes are simplified and processed information.  Those sources are first-hand info for those who need it).

## Citatations
https://cplusplus.com/reference/stl/

https://www.twblogs.net/a/5b8f0f5a2b7177188349973f (helpful Chinese reiteration of types of C++ containers)

https://en.cppreference.com/w/cpp/concepts/strict_weak_order (official explanation of strict_weak_ordering)

https://cplusplus.com/reference/queue/priority_queue/

https://cplusplus.com/reference/queue/queue/ 

https://cplusplus.com/reference/stack/stack/ 

https://www.flaticon.com/free-icons/pancakes (This is where that pancake pic came from)

https://tioj.ck.tp.edu.tw/STL/AssociativeContainer.html (very good explanation of associative containers!)



