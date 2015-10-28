# Leet
Intro to C++ Assignment 8
Prompt:
Background: You've done well to help Marge so far with your programs.  Now she has yet another problem:  Bart has started using "leet speak" in his writing and she has the hardest time understanding it.  So, she needs you to write a program that will translate to and from leet and English for her.  You may by now be wondering, "what in the world is leet??!!"   Leet is a method to fool automated text readers (used to identify specific words and/or phrases that are deemed subversive...to someone....in some way) so that a user can write whatever they want and yet a human can read it, but a digital text reader can't make heads or tails of it.  Let me demonstrate.  The previous sentence can be written in leet as:  137 |\/|3 [)3|\/|0|\|$7|^@73.  Clever, eh?  Yeeaahhhhh, clever. (Personally, I think it's ridiculous, but who am I to argue with popular digital culture.)  But it's really hard to read. Which is why Marge needs the translator ... from you.  To clarify, "137" is "let" because 1 is a stand-in for the letter l, 3 subs for the letter e, and 7 sorta looks like the letter t.  The next four characters |\/|sub for m. That's followed by 3, sub for e.  Thus they spell "me".  If you try hard, you can see the rest is the word "demonstrate".  Now, there are undoubtedly many ways to represent letters with other (strings of) characters.  So, to make this assignment "doable", assume all leet users use the following dictionary.

                a     @
b     8
c     (
d     [)
e     3                    
f     |=                            
g     9
h     #
i     ][
j     ]
k     |<
l     1
m     |\/|      (pipe,backslash,forwardslash,backslash, pipe)
n     |\|
o    0           ( a zero )
p     |?
q     4
r     |^
s     $
t     7
u     |_|
v     \/         (backslash, forwardslash)
w     \^/
x     ><
y     `/
z     %
Thus, you can see how a automated digital reader could never identify words if you use leet because it all comes out looking like gibberish.

Specifications: Your program should allow the user to choose to translate from English to leet, or leet to English.  It should prompt the user for the direction of translation.  After that, the user is to be allowed to enter text to be translated.  You program is to then provide the translation and reprompt until a quit option is designated. 

Details: You are required to use null-terminated char arrays for this assignment, not standard string class strings. Any character not in the dictionary provided above simply doesn't get translated; it remains the same.  Treat both upper case and lower case letters the same.  That is, both d and D translate to [) and both y and Y translate to '/ and so on.  It is up to you how to store the dictionary, as long as the user of the program has no way to modify it.  (It is not required to use file access as we will not have covered that by the time this is due.  If you want to do that, it's ok.)  Think carefully how you want to do this since it could possibly determine how difficult the program is to write.

When you submit: Translate "Four score and seven years ago" to leet. Then translate "|=0|_||^ $(0|^3 @|\|[) $3\/3|\| '/3@|^$" to English.  Now, since you may not be able to identify where spaces are in what I just typed in leet, I'll repeat here that same string but with + inserted where spaces are supposed to be "|=0|_||^+$(0|^3+@|\|[)+$3\/e|\|+'/3@|^$"   Then quit.

And, as usual:  [)0|\|'7 #3$][7@73 70 @$|< 4|_|3$7][0|\|$ ][|= '/0|_| #@\/3 @|\|'/.
