-- in a correlated sub-query, we use row references of the main query to the sub-query.
-- Suppose, you need to retrieve those employees whose salary is higher than at least three other employees.
-- To write this query using sub-query, we need to do the following:
SELECT *
FROM employees E1
WHERE 3 <= (
SELECT COUNT(*)
FROM employees E2
WHERE E2.salary < E1.salary
);
