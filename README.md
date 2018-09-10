# MyStrategyPattern

##### Hello everybody!

It's just a simple implementation of the pattern "Strategy".
It is based on different "strategies" of dogs behavior :)
The names of the dog types are stupid and do not make sense, but this is enough to see the convenience of using this pattern.

The Dog has 3 strategies:
- display strategy;
- run strategy;
- wuff strategy.

<br/>
There are interfaces for these strategies:
- *IDisplayStrategy*;
- *IRunStrategy*;
- *IWuffStrategy*.

<br/>
And there are some realizations of interfaces: <br/>
| *IDisplayStrategy*     | *IRunStrategy*  | *IWuffStrategy*    |
| :--------------------: | :-------------: | :----------------: |
| GraphicDisplayStrategy | BaseRunStrategy | BaseWuffStartegy   |
| TextDisplayStrategy    | HomeRunStrategy | RubberWuffStrategy |
|                        | NoRunStrategy   | WildWuffStrategy   |

In **main.cpp** we create **6 Dogs**. 
For **4 of them** we choose strategies in own way; for **2 more**, we choose strategies randomly. 
Then for each dog, call all methods: 
- run(); 
- wuff(); 
- display();

If you have any questions, please contact me in these ways: <br/>
*e-mail:* FIvanO1998@gmail.com <br/>
*LinkedIn:* linkedin.com/in/FIvanO
