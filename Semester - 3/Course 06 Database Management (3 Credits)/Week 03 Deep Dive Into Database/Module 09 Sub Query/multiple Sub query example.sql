select first_name, salary, job_id
from employees
where job_id = (
				select job_id
				from employees
				where first_name ="diana"
				)
                and 
                salary > ( select salary
							from employees
                            where first_name = "bruce");
