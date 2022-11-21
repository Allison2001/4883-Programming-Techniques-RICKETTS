# 4883 Programming Techniques Presentation
## Comparing Different Soulutions of 12165 Trangle Hazard

[Code 1](https://blog.csdn.net/keshuai19940722/article/details/47680005?spm=1001.2101.3001.6650.5&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-5-47680005-blog-22171689.pc_relevant_3mothn_strategy_and_data_recovery&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-5-47680005-blog-22171689.pc_relevant_3mothn_strategy_and_data_recovery&utm_relevant_index=6)

### Main Uses in Code 1:
- Code is written in C
- Uses struct to track points
  - two double variables
  - Establish Point(x,y)
  - read()
  - write()
  - Override + operator
  - Override - operator
  
- Point resize()

- Int main()
  - six double variables (m1, m2, m3, m4, m5, m6)
  - while loop
  - P.read(), Q.read(), R.read()
  - scanf to read in m variables
  - implements Menelaus Theorem
  - calculates points pa, pb, pc, using resize function and calculations from Menelaus
  - uses write() to print

[Code 2](https://blog.csdn.net/njuptACMcxk/article/details/108814425?spm=1001.2101.3001.6661.1&utm_medium=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-1-108814425-blog-47680005.pc_relevant_recovery_v2&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-1-108814425-blog-47680005.pc_relevant_recovery_v2&utm_relevant_index=1)

### Main Uses in Code 2:
- Code is written in c++
- Struct Point
  - two double variables
  - Point(x,y)
  
- typedef Point Vector;

- Overriding Vector Operators: +, -, *, /

- cal(double, double, double)
  - Uses Menelaus Theorem
  - returns (k1+(k1 x k2)+(k1 x k2 x k3))/(1-(k1 x k2 x k3))
    
- Int main()
  - scanf in file
  - for loop
  - initilize k1, k2, k3 while calculating their values
  - initilize x1, x2, x3 using cal() with values of k1, k2, k3
  - Calculate point of A, B, C using values of x1, x2, x3
  - print
