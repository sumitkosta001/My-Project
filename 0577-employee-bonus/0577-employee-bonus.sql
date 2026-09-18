# Write your MySQL query statement below
SELECT em.name, b.bonus
FROM Bonus as b
RIGHT JOIN Employee as em
ON b.empId = em.empID
WHERE b.Bonus IS NULL OR b.Bonus < 1000;