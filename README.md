<!-- 
aogonn - readme
copyright by Marcel Ebbrecht, 2019 <marcel.ebbrecht@googlemail.com>
-->

# AOGONN
Approach On Genetically Optimized Neural Networks

## But, why ?!
I got a very common problem with the prediction of crypto-currency prices based 
on neural networks: Not enough training data. 

## Then use more data
It's not that easy. But lets start at the beginning: The CC market, especially 
the markets for so called 'altcoins', is apart from some hyped coins like ETH, 
a nearly 'perfect' market, mostly based on supply and demand. As opposite the 
real stock market, or either BTC/FIAT, is or becomes more and more responsive 
to news, social trends, people talking bull... or lets say: not optimal, or 
better, not maily based on supply and demand. Another big advantage of these 
small markets is their high volatility. I wrote a software, that is capable 
of trading in 1-minute intervals, together with the high volatility, this is 
what you want as a trader. A variace from 10-20% over 24h is quite normal and 
perfect for me.

## And ???
Operating on small markets produces a new problem: Not so much transactions. 
And a second one (what happens to all CCs): Extreme phases of bullish or 
bearish behavior. You can analyze it with math or just look at the charts: 
Training a NN over all available transactions will result in a NN, that is 
capable to give you 10-20% per year. This is good, but far away from what 
you'll get, when you can yield 1% per day. And I trust, this is still feasible 
(at the moment, my current NN based strategie produced 0.3% constantly per day 
over the last 90 days. 

This leads to a serious problem: If I use 'to much' data for training 
(e.g. 90 days), the predictions become to conservative resulting in poor 
trading performance, If I use a less amount of data for training, the network's 
prediction become unprecisely.

## The solution so far
Most kinds of NN's got parameters for decay, learning rate or other 'stuff'. 
With the right settings, one may create a NN, that is able to predict correctly 
enough for 2-3 days, based on the trading history of lets say 14 days. If the 
settings are correct.

## And what are the best settings?
The bad news: They're individual for each period (the 14 days mentioned above). 
Next bad News: My current NN uses 10 parameters with nearly 10-50 possible 
values each. A little bit of math makes clear: I cannot calculate all of them. 
This is, where genetic optimizing comes into play. Another BIG BUT: My 
optimizer do 100 runs with a population of 250 on 5-minute ticks. On 192 Xeon 
cores, it needs roughly 3 hours. If I lower the ticks to 1 Minute -> 15 hours 
calculation to get the settings for the next 3-4 days for a yield of nearly 
0.3%. You may calculate for you own how much money I have to put into my 
crypto wallet to get a netto revenue (computing power = costs). I also guess, 
that I have to raise the Population to somewhere around 1000-2000 to get near 
to a 1% per day revenue. 

## Ahhh you want become rich, hey, then spend the money!
To point this out very clearly: I started with this stuff to make money. 
Much money. This plan is gone. After 2 years (and reading a paper from a 
research group at the University of Koppenhagen) I want to know, If my basic 
assumption, that it is possible to compensate a lack of training data by 
optimizing parameters of a NN, is correct (these guys came to the conclusion 
that it is not feasible, even if you put other data like social media or news
response into the model ... read the paper. One last word on this research:
They tried this on BTC and ETH, imho they're right with their conclusion 
regarding BTC and ETH as I explained above, but imho it's wrong to generalize
this conclusion for the whole cryptomarket). 

## And now?
Make it faster. I started my work on this with software based on NodeJS and 
built some Perl and Bash based tools around that stuff. A few days ago, I found 
OpenNN and some completely other circumstances brought me to an old ....
lets say friend: C++

## The Goal
Porting my existing Node/Perl/Bash stuff to a neutral toolkit with C++. 

# How to build
* Install build dependencies:
  * libconfig
* Simple, you need make, cmake, g++ and gcc
* Run cmake . in base directory
* Run make
* Create valid configurations from samples in config directory
* Have fun