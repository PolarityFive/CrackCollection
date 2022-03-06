Like with many others, this program takes a key which it then checks and decides whether it's valid through an algorithm. I decided to create a keygen for this one.
I used IDA Pro because the decompiler was cleaner than Ghidra's. 

When searching for strings or going through main, line 77 immediately caught my eye where v14 and the error/success message get set according to that math formula. 

![See here.](https://i.imgur.com/PMiKirp.png) 


On line 29, int key[14] is declared which stores the 14-character key. Each character's ASCII numerical value is then used to calculate fesi and calcValue. (Lines 66 and 71.)
The final check occurs at line 77 and if passed, the success message appears. 

With that in mind, I created a keygen that creates a random 14-character key and then checks it against the rules of the original program.

![See here.](https://i.imgur.com/9sXi160.png)

The keygen might take some time to get a valid key because the generation is random and if a key doesn't fit the rules, it gets discarded instead of modified. 
I was tuning the math to modify the keys but decided to let it be. Watching lines flashing by in a console while waiting for a valid key reminded me of movies where hackers 
do the same thing while waiting for their hack. 
