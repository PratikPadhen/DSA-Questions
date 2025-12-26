# Write your MySQL query statement below
SELECT e.name , b.bonus
FROM Employee AS e
LEFT JOIN Bonus AS b ON e.empId=b.empId
WHERE b.bonus IS null OR b.bonus <1000
