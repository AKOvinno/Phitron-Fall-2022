USE hr;

-- Q1. Find the employees who's salary is more than the average salary earned by all 
select first_name, salary
from employees
where salary > ( select AVG(salary) from employees);

-- Task: Find employess who's salary is greater than salary of 'Steven' 
select first_name, salary
from employees
where salary > (select salary from employees where first_name = 'Steven');

-- Q2. Find the employees who earn highest salary in each department
select first_name, salary, department_id
from employees
where (department_id, salary) IN (select department_id, max(salary)
								 from employees
								 group by department_id)
order by department_id;

-- Find the employees who's salary is greater than the average salary of that department
select first_name, salary, department_id
from employees e1
where salary > (select avg(salary) 
	   from employees e2 
       where e1.department_id=e2.department_id)
order by department_id;

-- JOIN USING (Find department name of any particular employee)
select employees.first_name, departments.department_id, departments.department_name
from departments JOIN employees 
USING (department_id);

-- JOIN ON (Find department name of any particular employee)
select employees.first_name, departments.department_id, departments.department_name
from employees join departments 
on employees.department_id = departments.department_id;

-- Without JOIN (Find department name of any particular employee)
select employees.first_name, departments.department_id, departments.department_name
from employees, departments
where employees.department_id = departments.department_id;
