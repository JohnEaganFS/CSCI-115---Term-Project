TERM PROJECT

(due Fri, Dec 6, 11:59pm)

 

Part 1: Comparison of Sorting Algorithms (70% of the project grade)

The objective of the first part of the assignment is to study how the theoretical analysis of a variety of sorting algorithms compares with their actual performance. The sorting algorithms you need to compare are:

Insertion
Selection 
Bubble 
Merge sort
Quick sort
Heap sort
Analysis:

1. Theoretical question

Assume the n input elements are integers in the range [0, n-1]. For each algorithm, determine what are best, average, and worst-case inputs. Your write-up should list these for each algorithm. Include a sentence or two of justification for each one. You should answer what you expect to be true based on a theoretical analysis (and you should not refer to experimental results). In the subsequent questions, we will compare the experimental results to these theoretical predictions.

2. Data generation and experimental setup

The choice of test data is up to you (i.e., for each sorting algorithm, which input sizes should be tested, how many different inputs of the same size, which particular inputs of a given size.) Be smart about which experiments to run, i.e., don't run larger or more tests than you need to answer the above questions reasonably well. Also, note that you will need to run your experiments several times in order to get stable measurements (i.e., times will vary depending upon system load, input, etc.). Your experimental setup must be described in terms of the following:

What kind of machine did you use?
What timing mechanism?
How many times did you repeat each experiment?
What times are reported?
How did you select the inputs?
Did you use the same inputs for all sorting algorithms?
3. Which of the five sorts seems to perform the best (consider the best version of Quicksort)?

Graph the best-case running time as a function of input size n for all three versions (use the best case input you determined in each case in part 1).
Graph the worst-case running time as a function of input size n for all three versions (use the worst case input you determined in each case in part 1).
Graph the average case running time as a function of input size n for all three versions.
4. To what extent does the best, average and worst-case analyses (from class/textbook) of each sort agree with the experimental results?

To answer this question, you would need to find a way to compare the experimental results for a sort with its predicted theoretical times. One way to compare a time obtained experimentally to a predicted time of O(f(n)) (e.g., f(n)= n2 ) would be to divide the time for a number of runs with different input sizes by f(n) and see if you get a horizontal line (after some input size n0). That n0 would represent the n0 value for the asymptotic analysis. The value on the y-axis (assuming you put input size on the x-axis) will give you the constant value of the big-O. For each sort, and for each case (best, average, and worst), determine whether the observed experimental running time is of the same order as predicted by the asymptotic analysis. Your determination should be backed up by your experiments and analysis and you must explain your reasoning. If you found the sort didn't conform to the asymptotic analysis, you should try to understand why and provide an explanation.

5. For the comparison sorts, is the number of comparisons really a good predictor of the execution time? In other words, is a comparison a good choice of basic operation for analyzing these algorithms?

To answer this question, you would need to analyze your data to see if the number of
comparisons is correlated with execution time. Plot (time / #comp) vs. n and refer to these
plots in your answer

 

Deliverables:

REPORT part 1. It should address the points mentioned above. Your write-up must include a coherent discussion of which experiments you ran, how many times you ran them, etc. Grading on this assignment will put the greatest weight on the choice of test data and the quality and rightfulness of your discussion of your results. Don't be put off too much if there are some discrepancies between the theoretical results and the experiments. If that happens, try to explain why it occurred. Reports must be typed. Write your report carefully; explain things as clearly as possible, check for spelling errors. Answer the questions in the order presented. Use meaningful titles for each subsection and figure captions to explain the graphs. Also, graphs should be numbered and must be in the same section where they are discussed.
CODE part 1. AN ELECTRONIC COPY OF YOUR CODE IN A README FILE. Provide instructions of how to run your codes. Your codes need to be properly commented. Please note that I do not want your raw output, or a log of your program's execution
Part 2: Problem Solving and Analysis (30% of the project grade)

Design and implement an efficient algorithm that, given a set S of n integers and another integer x, determines whether or not there exist two elements in S whose sum is exactly x.

First, solve this problem in a brute-force manner by checking all possible pairs of elements. Show the pseudo-code and provide an analysis for the running time of this approach.
Second, find a more efficient algorithm that does nor require checking all possible pairs of elements. Show the pseudo-code and provide an analysis for the running time of this approach
Deliverables:

REPORT part 2. It should address the points mentioned above. Your write-up must include a coherent discussion of the running time analysis of each approach.
CODE part 2. AN ELECTRONIC COPY OF YOUR CODE IN A README FILE. Provide instructions of how to run your codes. Please note that I do not want a hardcopy of your code, your raw output, or a log of your program's execution.
Contribution Statement:

Provide a detailed statement about the contribution of each group member in completing this assignment. In particular, comment on positive and negative aspects of working together with your partner on this assignment. Please, note that in the event that you cannot work together with your partner on this assignment, you should inform me as soon as possible, but no later than November 16th at the latest. Individual solutions will not be accepted unless there is a good reason.
