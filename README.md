# Student’s Capital

## Task description
You are a student who makes money by buying, fixing, and selling laptops.  
You want to increase your capital this summer.  

- You can only buy and resell at most **N** distinct laptops.  
- You have **K** laptops available, each with:
  - `price[i]` – the price of the i-th laptop  
  - `gains[i]` – the expected profit from fixing and reselling it  
- Initially, you have **C** capital.  

Your goal: **maximize your capital** after summer ends.  

The program outputs the **final capital size** after selecting at most **N** laptops optimally.  

---

## Instructions
1. Installation:
   to install clone this repository
```
git clone https://github.com/t1plarnd/dl-test-task.git
```
3. Run this program:
   In case you have Visual Studio 2020, double click on `task.sln`.
   To run from terminal, compile with
   ```
   g++ task/main.cpp -o main
   ```
   and then run the compiled program
   ```
   ./main
   ```
5. Provide input according to instructions in terminal
### Input Format
The program expects input in the following order:
- ```N```
- ```C```
- ```Total number of laptops```
- ```gains array```
- ```price array```
### Output
The program prints the final capital after summer ends.
### Example
- ```2```
- ```50```
- ```60 100 120```
- ```10 20 30```
 
Result: ```270```
