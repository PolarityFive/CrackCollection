In this one, you need to find the unique, correct key. 
Searching for strings within Ghidra, we can find the instructions for inserting the key and directly under it, the decompiled code that does a character-by-character check for
WOW_YOU_DID_IT! 
Quite simple. 

I also made a patch that skips every digit check after storing the key. 

![See here](https://i.imgur.com/FSa5GYu.png)
