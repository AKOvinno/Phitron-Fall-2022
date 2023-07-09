-- The following query uses NOT EXISTS to find those employees whose earns the maximum salary in his/her dept.
SELECT last_name, salary, department_id
FROM employees E1
WHERE NOT EXISTS
(
SELECT *
FROM employees E2
WHERE E2.department_id = E1.department_id AND E2.salary > E1.salary
);