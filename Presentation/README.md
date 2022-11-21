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

[Code 3](https://blog.csdn.net/jingqi814/article/details/23408217?spm=1001.2101.3001.6650.2&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-2-23408217-blog-108814425.pc_relevant_3mothn_strategy_recovery&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-2-23408217-blog-108814425.pc_relevant_3mothn_strategy_recovery&utm_relevant_index=3)

### Main Uses in Code 3:
- Code is written in c++
- Two const doubles: eps and pi
- Struct Point
  - two double variables
  - Point(x,y)
  - Override >> operator
  
- dcmp(double)

- typedef Point Vector;
  - A lot of vector operation overriding
  - ostream operator override
  - override < and ==

- Multiple double functions
  - Dot(Vector, Vector)
  - Cross(Vector, Vector)
  - Length(Vector)
  - Angle(Vector, Vector)
  - Area2(Point, Point, Point)

- Vector Rotate(Vector, double)
  - Uses sin and cos
  
- Vector Normal(Vector)

- Point GetLineIntersection(Point, Vector, Point, Vector)
  - return P + v * t;
  
- double DistancetoLine(Point, Point, Point)
  - calculate vector v1 and v2
  - return cross / Length
  
- double DistancetoSegment(Point, Point, Point)
  - calculate vector v and v1
  - double t = Dot / Dot
  - return A + v * t
  
- bool SegmentProperIntersection(Point, Point, Point, Point)
  - calculate c1, c2, c3, c4
  
- bool OnSegment(Point, Point, Point)
  - returns something
  
- double PolygonArea(Point*, int)
  - calculate area
  - return area / 2
  
- Point read_point()
  - read in x and y for a point
  
- Point getA(Point, Point, Point, double, double, double)
  - calculate r1 and r2
  - calculate r using r1 and r2
  
- Int main()
  - cin file into int variable
  - Point A, B, C, P, Q, R
  - double array for our six m values
  - double a, b, c
  - while loop
  - read in values for P, Q, and R
  - for loop: read in m values
  - calculate a, b, and c using m values
  - calculate A, B, and C using getA()
  - print
