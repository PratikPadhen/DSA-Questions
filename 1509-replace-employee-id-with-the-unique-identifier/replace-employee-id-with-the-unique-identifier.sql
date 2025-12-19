# Write your MySQL query statement below
SELECT Em.unique_id , E.name
FROM Employees AS E
LEFT JOIN EmployeeUNI AS Em on E.id = Em.id
