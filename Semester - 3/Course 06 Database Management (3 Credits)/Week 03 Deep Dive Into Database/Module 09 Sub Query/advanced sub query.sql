-- employee records working in other than IT_PROG dept. whose salary is less than at least one employee of IT_PROG
select last_name, job_id, salary
from employees
where job_id <> "IT_PROG" -- <> means !=
and salary < any
(
select salary
from employees
where job_id = "IT_PROG"
);

