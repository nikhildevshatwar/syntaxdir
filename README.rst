================
Syntax Directory
================

This project is an attempt to consolidate the syntax of all the programming
languages in single repo.

Philosophy
==========

Programming languages keep changing. Whatever we learnt in college is either
absolute by now or will be in some years. Developers should not be afraid to
use a different language when working on a new project. Programming logic is
very lightly coupled with the syntax of the language. Most developers have to
do multiple google searches to figure out how to write a loop or condition in a
variety of languages like bash, Javascript, Python, Makefile, etc

Currently there are lots of online resources which try to teach the syntax of
a language. But all of these resources are written by different people and they
use different analogies, examples for explaining similar concepts.

Similar concepts explained with same examples
+++++++++++++++++++++++++++++++++++++++++++++

Main intention behind **syntaxdir** is to enable a common platform where as many
languages are documented as possible. All of the languages syntax documentation
should adhere to using same analogies, examples for explaining similar concepts.

e.g. when you are describing a for loop, there are many examples that can be used
to showcase the syntax. e.g.

.. code-block::

    for (item in list)
    for (color in rainbow)
    for (days in week)
    for (planet in solar_system)

What if we stick to one example and use the same to describe for loop syntax for
all the languages in the world? It would make it very easy for someone new to
understand the language without any documentation. For example, here is how the
**if condition** is described in multiple languages:

.. code-block:: C

    if (planet == "Earth") {
        printf("Home planet");
    } else {
        printf("Alien planet");
    }

.. code-block:: bash

    if [ "$planet" = "Earth" ]; then
        echo "Home planet"
    elif
        echo "Alient planet"
    fi

The Philosophy here is that you get familiar with the similar examples and it
becomes increasingly easy to understand a new language syntax by simply
reading a sample program written in it.


Output explains better than theory
++++++++++++++++++++++++++++++++++

A lot of times, the documentation tries to explain the syntax but the most
effective way I have found for learning simple stuff is to just provide the
output. e.g. following explains how the width format specifier in printf works.

.. code-block:: C

    /* %d format specifier in printf can optionally take the width */
    printf("<%d>\n", 347);  // prints <347>
    printf("<%5d>\n", 347);  // prints <  347>
    printf("<%05d>\n", 347);  // prints <00347>
    printf("<%2d>\n", 347);  // prints <347>    *used more characters than specified
    printf("<%3d>\n", 347);  // prints <347>

    printf("<%d>\n", -347);  // prints <-347>
    printf("<%5d>\n", -347);  // prints < -347>
    printf("<%05d>\n", -347);  // prints <-0347>
    printf("<%2d>\n", -347);  // prints <-347>    *used more characters than specified
    printf("<%3d>\n", -347);  // prints <-347>    *used more characters than specified

Naming conventions
++++++++++++++++++

When I learned programming, the variable scopes were described with a function
**foo** calling another function **bar**. Now, the names of the function do not
intuitively indicate which function calls which. Following is an examples of
explaining the same concept with better naming:

.. code-blocks:: C

    int count = 10;

    void inner() {
        int count = 30;
        printf("inside inner %d\n", count);
    }

    void outer() {
        int count = 20;
        printf("before inner %d\n", count);
        inner();
        printf("after inner %d\n", count);
    }

    void main() {
        printf("before outer %d\n", count);
        outer();
        printf("after outer %d\n", count);

    }

    /* Expected output:

       before outer 10
       before inner 20
       inside inner 30
       after inner 20
       after outer 10
    */

Similarly, I always was confused between **alice** and **bob**, who is the sender
and who is the receiver. If we are standardizing the examples, at lease pick the
names which are intuitive. Using **Steve** for sender and **Ron** for receiver
makes more sense. With the power of community, I am sure we can come up with the
most ituitive names for variables, functions, classes, subclasses, interfaces,
packages, etc which are not only easy to understand, but hard to get consued about.

I am expecting there wil be debates on what names are intuitive. Intuition also
depends on wheather you are familiar with the words or not. That's why we should
choose names that appeal to most of the programmers.

Using apt examples
++++++++++++++++++

When giving examples, avoid any special cases. When talking about prime numbers,
do not say **2 is a prime number**. This is a correct example but
it is not apt one. That's because 2 is the only prime number which is even. When
talking about pointer arithmetic, do not use character pointers, because that
is a special case where the differences between pointer arithmetic and integer
arithmetic are not distinct.

Here is a more relatable point. In the above example regarding describing the
width format specifier in printf, it's easy to just use **%d** (without the
triangular brackets). But then we would not know exactly where spaces were
added. Using **<%d>** makes it an apt example because it does not fail for any
special cases.

Why a git repository
++++++++++++++++++++

When someone asks a question on stackoverflow, random people provide the answers
and after some time, the question gets closed. Sometimes the answers are not
perfect and may cause failures in various situations. Having a Git repo allows
to change the existing answers for better good. Also, we would like to debate
on finding the most apt example for explaining the concepts and update the
syntax.

List of languages supported
===========================

Hopefully this list will keep growing


+----------+------------------+
| Language |  Current status  |
+==========+==================+
| ANSI-C   | Work in progress |
+----------+------------------+

Contributing
============

I will be happy to accept any pull requests you have if you want to add support
for your favourite language.
