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
<div align="center"><br /><img src="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" alt="https://user-images.githubusercontent.com/76601369/110706242-77158d00-81ef-11eb-8085-5da6f0988553.jpg" width="1000" height="200" /></div>
<p><strong><italic><center>2 - LOGIC CONSTRUCTION :</center></italic></strong></p>
<p>At the beginning, I must confess I felt kind of overwelmed. The first questions that come to your mind is how with this set of rules would i even sort the stack a.</p>
<p>I cannot recall how many times i thought of a different solution, but first i had to know my limitations.
Since I'm not a genius (at least at sorting algorithms (yet)) i thought "well, what is the nicest way I can brute force the best outcome for sorting X numbers. What is even X, how many numbers is it doable to brute force and not have 30 files of 5 functions (remember i have the Norm of 42 to respect). The number I came across was X = 4 since 5 would have been way to much possible solutions and 4 it is still doable. However, i had to understand that with this rules, the best way to sort 4 is different then the best way to sort 4 that are on top of a stack. And the solution to the best way to sort 4 could give a wrong outcome on 4 that were on top of a stack. Thats when i built the base of my sorting algorithm, a set of functions that would:</p>
<p>So the way i aproached the problem is let the user choose by typing:</p>
<p><strong>1 - $&gt; ./fractol mandelbrot</strong></p>
<p><strong>2 - $&gt; ./fractol julia</strong></p>
<p><strong>3 - $&gt;./fractol julia (<span style="color: #0000ff;">double</span> x) (<span style="color: #0000ff;"><em>double</em></span> y)</strong></p>
<p><strong>4 - $&gt; ./fractol hourglass (a mathematical incorrect yet beautifull fractal I've created.)</strong></p>
<p>The first image shows the Mandelbrot set with 300 iterations. The second one, The Julia set with c = -0.78i with 300 iterations, and the third image is deep inside one Julia set choosed by the mouse click, once again with 300 iterations. </p>
<p><strong>Some extra features I added:</strong></p>
<ul style="list-style-type: square;">
<li>Ability to <strong>move</strong> the image with <strong>W A S D</strong> or the <strong>arrow keys</strong>. (increases the speed with the zoom).</li>
<li><strong>Increase or decrease</strong> the iterations with the <strong>'+'</strong> and <strong>'-'</strong> keys on the numpad.</li>
<li>For the Mandelbrot set, choose where to zoom by mouse clicking the spot in the image (once). For the Julia set, change the c parameter by mouse clicking the new values. (The new value will be displayed on the terminal).</li>
<li>A <strong>night mode</strong> by <strong>pressing 'N'</strong>.(and rechange to normal mode by re-pressing it).</li>
</ul>
<p>I could go into details what's the mathematics behind each set but nowadays you can find it almost everywhere. If you have literally zero insights, I would however recomend you the numberphile videos (since i really enjoy them and probably you will understand at least the concepts),</p>
<p>There is of course some points in the job that could be better. The first great feature that i can think of is a scalable with zoom axis, to really be able to get a more mathematical aproach on this program.</p>
<p>The second thing that i can think of is to really be able to zoom where the mouse stands, that would have been great however i couldn't understand how to do so on minilibx library.</p>
<p>As my grade i got 125, getting full grade on the mandatory and the bonus part. (Thanks to a strong defense the knohow of my collegues on how hard it is to do some of the steps with just mlx library).</p>
<div align="center"><br /><img src="https://user-images.githubusercontent.com/99777188/194442104-a2d55e31-9703-4c62-aa69-e91fd865dc4e.png" width="800" height="230" /></div>
