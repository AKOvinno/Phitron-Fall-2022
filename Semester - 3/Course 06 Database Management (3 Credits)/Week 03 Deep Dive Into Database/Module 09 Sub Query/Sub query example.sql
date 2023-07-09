select first_name, salary
from employees
where salary < (
				select salary
				from employees
				where employee_id = "107"
				);
                