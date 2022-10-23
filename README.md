<h1><em>Push Swap</em><strong><em> (grade : 90)</em></strong></h1>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="400" height="200" /></div>
<p><strong>This project has the goal of creating an algorithm that is step-efficcient into sorting a stack of integers (a) by using another stack (b) with a restrict set of rules on how to move the numbers between them.</strong></p>
<p> So i'll start by explaining the rules and what they mean, then i'll explain the logical construction that driven my algorithm to reach sucess in doing so, and with a reasonable average number of steps. </p>
<p></p>
<p><strong><italic><center>1 - RULES :</center></italic></strong></p>
<p>So at the start, we will receive the numbers as arguments passed as the following:
<p><italic>./push_swap -43 23 1 0 54 43 (...)</italic></p>
And the goal is to convert them to integers, put all in stack a and with an empty stack b, sort in ascending order the numbers into stack a. To do so, we have the following operations at our disposal:
<ul style="list-style-type: square;">
<li><strong>sa</strong> (swap a): Swap the first 2 elements at the top of stack a.</li>
<li><strong>sb</strong> (swap b): Swap the first 2 elements at the top of stack b.</li>
<li><strong>ss</strong> : sa and sb at the same time.</li>
<li><strong>pa</strong> (push a): Take the first element at the top of b and put it at the top of a.</li>
<li><strong>pb</strong> (push b): Take the first element at the top of a and put it at the top of b.</li>
<li><strong>ra</strong> (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.</li>
<li><strong>rb</strong> (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.</li>
<li><strong>rr</strong> : ra and rb at the same time.</li>
<li><strong>rra</strong> (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.</li>
<li><strong>rrb</strong> (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.</li>
<li><strong>rrr</strong> : rra and rrb at the same time.</li>
</ul>
We can see a draw I made representing each possible operation to grasp the rules even better:
<div align="center"><br /><img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="800" height="200" /></div>
<p><strong><italic><center>2 - LOGIC CONSTRUCTION :</center></italic></strong></p>
<p>At the beginning, I must confess I felt kind of overwelmed. The first questions that come to your mind is how with this set of rules would i even sort the stack a.</p>
Since I'm not a genius (at least at sorting algorithms (yet)) i thought "well, what is the nicest way I can brute force the best outcome for sorting X numbers. What is even X, how many numbers is it doable to brute force and not have 30 files of 5 functions (remember i have the Norm of 42 to respect). The number I came across was X = 4 since 5 would have been way to much possible solutions and 4 it is still doable. However, i had to understand that with this rules, the best way to sort 4 is different then the best way to sort 4 that are on top of a stack. And the solution to the best way to sort 4 could give a wrong outcome on 4 that were on top of a stack. Thats when i built the base of my sorting algorithm, a set of functions that would:</p>
<ul style="list-style-type: square;">
<li>Sort for 2 elements at the stack a.</li>
<li>Sort for 3 elements at the stack a.</li>
<li>Sort for 4 elements at the stack a.</li>
<li>Sort for 4 elements at the top of the stack a.</li>
<li>Sort for 5 elements at the stack a.</li>
</ul>
<p>Now i had all the brute force i needed to construct my algorithm. So to begin, i new this would be a hard task so i had to come across a nice way of solving this by only having chuncks of 4 to ultimatly sort. I cannot recall how many times i thought of a different solution.
Finally, i thought long enough to agree on one solution, that would evolve along the time since new thoughts of making it better would appear, and the need of doing so had arrived at some point.</p>
<p>The idea is the following: firstly i work with temporary stacks, that i call pos_a and pos_b stack. This stacks take the final position of each number, so the list had to be ordered from 1 to N numbers.
Now, if I'm good at sending the right numbers at a given order to the stack b, then when it will require me phew steps to send each chunck of 4 (unsorted) to a, and sort it. So what i realized is that it would be efficient for me to pick 5 numbers that would be at the middle of the pos_a stack at the end, and add both the 4-stack from the top and from the bottom. So what i had to do was send the last 4-stacks (from top and from bottom) then the next ones, etc... till i send the ones that would be just at the bottom or at the top of 5 numbers at the pos_a stack. Of course this may raise the question but what if by subtracting 5 numbers from the total ones, what lays at the bottom and what is a the top are not multiples of 4. And for that, i created what i called the <italic>outliers</italic>, that is, if its not a multiple of 4 then exists 1, 2 or 3 outliers at the bottom or at the top. </p>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/99777188/194442104-a2d55e31-9703-4c62-aa69-e91fd865dc4e.png" width="800" height="230" /></div>
